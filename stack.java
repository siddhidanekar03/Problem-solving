
public class stack {

    public static int push(int[] stack, int size, int top, int ele) {
        if (top == size - 1) {
            System.out.println("Stack is full");
        } else {
            top = top + 1;
            stack[top] = ele;
        }
        return top;    
 }

    public static int pop(int[] stack, int top) {
        if (top == -1) {
            System.out.println("Stack is empty");
            return -1;
        } else {
            int temp = stack[top];
            top = top - 1;
            return temp; 
        }
    }

public static void displayStack(int[] stack, int top) {
        if (top == -1) {
            System.out.println("Stack is empty");
        } else {
            System.out.print("Stack elements: ");
            for (int i = 0; i <= top; i++) {
                System.out.print(stack[i] + " ");
            }
            System.out.println();
        }
    }


    public static void main(String[] args) {
        int size = 5;
        int[] stack = new int[size];
        int top = -1;

        top = push(stack, size, top, 10);
        top = push(stack, size, top, 20);
        top = push(stack, size, top, 30);
         displayStack(stack, top);

               System.out.println("Popped element: " + pop(stack, top));
               top=top-1;

    displayStack(stack, top);


    }
}