import java.util.*;


public class Productbill{
  	
	public static void main(String args[]){

         Scanner sc= new Scanner(System.in);
	System.out.println("Enter the product name:");
        String name=sc.nextLine();

	System.out.println("Enter the product id:");
        String id=sc.nextLine();

	System.out.println("Enter the product price:");
        float price=sc.nextFloat();

        
        System.out.println("Enter the product quantity:");
        int quantity=sc.nextInt();


	  System.out.println("Enter GST Percentage:");
          int gst=sc.nextInt();
      
 	float tax=(price*gst*quantity)/100;
        float finalprice=(price*quantity) +tax;
	
	System.out.println("Product Details:");
        System.out.println("Product Namw:"+name);
        System.out.println("Product Id: "+id);
	System.out.println("Product Price Rs: "+price);
        System.out.println("Product Quantity: "+quantity);
	System.out.println("Product GST: "+gst);
        System.out.println("Product tax Rs: "+tax);
        System.out.println("Product Final Price Rs: "+finalprice);
    
        if(finalprice>500)
   {
    System.out.println("Product is expensive");
    }

   else{
    System.out.println("Product is affordable");
    }
  }
}









	

