#include <stdio.h>
int main()
{
    float time,principle,roi,si;
    printf("Enter Time:");
    scanf("%f",&time);
    printf("Enter Principle Amount:");
    scanf("%f",&principle);
    printf("Enter Rate Of Interest:");
    scanf("%f",&roi);
    si=(principle*roi*time);
    printf("Simple Interest Is :%f",si);
    return 0;
}