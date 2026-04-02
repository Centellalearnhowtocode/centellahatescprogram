#include <stdio.h>
#include <math.h>
int main(){

  //practice
  int price = 500, qty=25, paid=180000, total= qty*price, change=paid-total, bonusCandy =change/1000, remaning=change%1000;
  printf("\t---------------------------------------------------------------------\n");
  printf("|Price|\t|Qty|\t|Total|\t\t|Paid|\t\t|Change|\t|Bonus Candy|\t|Remaining|\n");
  printf("\t---------------------------------------------------------------------\n");
  printf("%d\t%d\t%d riels\t%d riels\t%d riels\t%d pcs\t\t%d riels\n",price,qty,total,paid,change,bonusCandy,remaning);
  printf("\t---------------------------------------------------------------------\n");
  
  /*Lab: Chapter 5- Operators (Arithmetic Operators)*/
  //1
  double balance=100, deposit=50, newbalance= balance+deposit;
  printf("\nEnter Balance:\t%.lf",balance);
  printf("\nEnter Deposit:\t%.lf",deposit);
  printf("\nNew balance  :\t%.2lf$",newbalance);
  //2
  double balance2=200, withdraw2=33.5, newbalance2= balance2-withdraw2;
  printf("\n\t---------------------------------------------------------------------\n");
  printf("\n\nEnter Balance:\t%.2lf",balance2);
  printf("\nEnter Deposit:\t%.2lf",withdraw2);
  printf("\nNew balance  :\t%.2lf$\n\n",newbalance2);
  
  //3
  float balance3;
  double rate;
  double interest=(balance3*rate)/100; 
  double newbalance3=balance3+interest;
  double yearlyinterest=interest*12;
  char percent='%';
  //let says the interest rate is 6% monthly, therefore yearly interest rate = rate*12month
  printf("\t---------------------------------------------------------------------\n");
  printf("Enter Balance\t:\t$",balance3);
  scanf("%lf",&balance3);
  
  printf("\nEnter rate(%c)\t:%c",percent);
  scanf("%lf",&percent,&rate);
  
  printf("\nNew balance\t: \t$",newbalance2);
  scanf("%lf",&newbalance2);
  
  printf("\nInterest\t:%c",percent);
  scanf("%lf",&newbalance2);
  
  printf("\nYearly Interest\t: \t$",yearlyinterest);
  scanf("%lf",&yearlyinterest);
  
  printf("Balance\t:\t$%0.lf",balance3);
  printf("Rate\t:\t%0.lf%c",rate,percent);
  printf("New balance\t:\t$%2.lf",newbalance2);
  printf("Interest\t:\t$%2.lf",interest);
  printf("Yearly Interest\t:\t$%2.lf",yearlyinterest);
  printf("\n\t---------------------------------------------------------------------\n");

  return 