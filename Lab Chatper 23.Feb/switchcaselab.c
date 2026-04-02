#include <stdio.h>

int main() {
    int option;
    int password;
    int balance = 15000;
    printf("Enter PIN: 4321\n");
    printf("1.Check Balance\n");
    printf("2.Withdraw\n");
    printf("3.Deposit\n");
    printf("");

    printf("Enter your password: ");
    scanf("%d", &password); 
    printf("Enter your option: ");
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
  else{
    printf("\nYour your access denied.");
  }
    return 0;
}

