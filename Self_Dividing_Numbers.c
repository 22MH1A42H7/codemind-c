#include<stdio.h>
int main()
{
    int a,b,c,i,n,d=0,s=0;
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++)
    {
        s=0;
        d=0;
        n=i;
        while(n!=0)
        {
            c=n%10;
            d++;
             if(c!=0)
            {
            if(i%c==0)
            {
                s++;
            }
            }
            n=n/10;
        }
        if(s==d)
        {
        printf("%d ",i);
        }
   }
}