#include<stdio.h>
int main()
{
    int a,b,c,d,e;
    float f;
    printf("Enter your first number:",a);
    scanf("%d",&a);
    printf("Enter your second number:",b);
    scanf("%d",&b);
    c=a+b;
    d=a-b;
    e=a*b;
    f=(float) a/b;
    printf("The the sum of number is %d\n",c);
    printf("The difference is %d\n",d);
    printf("the product is %d\n",e);
    printf("the queotient is %.2f\n",f);
    return 0;

}
