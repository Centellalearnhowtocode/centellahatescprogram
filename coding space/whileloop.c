#include <stdio.h>
#include <string.h>
int main(){
  //while loop = repeat some code an unknown number of times until a condition is met
int number = 0;
char name[50]= "";
printf("Enter your name: ");
fgets(name, sizeof(name), stdin);
name[strlen(name) -1]= '\0'; // Remove the newline character from the end of the string

while(strlen(name) == 0){
  printf("Name cannot be empty. Please enter your name: ");
  fgets(name, sizeof(name), stdin);
  name[strlen(name) -1]= '\0'; // Remove the newline character from the end of the string
}
printf("Hello %s\n", name);

return 0;
}