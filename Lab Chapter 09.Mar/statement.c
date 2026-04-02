#include <stdio.h>
int main(){
  char name[26]="";
  int id;
  float c1,c2,c3;
  float s1,s2,s3;
  float totalcredit;
  float finalaverage;
  char result[26]="";
  totalcredit = c1+c2+c3;
  finalaverage =(s1*c1+s2*c2+s3*c3)/totalcredit;
  printf("\nEnter Your name\t:");
  scanf("%s",&name);
  printf("\nEnter Your ID\t:");
  scanf("%d",&id);
  printf("\nEnter your credits\t:");
  scanf("%f %f %f",&c1,&c2,&c3);
  printf("\nEnter your scores\t:");
  scanf("%f %f %f",&s1,&s2,&s3);
  
 
  
  printf("====STUDENT REPORT====");
  printf("\nName\t:%s",name);
  printf("\nID\t:%d",id);
  printf("\nCredits\t:%.f %.f %.f",c1,c2,c3);
  printf("\nScore\t:%.f %.f %.f",s1,s2,s3);
  printf("\nTotal Credit:%f",totalcredit);
  printf("\nFinal Average:%f",finalaverage);
  
  

  if (finalaverage <= 50){
    printf("\nResult\t:Pass");
  }
  else {
    printf("\nResult\t:Failed");
  }



  
  






  return 0;
}
