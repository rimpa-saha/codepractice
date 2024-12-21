/*Write a program in C to accept a grade and display the equivalent description:
Grade	Description
E	Excellent
V	Very Good
G	Good
A	Average
F	Fail*/
#include<stdio.h>
int main(){
 char grade;
 printf("input the grade(E,V,G,A,F)");
 scanf("%s",&grade);
 switch (grade) {
        case 'E':
            printf("Description: Excellent\n");
            break;\
        case 'V':
        printf("description:very good\n");
        break;
        case 'G':
        printf("description: good\n");
        break;
        case 'A':
        printf("description:Average\n");
        break;
        case 'F':
        printf("description:fail\n");
        break;
        default:
        printf("invalid");
 }
          return 0;
}