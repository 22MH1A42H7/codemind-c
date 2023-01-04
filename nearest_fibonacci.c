#include<stdio.h>
int main()
{
    int a=0,b=1,c,d,e,min,max,n,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        c=a+b;
        a=b;
        b=c;
        if(c<n)
        {
            min=c;
        }
        else
        {
            max=c;
            break;
        }
    }
    d=n-min;
    e=max-n;
    if(d==e)
    {
        printf("%d %d",min,max);
    }
    else if(d>e)
    {
        printf("%d",max);
    }
    else
    {
        printf("%d",min);
    }
}