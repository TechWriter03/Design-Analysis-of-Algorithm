#include<stdio.h>
int main()
{
    int n,k,f=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    scanf("%d",&k);
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[j]-a[i]==k)
            {
                f=1;
                break;
            }
        }
    }
    if(f==1)
        printf("1");
    else
        printf("0");
    return 0;
}
