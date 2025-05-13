#include <stdio.h>

int main() 
{
    double PE, CE, call_value, totat_call, invest=500, profit=10000,t1, t2 ;
    double brokerage, service_tax, stt, stamp_duty, regulatory_charges,  total_charges;


    
    printf("Enter PE: ");
    scanf("%lf", &PE);
    printf("Enter CE ");
   scanf("%lf", &CE);
   
   totat_call=PE+CE;
   
   
   
   brokerage=totat_call*0.0003;
   

    // Calculating service tax on brokerage
    service_tax = brokerage* 0.1036; // 10.36% 
    
    t1=profit-service_tax;

    // Calculating STT 
    stt = t1 * 0.00025; // 0.025% 
    
    t2=stt-profit;

    // Calculating stamp duty
    stamp_duty = profit * 0.00002; // 0.002% 

    // Calculating regulatory charges
    regulatory_charges = profit * 0.00004; // 0.004%
    
    total_charges = brokerage + service_tax + stt + stamp_duty + regulatory_charges;


   

   
    printf("Total Charges: %.2lf\n", total_charges);
    printf("Net Profit: %.2lf\n", profit);
   

    
    
    

    
   

    return 0;
}
