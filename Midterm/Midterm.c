#include <stdio.h>
int main (){
char name[30]="Sokha";
float price1 =12.5;
float price2 =20;
int qty1=3;
int qty2=2;
float total1,total2;
float discountpercent=10,discountamount;
float vatpercent=10,vatamount,cashpaid=100,subtotal,grandtotal,change,afterDiscount;

//calculation
total1 = price1*qty1;
total2 = price2*qty2;
subtotal = total1+total2;
discountamount = subtotal*discountpercent/100;
afterDiscount = subtotal-discountamount;
vatamount= afterDiscount*vatpercent/100;
grandtotal= afterDiscount+vatamount;
change = cashpaid-grandtotal;

printf("==========RECEIPT=========");
printf("\nCostumer Name:%s",name);
printf("\n\nItem1 Total\t:%.2f",total1);
printf("\nItem2 Total\t:%.2f",total2);
printf("\n------------------------------");
printf("\nSubtotal\t:%.2f",subtotal);
printf("\nDiscount (10)\t:%.2f",discountamount);
printf("\nVAT (10)\t:%.2f",vatamount);
printf("\nGrand Total\t:%.2f",grandtotal);
printf("\nCash Paid\t:%.2f",cashpaid);
printf("\nChange\t\t:%.2f",change);
printf("\n==============================");

return 0;

}