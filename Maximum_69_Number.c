#include<stdio.h>
int main()
{
    int a,b,k=0,s=0,n;
    scanf("%d",&a);
    n=a;
    while(a!=0)
    {
        b=a%10;
        s=s*10+b;
        a=a/10;
    }
    while(s!=0)
    {
        b=s%10;
        if(b==6)
        {
            k++;
            if(k==1)
            {
            b=9;
            }
        }
        s=s/10;
        printf("%d",b);
    }
}