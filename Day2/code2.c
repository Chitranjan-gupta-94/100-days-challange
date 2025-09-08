#include<math.h>
#include<stdio.h>
int main()
{
    float a,b,c;
    printf("Enter the radius : ");
    scanf("%f",&a);
    c=2*3.14*a;
    b=3.14*pow(a,2);
    printf("area=%.2f\n",b);
    printf("circumference=%.2f\n",c);
    

}