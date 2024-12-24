/*Write a C program to compute the perimeter and area of a circle with a given radius.
Expected Output:
Perimeter of the Circle = 37.680000 inches
Area of the Circle = 113.040001 square inches*/
#include <stdio.h>

int main() {
   int radius;      
   float area, perimeter;   
   radius = 6;    
   perimeter = 2 * 3.14 * radius;
   printf("Perimeter of the Circle = %f inches\n", perimeter);
   area = 3.14 * radius * radius;
   printf("Area of the Circle = %f square inches\n", area);

   return(0);
}
