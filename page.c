#include <stdio.h>

int main() 
{
    
    float length, width, printable_width_inches, printable_height_inches, printable_height_points, printable_width_points;
    float top_margin, bottom_margin, left_margin, right_margin;

    
    printf("Enter the length of the paper in inches: ");
    scanf("%f", &length);
    
    printf("Enter the width of the paper in inches: ");
    scanf("%f", &width);
    
    printf("Enter the top margin in inches: ");
    scanf("%f", &top_margin);
    
    printf("Enter the bottom margin in inches: ");
    scanf("%f", &bottom_margin);
    
    printf("Enter the left margin in inches: ");
    scanf("%f", &left_margin);
    
    printf("Enter the right margin in inches: ");
    scanf("%f", &right_margin);
    
    printable_width_inches = width - left_margin - right_margin;
    printable_height_inches = length- top_margin - bottom_margin;
    
    
     printf("Paper height after reducing margin %f",printable_height_inches);
     printf("Paper width after reducing margin %f",printable_width_inches);
     
     
      
    //printable_height_points = printable_height_inches * 72.0;
   // printable_width_points = printable_width_inches * 72.0;
    
    
    return 0;
}
