/*Write a C program to print the following characters in reverse.
Test Characters: 'X', 'M', 'L'
Expected Output:
The reverse of XML is LMX*/

#include<stdio.h>
int main(){
    char char1='X';
    char char2='Y';
    char char3='Z';
    printf("the reverse of %c%c%c is %c%c%c",char1,char2,char3,char3,char2,char1);
    return 0;
}