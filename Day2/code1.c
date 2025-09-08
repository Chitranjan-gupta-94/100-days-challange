#include<stdio.h>
int main()
{
    int a,b,c,d;
    printf("Enter the length:",a);
    scanf("%d",&a);
    printf("Enter the breath",b);
    scanf("%d",&b);
    c=a*b;
    d=2*(a+b);
    printf("perimeter:%d\n",d);
    printf("area:%d\n",c);

    return 0;

}
