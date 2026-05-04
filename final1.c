#include <stdio.h>
#include <math.h>
int main(){
 float basicSalary;
 float bonus;
 float totalSalary;
 float tax;
 float netSalary;

  printf("Enter your basic salary: ");
  scanf("%f", &basicSalary);

  if (basicSalary >=1000 && basicSalary <= 2000){
    bonus = basicSalary * 0.10;
  }
  else if (basicSalary >=500 && basicSalary <= 999){
    bonus = basicSalary * 0.05;
  }
  else if (basicSalary < 500){
    bonus = basicSalary * 0.0;
  }
  else{
    printf("Input invalid. Please enter a valid basic salary.\n");
    return 1;
  }

 totalSalary = basicSalary + bonus;

if (basicSalary >= 1200){
    tax = totalSalary * 0.08;
  }
  else{
    tax = totalSalary * 0;
  }

 netSalary = totalSalary - tax;

  if (basicSalary >=1000 && basicSalary <= 2000){
    printf("Bonus: %.2f\n", bonus);
    printf("Tax: %0.2f\n",tax);
    printf("Net Salary : %.2f\n", netSalary);
  }
  else if (basicSalary >=500 && basicSalary <= 999){
    printf("Bonus: %.2f\n", bonus);
    printf("Tax: %0.2f\n", tax);
    printf("Net Salary : %.2f\n", netSalary);
  }
  else if (basicSalary < 500){
    printf("Bonus: %.2f\n", bonus);
    printf("Tax: %0.2f\n", tax);
    printf("Net Salary is %.2f\n", netSalary);
  }
  return 0;
}