#include<stdio.h>
int Bin_Srch(int a[],int k,int l,int h,int m)
{
    if(a[m]==k)
        return 1;
    else if(l==h)
        return -1;
    else if(a[m]>k)
    {
        h=m-1;
        m=(l+h)/2;
        return Bin_Srch(a,k,l,h,m);
    }
    else
    {
        l=m+1;
        m=(l+h)/2;
        return Bin_Srch(a,k,l,h,m);
    }
    
}
int main()
{
    int n,key,ans;
    scanf("%d",&n);
    n*=n;
    int a[n];
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    scanf("%d",&key);
    int low=0,high=n-1,mid=(low+high)/2;
    ans=Bin_Srch(a,key,low,high,mid);
    if(ans==1)
        printf("FOUND");
    else if(ans==-1)
        printf("NOT FOUND");
    return 0;
}
