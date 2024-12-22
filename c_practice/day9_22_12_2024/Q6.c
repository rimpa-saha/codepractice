/*if the ages of ram sayam and ajay are input through the keyboard,write a program to determine the youngest of the three.
age of ram:20
age of sayam:18
age of ajay:21
expexted out:sayam is the youngest of them
*/
#include<stdio.h>
int main (){
int a,b,c;
printf("input the age of ram,sayam and ajay:");
scanf("%d %d %d",&a,&b,&c);
if(a<b && a<c){
    printf("ram is the youngest of them");
}
else if(b<c && b<a){
    printf("sayam is the youngest of them");
}
else printf("ajay is the youngest of them");
    return 0;
}