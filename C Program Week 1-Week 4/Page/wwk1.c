#include <stdio.h>

int main(){


//1
int StudentAge;
float gpa;
char gender;
double tuitionFee;
StudentAge = 21;
gpa = 3.45;
gender = 'M';
tuitionFee = 1200.50;

printf("Student Age \t= %d\n", StudentAge);
printf("GPA \t= %f\n", gpa);
printf("Gender \t= %c\n", gender);
printf("Tuition Fee \t= %.2f\n", tuitionFee);

//2
int year;
float tempurature;
char grade;
double pi;

year=2025;
tempurature= 36.5;
grade ='A';
pi =  3.14159;
//3
printf("\nYear\t\t=%d",year);
printf("\nTempurature\t=%.1f",tempurature);
printf("\nGrade\t\t=%d",grade);
printf("\nYear\t\t=%0.5f",pi);

int a,b,c;
a=10, b=20;
c=a+b;
printf("\n%d, %d, %d",a,b,c);
//4
int age19; age19 = 19;
float midtermscore99; midtermscore99 = 99.8;
char gradeA; gradeA ='A';
double totalpayment; totalpayment = 1500.25;

printf("\nAge   \t= %d\n",age19);
printf("Midterm score   \t= %0.1f\n",midtermscore99);
printf("Grade = %c\n",gradeA);
printf("Total Payment \t= %0.2f \n", totalpayment);


//5
int age;
float mygpa;
double tuition;
char firstname;

age=18;
mygpa=3.5;
tuition=1200.50;
firstname ='T';

printf("\nAge   \t= %d\n",age);
printf("GPA   \t= %.1f\n",mygpa);
printf("Tuition = %.2f\n",tuition);
printf("Firstname = %c\n", firstname);

//6

int mom, dad;
mom=20, dad=30;
int family; family =mom+dad;
printf("Age = %d\n",mom);
printf("Age = %d\n",dad);
printf("Age = %d\n",family);

//7
int class;
float GPA;
char Grade;
class = 5;
GPA = 2.5;
Grade ='A';

printf("\nClass =%d", class);
printf("\nGPA =%.1f", GPA);
printf("\nGrade =%c\n", Grade);

//8
int Score; 
Score= 50;
printf("\nThe score is %d.",Score);

Score= 80;
printf("\nThe score is %d.\n",Score);

//9
int stu;
float average;
double budget;
char section;
stu = 35; average = 88.756; budget = 123456.789; section = 'B';
printf("\nStduent =%d",stu);
printf("\nAverage Score =%0.2f",average);
printf("\nTotal Fee =%0.3f",budget);
printf("\nGrade =%c\n",section);

//10
char* studentname; studentname = "Centella";
int AGE; AGE =19;
float GPA$; GPA$ = 3.4;
char GrAde; GrAde ='A';
double fee$; fee$ = 1200.50;
int Year$; Year$= 2026;
printf("\nStudent Name \t:\t%s",studentname);
printf("\nAge \t\t:\t%d",AGE);
printf("\nGPA \t\t:\t%0.1f",GPA$);
printf("\nGrade \t\t:\t%c",GrAde);
printf("\nTuition Fee \t:\t%.2f",fee$);
printf("\nYear \t\t:\t%d",Year$);

return 0;
}