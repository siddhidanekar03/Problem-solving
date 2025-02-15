import java.util.Scanner;

public class acircle{
 
public static void main(String[] args){
  Scanner sc=new Scanner(System.in);   
   System.out.println("Enter the radius of circle:");
   int radius=sc.nextInt();
    
   float Area= 3.14f * radius *radius;
 System.out.println("Area of Cicle:"+Area);
}
}