#include<stdio.h>
float calculateAverage(float a,float b)
{
    float avg = (a+b)/2.0;
    return avg;
}
int main()
{
    float x,y,av;
    scanf("%f %f", &x, &y);
    av = calculateAverage(x,y);
    printf("%f\n", av);
}
