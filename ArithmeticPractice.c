#include <stdio.h>
int main (){
  //Excercise 1
  float baseFareDollars;
  float distanceCostDollars;
  float distanceKm;
  float ratePeKmDollars;
  float ratePerMinuteDollars;
  int waitingMinute;

  float waitingCostDollars;
  float totalFareeDollars;

  distanceCostDollars = distanceKm*ratePeKmDollars;
  waitingCostDollars=waitingMinute*ratePerMinuteDollars;
  totalFareeDollars=baseFareDollars+distanceCostDollars+waitingCostDollars;

  printf("\nBase Fare ($)\t:\t");
  scanf("%f",&baseFareDollars);
  printf("\nDistance (km)\t:\t");
  scanf("%d",&distanceKm);
  printf("\nRate per km ($) :\t");
  scanf("%f",&ratePeKmDollars);
  printf("\nWaitng (min)\t:\t");
  scanf("%f",&waitingMinute);
  printf("Rate per min ($):\t");
  scanf("%f",&ratePerMinuteDollars);
  
  
printf("==============================================");
printf("TAXI FARE REPORT");
printf("==============================================");
 printf("\nBase Fare ($)\t:\t%f",ratePerMinuteDollars);
 printf("\nDistance (km)\t:\t%f",distanceKm);
 printf("\nRate per km ($) :\t%f",ratePeKmDollars);
 printf("\nWaitng (min)\t:\t%f",waitingMinute);
 printf("\nRate per min ($):\t%f",&ratePerMinuteDollars);
 printf("\nTOTAL FARE ($):%f",totalFareeDollars);
 
 //Excercise 2
  return 0;
}
