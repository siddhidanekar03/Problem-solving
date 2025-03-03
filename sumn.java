import java.util.Scanner;
 
 public class sumn{
  public static void main(String[] args){
  
   Scanner sc=new Scanner(System.in);
   int sum=0;
   int num=sc.nextInt();
   
   for(int i=1;i<=num;i++)
{
    sum=sum+i;
}
  System.out.println("Sum of n natural number: "+ sum);
}
}