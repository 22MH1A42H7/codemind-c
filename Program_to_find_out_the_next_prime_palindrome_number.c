#include<stdio.h>
int main()
{
    int a,b,c,r=0,i,j,f=0;
    scanf("%d",&a);
    for(i=a+1;;i++)
    {
        c=i;
        r=0;
        while(c!=0)
        {
            b=c%10;
            r=r*10+b;
            c=c/10;
        }
        if(r==i)
        {
        	f=0;
            for(j=1;j<=i;j++)
            {
                if(i%j==0)
                {
                    f++;
                }
            }
            if(f==2)
            {
                printf("%d",i);
                break;
            }
        
        }
    }
}