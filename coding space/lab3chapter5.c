#include <stdio.h>
int main(void){
  ///Student score analyzer and card report
  float scores, totals, averages;
  float math, cp, eng, phy, ICT;
  float total, average, remaining;
  float percentage;
  cp= 85.5;
  math= 90.00;
  eng= 78.25;
  phy=88.00;
  ICT=92.00;
  total = math+ cp+ eng+ phy+ ICT;
  average = total/5;
  remaining = 500- total;
  int ID = 1024;
  char studentName[26] ="Centella";
  
  printf("=========REPORT CARD========\n");
  printf("Student ID: %d \n", ID);
  printf("Studet Name:%s \n",studentName);
  printf("_______________________________\n");
  printf("C Programming:%0.2f\n", cp);
  printf("C Programming:%0.2f\n", math);
  printf("C Programming:%0.2f\n", eng);
  printf("C Programming:%0.2f\n", phy);
  printf("C Programming:%0.2f\n ", ICT);
  printf("_______________________________\n");
  printf("Total:%0.2f\n",total);
  printf("Avergae : %0.2f \n",average);
  printf("Percentage: %0.2f",percentage);
  printf("Remaining: %0.2f",remaining);

  printf("====================================");






  return 0;
}