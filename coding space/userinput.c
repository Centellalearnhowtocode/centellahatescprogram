#include <stdio.h>
int main(){
 int age =0;
 float gpa =0.0f;
 char grade = '\0'; // \0 is the null character
 char name[30] = ""; //Empty string
 
  printf("Enter your name: ");
  scanf("%s", name);
  printf("Enter your age: ");
  scanf("%d", &age);
  printf("Enter your GPA: ");
  scanf("%f", &gpa);
  printf("Enter your grade: "); 
  scanf(" %c", &grade);

  printf("Hello, %s!\n", name); 
  printf("You are %d years old.\n", age);        
  printf("Your GPA is %.2f.\n", gpa);
  printf("Your grade is %c.\n", grade);
  


  return 0;
}