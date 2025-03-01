import java.util.*;

public class Queue {

    // Enqueue method to add an element to the queue
    public static int enqueue(int[] queue, int size, int rear, int ele) {
        if (rear == size - 1) {
            System.out.println("Queue is full");
        } else {
            rear = rear + 1;
            queue[rear] = ele;
        }
        return rear; 
    }

    // Dequeue method to remove the front element from the queue
    public static int dequeue(int[] queue, int front, int rear) {
        if (front > rear) {
            System.out.println("Queue is empty");
            return -1;  // Indicating queue is empty
        } else {
            int temp = queue[front];
            front = front + 1;  // Move front pointer forward
            return temp;
        }
    }

    // Display the current elements in the queue
    public static void displayQueue(int[] queue, int front, int rear) {
        if (front > rear) {
            System.out.println("Queue is empty");
        } else {
            System.out.print("Queue elements: ");
            for (int i = front; i <= rear; i++) {
                System.out.print(queue[i] + " ");
            }
            System.out.println();
        }
    }

    public static void main(String[] args) {
        int size = 5;
        int[] queue = new int[size];
        int front = 0;
        int rear = -1;

        // Enqueue elements and update rear each time
        rear = enqueue(queue, size, rear, 10);
        rear = enqueue(queue, size, rear, 20);
        rear = enqueue(queue, size, rear, 30);

        // Display the queue after enqueuing elements
        displayQueue(queue, front, rear);

        // Dequeue elements and display the result
        System.out.println("Dequeued element: " + dequeue(queue, front, rear));
        front = front + 1;  // Update front after dequeue
        System.out.println("Dequeued element: " + dequeue(queue, front, rear));
        front = front + 1;  // Update front after dequeue

        // Display the queue after dequeuing elements
        displayQueue(queue, front, rear);
    }
}
