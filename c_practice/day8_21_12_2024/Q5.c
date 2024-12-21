/*Write a program in C to calculate and print the electricity bill of a given customer. The customer ID, name, and unit consumed by the user should be captured from the keyboard to display the total amount to be paid to the customer.

The charge are as folAmount Charges @Rslow :

Unit	Charge/unit
upto 199	@1.20
200 and above but less than 400	@1.50
400 and above but less than 600	@1.80
600 and above	@2.00
If bill exceeds Rs. 400 then a surcharge of 15% will be charged and the minimum bill should be of Rs. 100/-

Test Data :
1001
James
800
Expected Output :
Customer IDNO :1001
Customer Name :James
unit Consumed :800
Amount Charges @Rs. 2.00 per unit : 1600.00
Surchage Amount : 240.00
Surchage Amount : 240.00
Net Amount Paid By the Customer : 1840.00 */
#include<stdio.h>
int main(){
int id,unit;
char name[25];
float charge,surcharge=0,gross_amount,net_amount;
printf("input the customer IDNO:");
scanf("%d",&id);
printf("input the name of customer :");
scanf("%s",name);
printf("input the unit consumed by customer:");
scanf("%d",&unit);
if(unit<200)
   charge=1.20;
   else if (unit <400 && unit>200)
   charge=1.50;
   else if(unit<600 && unit>400)
   charge=1.80;
   else 
   charge=2.00;
   gross_amount=unit*charge;
   if(gross_amount>300)
   surcharge=(gross_amount*15)/100;
   if(gross_amount<100)
   surcharge=100;
   net_amount=gross_amount+surcharge;
   printf(" customer IDNO:%d\n",id);
   printf("customer name:%s\n",name);
   printf("unit consumed:%d\n",unit);
   printf("Amount Charges @Rs.%f per unit:%f\n",charge,gross_amount);
   printf("Surchage Amount :%d\n",surcharge);
   printf("Net Amount Paid By the Customer :%f\n",net_amount);

 return 0;
}
