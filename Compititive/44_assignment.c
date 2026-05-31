// Program which accept temperature in Fahrenheit and convert it into celsius. (1 celsius = (Fahrenheit - 32) * (5/9))
// Input: 10
// Output: -12.2222     (10 - 32) * (5 / 9)

#include <stdio.h>


int FhtoCs(float fTemp)
{
    double fCelcius = 0.0;

    fCelcius = (fTemp -32) * (5.0 /9.0);

    return fCelcius;
}

int main()
{
    float fValue = 0.0f;
    double dRet = 0.0;

    printf("Enter temprature in fahrenheit : ");
    scanf("%f",&fValue);

    dRet = FhtoCs(fValue);

    printf("Temprature in Celcius is  %lf Celcius",dRet);
    return 0;

}