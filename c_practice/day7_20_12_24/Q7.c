/*7. Write a program in C that reads a forename, surname and year of birth and displays the names and the year one after another sequentially.
Expected Output :
Input your firstname: Rimpa
Input your lastname: Saha
Input your year of birth: 2006
Rimpa Saha 2006*/

#include<stdio.h>
int main(){
char firstname[20],lastname[20];
int birth_year;
printf("Input your firstname:");
scanf("%s",firstname);
printf("Input your lastname:");
scanf("%s",lastname);
printf("Input your year of birth:");
scanf("%d",&birth_year);
printf("%s %s %d",firstname,lastname,birth_year);
    return 0;
}