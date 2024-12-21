/*Write a C program which computes the area of various geometrical shapes using a menu-driven approach.
Test Data :
1
5
Expected Output :
The area is : 78.500000*/
#include<stdio.h>
int main(){
int choice,r,l,w,b,h;
float area;
printf("input 1 for area of circle\n");
printf("input 2 for area of rectangle\n");
printf("input 3 for area of triangle\n");
printf("input choice:");
scanf("%d",&choice);
switch(choice)
{
    case 1:
    printf("input the radius of a circle:");
    scanf("%d",&r);
    area=3.14*r*r;
    break;
  case 2:
    printf("input the length and width of a rectangle:");
    scanf("%d %d",&l,&w);
    area=l*w;
    break;  
      case 3:
    printf("input the base and height of a triangle:");
    scanf("%d %d",&b,&h);
    area=.5*b*h;
    break;
    default:
    printf("invalid choice");
}
printf("the area is:%f\n",area);

    return 0;
}