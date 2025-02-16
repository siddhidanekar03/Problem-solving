import java.util.Scanner;

public class areatri{
  public static void main(String args[]){
	Scanner sc=new Scanner (System.in);
	System.out.println("Enter the base of triangle:");
	 int base=sc.nextInt();
	System.out.println("Enter the height of triangle:");
	 int height=sc.nextInt();
 	 float Area=0.5f* base*height;
        System.out.println("Area of triangle:"+Area);

}
}
