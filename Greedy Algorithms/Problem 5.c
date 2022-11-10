#include<stdio.h>
int main()
{
    int n,k,t,max=0,min=0;
    scanf("%d",&n);
    int x=0,y=n-1,arr[n];
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    scanf("%d",&k);
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[i])
            {
                t=arr[i];
                arr[i]=arr[j];
                arr[j]=t;
            }
        }
    }
    while(x<=k && y>=k)
    {
        min+=arr[x];
        x++;
        max+=arr[y];
        y--;
    }
    printf("%d\n%d",min,max);
    return 0;
}
