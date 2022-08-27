#include<stdio.h>
int c=0;
int function(int n)
{
    int i=1,s=1;
    c+=2;
    while (s<=n)
    {
        c+=1;
        i++;
        c+=1;
        s+=i;
        c+=1;
    }
    c++;
    return c;
}
int main()
{
    int n;
    scanf("%d",&n);
    int a=function(n);
    printf("%d",a);
    return 0;
}
