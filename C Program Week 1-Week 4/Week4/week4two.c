#include <stdio.h>
int main (){
  /*
  char* name = "Centella";
  int age =19;
  printf("\nENTER YOUR GODAMN NAME "); //ask
  scanf("%s",&name); //wait
  */

char item[3]="Pen";
int quantity = 3;
float unitprice =1.5;
float total =4.5;

printf("Enter item: "); //ask
scanf("%s",&item); //wait
printf("Item: %s\n",item); //tell

printf("Enter Qty: ");
scanf("%d",&quantity);
printf("Qty: %d\n",quantity);

printf("Enter Unit Price: ");
scanf("%f",&unitprice);
printf("Item: $%0.2f\n",unitprice);

printf("Enter Total: ");
scanf("%f",&total);
printf("Item: $%0.2f\n\n",total);





  return 0;
}