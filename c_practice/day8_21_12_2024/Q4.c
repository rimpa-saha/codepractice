/* Write a C program to calculate profit and loss on a transaction.
Test Data :
500 700
Expected Output :
You can booked your profit amount : 200*/
#include<stdio.h>
int main(){
int cprice,sprice,profit_loss;
printf("Input Cost Price: ");  
    scanf("%d", &cprice);  
    printf("Input Selling Price: ");  
    scanf("%d", &sprice);  

    if(sprice > cprice)  
    {  
        profit_loss = sprice - cprice;  
        printf("\nYou can book your profit amount : %d\n", profit_loss);  
    }  
    else if(cprice > sprice)  
    {  
        profit_loss = cprice - sprice;  
        printf("\nYou incurred a loss of amount : %d\n", profit_loss);  
    }  
    else 
    {  
        printf("\nYou are in a no profit, no loss condition.\n"); 
    }  
}  
 
