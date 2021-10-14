#include<stdio.h>
#include<math.h>
int main()
{
 float p,r,t,ci;
 printf("Enter Principle Amount");
 scanf("%f",&p);
 printf("Enter Time");
 scanf("%f",&t);
 printf("Enter Rate");
 scanf("%f",&r);
 ci=p* (pow((1+r/100),t));
 printf("Compound Interest = %f", ci);
 return 0;
}


