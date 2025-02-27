import java.util.*;

 public class maxele{
  public static void main(String[] args){
   
  Scanner sc = new Scanner(System.in);
   int n= sc.nextInt();
  int max= Integer.MIN_VALUE;
  int[]  arr = new int[n];
  
  for(int i=0;i<arr.length;i++)
{
   arr[i] = sc.nextInt();


 if(arr[i] > max)
   {
     max=arr[i];
   }
 }
System.out.println("The max number is:" +max);
}
}
   
