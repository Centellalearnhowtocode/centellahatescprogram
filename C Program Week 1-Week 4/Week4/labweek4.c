#include <stdio.h>
int main(){
 
  //Lab Chapter 4 27.Jan.2026
//1
int studentID1 =1001, studentID2 =1002, studentID3= 1003;
char studentname1[]="Dara", studentname2[]="Sopheak", studentname3[]="Lina";
double gpa1=3.5, gpa2=2.75,gpa3=3.9;
printf("\n------------------------------------------");
printf("\n  ID\tName\t\tGPA");
printf("\n------------------------------------------");
printf("\n%6d\t%-10s\t%.2f",studentID1,studentname1,gpa1);
printf("\n%6d\t%-10s\t%.2f",studentID2,studentname2,gpa2);
printf("\n%6d\t%-10s\t%.2f",studentID3,studentname3,gpa3);

//2
int studentID;
char studentname[20];
double GPA;

printf("\n\nstudentID:"); //ask
scanf("%d",&studentID); //wait
printf("\nstudentName:");
scanf("%s",&studentname);
printf("\nGPA:");
scanf("%lf",&GPA);

//printf("\nstudentID:%d \nstudentName:%s \nGPA:%.2lf",studentID,studentname,GPA); 


//3 print clean table
int code1= 101, code2 =205, code3=330;
char item1[]="Pen", item2[]="Notebook", item3[]="Pencil";
double price1=1.5, price2=2, price3=0.75;

printf("\n------------------------------------------");
printf("\nCode\tItem\t\tPrice");
printf("\n------------------------------------------");

printf("\n%-5d\t%-10s\t%-7.2lf",code1,item1,price1);
printf("\n%-5d\t%-10s\t%-7.2lf",code2,item2,price2);
printf("\n%-5d\t%-10s\t%-7.2lf",code3,item3,price3);
printf("\n------------------------------------------");



return 0;
}