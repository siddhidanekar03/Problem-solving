import java.util.*;

 public class calculator{
  public static void main(String[] args){
   
  Scanner sc = new Scanner(System.in);
        System.out.println("Enter a operator: ");
        
           char op = sc.next().charAt(0);
           int ans=0;
        
         System.out.println("Enter first number: ");
          int num1=sc.nextInt();

         System.out.println("Enter second number: ");
          int num2=sc.nextInt();
         

     switch(op){
    
 case '+' : ans=num1+num2;
            break;

 case '-' : ans=num1-num2;
            break;

 case '*' : ans=num1*num2;
            break;

 case '/' : ans=num1/num2;
            break;
default : System.out.println("Invalid operation ");
}

System.out.println("The final result:");
System.out.println(num1 + " " + op + " " + num2 + " = " + ans);
  
 }
}