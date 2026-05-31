//Write a program which accept radius of circle from user and calculate is area. Consider value of PI as 3..13 (Area = PI * Radius * Radius)
//Input: 5.3
// Output: 88.2026
#include<stdio.h>

#define PI 3.14

double CircleArea(float fRadius)
{
    double fArea = 0.0;
    

    fArea = PI * fRadius * fRadius;

    return fArea;

}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter radius : \n");
    scanf("%f",&fValue);

    dRet = CircleArea(fValue);

    printf("Area is : %lf",dRet);

    return 0;
}