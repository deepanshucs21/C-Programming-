#include <stdio.h>
int main()
{
    float math,phy,chem,english,comp,average;
    printf("Enter Marks In Maths :");
    scanf("%f",&math);
    printf("Enter Marks In Physics:");
    scanf("%f",&phy);
    printf("Enter Marks In Chemistry:");
    scanf("%f",&chem);
    printf("Enter Marks In English:");
    scanf("%f",&english);
    printf("Enter Marks In Computer:");
    scanf("%f",&comp);
    average=(math+phy+chem+english+comp)/5.0;
    printf("Average Is : %f",average);
    return 0;
}