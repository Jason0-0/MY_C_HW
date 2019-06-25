#include<stdio.h>
#include<math.h>
int fact(int k);
int main()
{
    float x;
    int n=1,sign=1;
    double term,sum;
    sum=0;
    scanf("%f",&x);
    do{
        term=(sign*pow(x,n))/fact(n);
        n=n+2;
        sign=-sign;
        sum+=term;
        printf("n=%ld,fact n=%ld,term=%lf\n",n,fact(n),term);
    }
    while(fabs(term)>pow(10,-5));
    printf("%lf\n",sum);
    return main();
}
int fact(int k)
{
    long long fac=1ll;
    for(long long i=1ll;i<=k;i++)
    {
        fac=fac*i;
    }
    return fac;
}
