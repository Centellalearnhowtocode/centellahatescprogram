#include <stdio.h>
#include <stdbool.h>
int main (void){
  //Format Specifier = Special token that begin with % symbol followed by a character that represents the data type of the variable we want to print or read.
  
  int age = 25;
  float price = 12.18;
  char currency = '$';
  char name [20] = "Centella Asiatica";

  printf("%d\n",age);
  printf("%.2f\n",price);
  printf("%c\n",currency);
  printf("%s\n",name);
  
  //width

  int num1 = 1;
  int num2 = 10;
  int num3 = -100;

  printf("%+7d\n",num1);
  printf("%+7d\n",num2); 
  printf("%+7d\n",num3);

  float price1 = 12.18;
  float price2 = 1.45;
  float price3 = -124.56;

  printf("%7.2f\n",price1);
  printf("%7.2f\n",price2);  
  printf("%7.2f\n",price3);
  
  return 0;
}