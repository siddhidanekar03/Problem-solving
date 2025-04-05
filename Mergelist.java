public class mergelist {

    public static class Node {
        int data;
        Node next;

        public Node(int data) {
            this.data = data;
            this.next = null;
        }
    }

    public static Node head;

    // Find the middle node to split the list
    public Node findMidNode(Node head) {
        if (head == null) return null;  // Guard clause for null list
        Node slow = head;
        Node fast = head;

        while (fast != null && fast.next != null) {
            slow = slow.next;
            fast = fast.next.next;
        }
        return slow;
    }

    // Merge two sorted lists
    public Node merge(Node head1, Node head2) {
        Node mergeLL = new Node(-1); // Temporary node to start the merged list
        Node temp = mergeLL;         // Pointer for the merged list

        // Merge two sorted lists
        while (head1 != null && head2 != null) {
            if (head1.data <= head2.data) {
                temp.next = head1;
                head1 = head1.next;
            } else {
                temp.next = head2;
                head2 = head2.next;
            }
            temp = temp.next;
        }

        // If any elements are left in head1
        while (head1 != null) {
            temp.next = head1;
            head1 = head1.next;
            temp = temp.next;
        }

        // If any elements are left in head2
        while (head2 != null) {
            temp.next = head2;
            head2 = head2.next;
            temp = temp.next;
        }

        return mergeLL.next; // Return the merged sorted list (skip the initial dummy node)
    }

    // Add a node at the beginning of the list
    public void addFirst(int data) {
        Node newNode = new Node(data);
        if (head == null) {
            head = newNode;
            return;
        }
        newNode.next = head;
        head = newNode;
    }

    // MergeSort to sort the linked list
    public Node mergeSort(Node head) {
        if (head == null || head.next == null) {
            return head; // Base case: list is already sorted (0 or 1 element)
        }

        // Find the middle node to divide the list into two halves
        Node mid = findMidNode(head);
        Node rightHead = mid.next;
        mid.next = null; // Split the list into two halves

        // Recursively sort both halves
        Node newLeft = mergeSort(head);
        Node newRight = mergeSort(rightHead);

        // Merge the sorted halves and return the result
        return merge(newLeft, newRight);
    }

    // Print the list
    public void print() {
        if (head == null) {
            System.out.println("LL is empty");
            return;
        }
        Node temp = head;
        while (temp != null) {
            System.out.print(temp.data + " -> ");
            temp = temp.next;
        }
        System.out.println("null");
    }

    // Main function to test the merge sort
    public static void main(String[] args) {
        mergelist ll = new mergelist();
        ll.addFirst(5);
        ll.addFirst(4);
        ll.addFirst(3);
        ll.addFirst(2);
        ll.addFirst(1);

        System.out.println("Original List:");
        ll.print();

        ll.head = ll.mergeSort(ll.head); // Sort the linked list using mergeSort

        System.out.println("Sorted List:");
        ll.print();
    }
}
