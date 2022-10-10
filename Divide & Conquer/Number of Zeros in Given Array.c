#include<stdio.h>
int divide(int n,int a[])
{
    int ans;
    for(int j=0;j<n;j++)
    {
        if(a[j]==1 && a[j+1]==0)
        {
            ans=j+1;
            ans=n-ans;
            break;
        }
        else
        {
            if(a[j]==1)
            ans=0;
            else if(a[j]==0)
            ans=n;
        }
    }
    return ans;
}
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    int t=divide(n,a);
    printf("%d",t);
    return 0;
}
