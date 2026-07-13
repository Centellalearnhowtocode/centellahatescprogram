#include <stdio.h>

int main(void) {

  ///Excercise 1
    double balance;
    double deposit;
    double newbalance;
    
    printf("Enter Balance: ");
    scanf("%lf", &balance);

    printf("Enter Deposit: ");
    scanf("%lf", &deposit);

    newbalance = balance + deposit;

    printf("New Balance: %.2lf\n", newbalance);

    //Excercise 2

    double newbalance2;
    double withdraw;
    
    printf("Enter Balance: ");
    scanf("%lf", &balance);
    
    
    printf("Enter Deposit: ");
    scanf("%lf", &withdraw);
    
    newbalance2 = balance - withdraw;

    printf("New Balance: %.2lf\n", newbalance2);
    

    //Excercise 3
    double rate;
    double newbalance3;
    double interest;

    printf("Enter Balance: ");
    scanf("%lf", &balance);

    printf("Enter Rate: ");
    scanf("%lf", &rate);

    interest = balance * rate/100;
    printf("Interest: %0.2lf$\n",interest);
    

    newbalance3 = balance + interest;
    printf("New Balance: %0.2lf$",newbalance3);
    return 0;
}