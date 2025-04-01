public class Doublell {
    public class Node {
        int data;
        Node next;
        Node prev;

        public Node(int data) {
            this.data = data;
            this.next = null;
            this.prev = null;
        }
    }

    public static Node head;
    public static Node tail;
    public static int size = 0;

    public void addFirst(int data) {
        Node newNode = new Node(data);
        if (head == null) {
            head = tail = newNode;
        } else {
            newNode.next = head;
            head.prev = newNode;
            head = newNode;
        }
        size++;
    }

    public void print() {
        Node temp = head;
        while (temp != null) {
            System.out.print(temp.data + "<->");
            temp = temp.next;
        }
        System.out.println("null");
    }

    public int removeFirst() {
        if (head == null) {
            System.out.println("Doublell is empty");
            return Integer.MIN_VALUE;
        }

        int val = head.data;
        if (head == tail) {
            head = tail = null;
        } else {
            head = head.next;
            head.prev = null;
        }
        size--;
        return val;
    }
    public int removeLast() {
        if (tail == null) {
            System.out.println("Doublell is empty");
            return Integer.MIN_VALUE;
        }

        int val = tail.data;
        if (head == tail) {
            head = tail = null;
        } else {
            tail = tail.prev;
            tail.next = null;
        }
        size--;
        return val;
    }

    public void addLast(int data) {
        Node newNode = new Node(data);
        if (tail == null) {
            head = tail = newNode;
        } else {
            tail.next = newNode;
            newNode.prev = tail;
            tail = newNode;
        }
        size++;
    }
    public void reverse(){
        Node curr=head;
        Node prev = null;
        Node next;

        while(curr!=null){
            next=curr.next;
            curr.next=prev;
            curr.prev=next;
        prev=curr;
        curr=next;
    }
    head=prev;
    }

    public static void main(String[] args) {
        Doublell ll = new Doublell();
        ll.addFirst(1);
        ll.addFirst(2);
        ll.addFirst(3);
        ll.addFirst(4);
        ll.addFirst(5);
        ll.print();
        
        ll.removeFirst();
        ll.print();
        ll.addLast(7);
        ll.addLast(8);
        ll.print();
        ll.removeLast();
        ll.print();
        ll.reverse();
        ll.print();
    }
}
