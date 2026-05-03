#include <stdio.h>
#include <stdbool.h>
int main(void){
  //for the sake of learning
 //Variables
  int studentID; //int (4 bytes in modern systems)
  char section;
  
  printf("\nEnter student ID and Section:\n");
  scanf("%d %c",&studentID, &section);

  printf("---Student Infor--\n");
  printf("Student ID = %d\n", studentID);
  printf("Section = %c\n",section);
  

  //Excercise 1
  int age = 25;
  int year = 2025;
  int quantity =1;

  printf("You are %d years old \n",age);
  printf("The year is %d \n",year);
  printf("You have ordered %d item.\n",quantity);

  //Float : can store 6-7 decimal places

  float gpa = 2.5;
  float price = 19.999;
  float temperature = -36.5;
  printf("Your GPA is %.2f.\n",gpa);
  printf("The price is %.3f.\n",price);
  printf("The temperature is %.1f.\n",temperature);

  //Double : can store long decimal places
  double pi = 3.14159265358979323846;
  printf("The value of pi is %.2lf.\n",pi);

  //Char : can store a single character
  char grade = 'A'; //Single quotes for char
  printf("Your grade is %c.\n",grade);

  char symbol = '!';
  printf("Your favorite symbol is %c.\n",symbol);

  char currency = '$';
  printf("The currency is %c.\n",currency);

  //In C we don't have string we have char arrays
  char name[20]="Centella Asiatica";
  printf("My name is %s.\n",name);

  char email[30]="centella.asiatica@example.com";
  printf("Your email is %s.\n",email);

  //Boolean can store true or false values but in C we use int to represent boolean values
  bool isOnline = 0;
  if (isOnline){
    printf("You are online.\n");
  }
  else{
    printf("You are offline.\n");
  }

  
  
  
  
  
  
  
  
  
  
  
  
  return 0;
}