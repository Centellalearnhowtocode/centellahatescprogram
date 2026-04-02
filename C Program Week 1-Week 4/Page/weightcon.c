#include <stdio.h>
int main (){
  //Weight converter program
  int choice = 0;
  float pounds = 0.0f;
  float kilograms = 0.0f;
  
  printf("Weight conversion Calculator\n");
  printf("1.Kilogram to Pounds:\n");
  printf("2.Pounds to Kilograms\n");
  printf("Enter your choice (1 or 2):");
  scanf("%d", &choice);
  if (choice ==1){
    //Kilogran to pounds
    printf("Enter the weight i Kilograms");
  }
  else if(choice ==2){
    printf("Enter the weight in pounds");
  }
  else {
    printf("Invalid choice! Please enter 1 or 2\n");
  }

  return 0;
}