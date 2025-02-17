import java.util.*;
 
 public class binomial{

 public static int fact(int n){
  int fact=1;
 for(int i=1;i<=n;i++)
{
  fact=fact*i;
}
return fact;
 }

public static int bioeff(int n,int r){
  
 int fact_n= fact(n);
 int fact_r= fact(r);
 int factn_r=fact(n-r);

 int bino= fact_n/(fact_r * factn_r);
return bino;
}

  

 
public static void main(String[] args){

 System.out.println(bioeff(5,2));
}
}
   
  