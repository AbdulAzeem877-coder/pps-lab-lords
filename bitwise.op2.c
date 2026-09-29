#include<stdio.h>
int main ()
{
    int a,result;
    printf ("enter first number:");
    scanf("%d",&a);

    result = ~a;
    printf("NOT Result = %d",result);

    return 0;

}
