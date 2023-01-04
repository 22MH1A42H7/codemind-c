#include<stdio.h>
int main()
{
    int n,i,min,c=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    min=a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]<min)
        {
            min=a[i];
        }
    }
    for(min;;min--)
    {
        c=0;
        for(i=0;i<n;i++)
        {
            if(a[i]%min==0)
            {
                c++;
            }
        }
        if(c==n)
        {
            printf("%d",min);
            break;
        }
    }
    
}