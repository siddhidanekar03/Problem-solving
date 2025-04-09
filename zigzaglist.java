public class zigzaglist {
    public static class Node {
        int data;
        Node next;  // This should be of type Node, not int
        
        public Node(int data) {
            this.data = data;
            this.next = null;  // Initialize next as null
        }
    } 
    public static Node head;
    public static Node tail;

    public void zigzag(){
        Node slow=head;
        Node fast=head;
        while(fast != null && fast.next!=null){
            slow=slow.next;
            fast=fast.next.next;

        }
        Node midNode=slow;
        Node curr=midNode.next;
        midNode.next=null;
        Node prev=null;
        Node next;
        while(curr!=null){
            next=curr.next;
            curr.next=prev;
            prev=curr;
            curr=next;
    }

    Node left=head;
    Node right=prev;
    Node nextR,nextL;

    while(left!=null && right!=null){
        nextL=left.next;
        left.next=right;
        nextR=right.next;
        right.next=nextL;

        left=nextL;
        right=nextR;
    }
  }  
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
public void addLast(int data) {
    Node newNode = new Node(data); 
    if (head == null) {
        head = tail = newNode;  
        return;
    }
    tail.next = newNode; 
    tail = newNode; 
}

  public static void main(String args[]){
    zigzaglist ll =new zigzaglist();
    ll.addLast(1);
    ll.addLast(2);
    ll.addLast(3);
    ll.addLast(4);
    ll.addLast(5);
    ll.addLast(6);
    ll.print();
    ll.zigzag();
    ll.print();

  }
}
