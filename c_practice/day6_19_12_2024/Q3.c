/*Write a C program to determine eligibility for admission to a professional course based on the following criteria: Go to the editor
Eligibility Criteria : Marks in Maths >=65 and Marks in Phy >=55 and Marks in Chem>=50 and Total in all three subject >=190 or Total in Maths and Physics >=140 ------------------------------------- Input the marks obtained in Physics :65 Input the marks obtained in Chemistry :51 Input the marks obtained in Mathematics :72 Total marks of Maths, Physics and Chemistry : 188 Total marks of Maths and Physics : 137 The candidate is not eligible.
Expected Output :
The candidate is not eligible for admission.*/
#include<stdio.h>
int main(){
int p, c, m, t, mp;  
    printf("Eligibility Criteria :\n");   
    printf("Marks in Maths >=65\n");
    printf("and Marks in Phy >=55\n");
    printf("and Marks in Chem>=50\n");
    printf("and Total in all three subject >=190\n");
    printf("or Total in Maths and Physics >=140\n");
    printf("-------------------------------------\n");

    printf("Input the marks obtained in Physics :");   
    scanf("%d", &p);   
    printf("Input the marks obtained in Chemistry :");
    scanf("%d", &c);   
    printf("Input the marks obtained in Mathematics :");
    scanf("%d", &m);   
    printf("total marks of physics ,chem and math is %d\n",p+c+m);
    printf("total marks in maths and physics is %d\n",m+p);
    if(p>=65)
    if(c>=55)
    if(m>=50)
    if((p+c+m)>=190||(m+p)>=140)
    printf("the candidate is eligible for admisson\n");
    else
      printf("the candidate is not applicable for admisson");

    return 0;
}