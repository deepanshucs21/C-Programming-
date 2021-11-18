#include<stdio.h>
int main()
{
int num,reverse=0,rem;
scanf("%d",&num);   
while(num!=0)
{  
rem=num%10;
reverse=reverse*10+rem;
num/=10;
}
printf("reverse is %d",reverse);
return 0;
}
