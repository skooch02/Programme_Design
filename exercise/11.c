#include<stdio.h>
int main(void)
{
    long long m,n,a[24] = {153,370,371,407,1634,8208,9474,54748,92727,93084,548834,1741725,4210818,9800817,9926315,24678050,24678051,88593477,146511208,472335975,534494836,912985153,4679307774};
    scanf("%lld %lld",&m,&n);
    int i=0,j=0;
    while(a[i]&&a[i]<=n)
        if(a[i++]>=m)
            j++;
    printf("%d\n",j);
    i=0;
    while(a[i]&&a[i]<=n)
    {
        if(a[i]>=m)
            printf("%lld\n", a[i]);
        i++;
    }
}