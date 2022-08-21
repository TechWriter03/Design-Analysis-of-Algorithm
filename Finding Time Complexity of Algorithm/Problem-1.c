#include<stdio.h>
int ans,c1=0,c2=0;
int gcd(int x,int y)
{
    for(int i=y;i>1;i--)
    {
        c1++;
        if(x%i==0 && y%i==0)
        {
            ans=i;
            break;
        }
    }
    printf("%d\n",ans);
    return c1;
}
int gcd_euclid(int x,int y)
{
    if(y==0)
    {  
        printf("%d\n",x);
        return c2;
    }
    c2++;
    return gcd_euclid(y,x%y);
}
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int c=gcd(a,b);
    int d=gcd_euclid(a,b);
    printf("%d\n",c);
    printf("%d\n",d);
    if(c<d)
        printf("Function 1");
    else if(c>d)
        printf("Function 2");
    else
        printf("Equal");
    return 0;
}
