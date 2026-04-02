#include <stdio.h>
#include <math.h>
int main (){
  // Compound interest cal
  //A = P(1+r/n)^nt how to calculate compound interest

  double principal ;
  double rate;
  int years;
  int timescompounded;
  double total ;
  printf("Compound Interest Calculator\n");
  printf("Enter the principal (P):");
  scanf("%lf",&principal);

  printf("Enter interest rate % (r):");
  scanf("%lf",&rate);
  rate = rate/100;

  printf("Enter the number of year (t): ");
  scanf("%d",&years);

  printf("Enter # of times compoundeed per year (n):");
  scanf("%d",&timescompounded);

  total = principal * pow(1+ rate / timescompounded, timescompounded * years);
  

  printf("After %d years, the total will be $%.2lf", years, total);
  
  return 0;
}