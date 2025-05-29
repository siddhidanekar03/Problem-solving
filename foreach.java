
import java.util.Scanner;

public class foreach {
    public static void main(String[] args) {
        Scanner sc =new Scanner(System.in);
        int[] arr=new int[5];
        for(int i=0;i<arr.length;i++){
            arr[i]=sc.nextInt();

        }
        for(int num : arr){
            System.err.println(num);
        }
        sc.close();
    }
}
