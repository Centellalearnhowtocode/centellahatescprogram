#include <stdio.h>
int main(){
	char cname[20];
	float roomprice,charge,discount;
	int type,night;
	
	printf("Enter Customer Name : ");
	scanf("%s",&cname);
	printf("\nRoom Type : ");
	scanf("%d",&type);
	printf("\nEnter Room Price : ");
	scanf("%f",&roomprice);
	printf("\nEnter How many nights : ");
	scanf("%d",&night);
	
	float total = roomprice * night;
	
	if(type = 1){
		charge = total*0;
		}
		else if (type = 2){
			charge = total * 15/100;
		}
		else if (type = 3){
			charge = total * 30/100;
		}
		
	if(night >= 3){
		discount = (total + charge) *10/100;	
	}
	
	if(roomprice < 0 || night <0 || ( type !=1 && type !=2 && type !=3 )){
	printf("Invalid Input !!!\n");
	return 0;}
	
	float subtotal = total + charge - discount;
	
	printf("============= Hotel Receipts =============\n");
	printf("Customer Name \t\t : %s\n",cname);
	
		if ( type == 1)
		printf("Room Type \t\t : Standard\n");
		else if (type == 2)
		printf("Room Type \t\t : Deluxe\n");
		else
		printf("Room Type \t\t : VIP\n");
		
	printf("Room Price \t\t : %.2f\n",roomprice);
	printf("Nights \t\t\t : %d\n",night);
	printf("Extra Charge \t\t : %.2f\n",charge);
	printf("Discount \t\t : %.2f\n",discount);
	printf("SubTotal \t\t : %.2f\n",subtotal);
	
	
	return 0;
}