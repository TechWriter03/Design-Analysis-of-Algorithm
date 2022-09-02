#include<stdio.h>
int power(int x,int y)
{
    int ans=1;
    for(int i=1;i<=y;i++)
    {
        ans*=x;
    }
    return ans;
}
int main()
{
    long int n,t,t1,j=1,p,k;
    scanf("%ld",&n);
    long int a[n];
    for(int i=0;i<n;i++)
    scanf("%ld",&a[i]);
    scanf("%ld",&k);
    for(int i=n-1;i>=0;i--)
    {
        if(i==n-1){
        t=a[i];
        t1=t;
        }
        else{
        p=power(10,j);
        t1+=(p*a[i]);
        j++;
        }
    }
    t1+=k;
    long int b[n+10];
    int i=0;
    while(t1>0)
    {
        b[i]=t1%10;
        i++;
        t1/=10;
    }
    for(int j=i-1;j>=0;j--)
    printf("%ld ",b[j]);
    return 0;
}
