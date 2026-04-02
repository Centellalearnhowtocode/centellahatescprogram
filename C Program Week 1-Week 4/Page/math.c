#include <stdio.h>
#include <math.h>
int main ()
{

  
  
  double radius = 0.0;
  double area = 0.0;
  double surfaceArea =0.00;
  double volume =0.0;
  const double PI =3.14;
  
  printf("Enter the radius: ");
  scanf("%lf",&radius);
  
  area = 4*PI*pow(radius,2);
  surfaceArea = 4*PI*pow(radius,2);
  
  
  printf("Area: %.2lf", area);
  printf("\nSurface Area: %.2f\n", surfaceArea);
  
  const double mynum =12; //you cannot declare const variables without value or else it will not work
  printf("My number is 0%0.lf", mynum);

  return 0;
}