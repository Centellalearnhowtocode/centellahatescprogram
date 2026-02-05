#include <stdio.h>
#include <string.h>
int main() {
  int age = 0;
  float gpa = 0.0f;
  char grade= '\0';
  char name[30] = "";
  
  printf("Enter your age: ");
  scanf("%d",&age);
  
  printf("Enter your gpa: ");
  scanf("%f",&gpa); //input buffer: 3.2\n

  printf("Enter your grade: ");
  scanf(" %c",&grade); //skip new line character

  getchar(); //get character
  printf("Enter your name: ");
  fgets(name, sizeof(name), stdin); // just like scanf but it reads all the data input, s in fgets is for string
  name[strlen(name)-1] ='\0' ;
  printf("Age\t:\t%d\n",age);
  printf("GPA\t:\t%0.2f\n",gpa);
  printf("Grade\t:\t%c\n",grade);
  printf("Name\t:\t%s\n",name);

  return 0;
}
