#include <stdio.h>
#include <stdbool.h>
int main(void){
  //Boolean can store true or false values but in C we use int to represent boolean values
  bool isStudent;

  printf("Are you a student?");
  scanf("%d", &isStudent);

  if (isStudent == false){
    printf("You are a student.\n");
  }
  else{
    printf("You are not a student.\n");
  }

  return 0;
}