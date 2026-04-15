#include <stdio.h>

int main() {
    int option;
    int password;
    int balance;
    balance= 15000;
    int withdraw;
    int deposit;
    int remanining;

    printf("1.Check Balance\n");
    printf("2.Withdraw\n");
    printf("3.Deposit\n");

    printf("Enter your password: ");
    scanf("%d", &password); 
    printf("\nEnter your option: ");
    scanf("%d", &option);

  if (password==4321){
    printf("Your Password is correct.");
  }
  else {
    printf("Password is incorrect.");
  }
  if (option ==1){
    printf("Your balance is $%d.", balance);
  }
  else if(option==2){
    printf("\nEnter withdraw amount:");
    scanf("%d",&withdraw);
    printf("\nYour withdraw amount is %d.",withdraw);
    remanining=balance-withdraw;
    printf("\nYour remanining balance is %d",remanining);
  }
  else if(option==3){
    printf("Enter your deposit amount:");
    scanf("%d",&deposit);
    printf("\nYour deposit amount amount is %d", deposit);
    remanining=balance+deposit;
    printf("\nYour total balance is %d", remanining);
  }
  else{
    printf("\nYour your access denied.");
  }
    return 0;
}

