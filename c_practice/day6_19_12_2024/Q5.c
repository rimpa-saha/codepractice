/*Write a program to find the grade of a student when grades are allocated as given in the table below. Percentage of the marks obtained by the student is input to the program.
Percentage of Marks	Grade
Above 90%	A
80% to 90%	B
70% to 80%	C
60% to 70%	D
Below 60%
	OUTPUT:
Enter the percentage of the number: 60
Grade D     E*/

# include<stdio.h>
int main(){
int n;
printf("enter a percentage:");
scanf("%d",&n);
if(n > 90)
printf("Grade A");
else if(n > 80)
printf("Grade B");
else if(n > 70)
printf("Grade C");
else if(n >= 60)
printf("Grade D");
else
printf("Grade E");
 return 0;
}
