#include<stdio.h>
int main()
{
    int n,x,f=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    scanf("%d",&x);
    for(int j=0;j<n-1;j++)
    {
        for(int k=0;k<n;k++)
        {
            if(a[j]+a[k]==x)
            {
                f=1;
                printf("%d\n",a[j]);
                printf("%d",a[k]);
            }
        }
    }
    if(f==0)
    printf("No");
    return 0;
}
