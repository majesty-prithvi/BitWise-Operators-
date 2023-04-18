#include <stdio.h>
int main()
{   int a=10;
    int b=3;
    int j,k,l;

    printf("Output= %d\n", a & b);
    printf("Output= %d\n", a | b);
    printf("Output= %d\n", a ^ b);
    printf(" Please, Enter a Number : ");
    scanf("%d",&l);
    printf("\n ");
    for(j=7;j>=0;j--)
    {
        k=l&(1<<j);
        if(k==0)
            printf("0");
        else
            printf("1");}
    printf("\n");
    if((l & 1) == 0)
        printf("Entered No. - Even");
    else
        printf("Entered No. - Odd");
    return 0;

}
