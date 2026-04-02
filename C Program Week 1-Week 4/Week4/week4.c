#include <stdio.h>
int main(){
//week 4
// display both string and value
//every function in C has parenthesee


char item[] = "Notebook";
int qty = 3;
int unitprice = 3;
float total = 4.5;
int discount = 10;
float final = 4.05;
char p= '%';
char d='$';

printf("Item\t:%s\n", item);
printf("Qty\t:%d\n", qty);
printf("Unit\t:%c%d\n", d,unitprice);
printf("Total\t:%c%0.1f\n", d,total);
printf("Discount:%d%c\n", discount,p);
printf("Final\t:%c%0.2f",d, final);

return 0;

}