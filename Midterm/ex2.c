#include <stdio.h>
int main (){
  char name[20] ="Dara";
  int id = 1023;
  int c1=3,c2=4,c3=2;
  int s1=78,s2=65,s3=90;
  int totalcredit;
  int totalscore;
  double finalaverage;
  totalcredit = c1+c2+c3;
  totalscore =(c1*s1)+ (c2*s2)+ (c3*s3);
  finalaverage = totalscore/totalcredit;
  
  printf("======STUDENT REPORT=====");
  printf("\nName\t\t: %s",name);
  printf("\nID\t\t: %d",id);
  printf("\nCredits\t\t: %d %d %d",c1,c2,c3);
  printf("\nScore\t\t: %d %d %d",s1,s2,s3);
  printf("\nTotal Credits\t: %d",totalcredit);
  printf("\nFinal Average\t: %.2lf",finalaverage);
  printf("\n======================================");

return 0;
}