#include <stdio.h>
#include <string.h>
int main (){
  
  //Shopping cart
  char item[50] = "";
  float price = 0.0f;
  int quantitiy = 0;
  char currency ='$';
  float total = 0.0f;

  printf("What item would you like to buy?:");
  fgets(item, sizeof(item),stdin);
  item[strlen(item)-1] ='\0';
  printf("What is the price of each?");
  scanf("%f",&price);

  printf("How many would you like:");
  scanf("%d",&quantitiy);

  total = price*quantitiy;

  printf("You have bought %d %s", quantitiy, item);
  printf("\nYour total will be %0.2f%c.",total,currency);

  return 0;
}