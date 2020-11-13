#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int fact(int num)
{
    int fac =1;
    if(num==0||num==1)
    {
        return 1;
    }
    else
    {
        while(num!=0)
        {
        fac=fac*num;
        num--;
        }
       
        return fac;
    }
}
int main() {
     
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n,nw=0,j,r;
    scanf("%d",&n);
    j=n/2;
    r=n-1;
    if(n%2==0)
    {
        for(int i=1;i<=j;i++)
        {
            nw=nw+(fact(r)/(fact(i)*fact(n-2)));
            r=r-1;
            n=n-2;
        }
    }
    else
    {
        for(int i=1;i<=j;i++)
        {
            nw=nw+(fact(r)/(fact(i)*fact(n-2)));
            r=r-1;
            n-2;
        }
    }
    printf("%d",nw+1);
    
    return 0;
}
