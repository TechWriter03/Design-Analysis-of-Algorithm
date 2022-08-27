#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++){
    int m,n;
    scanf("%d",&m);
    int a[m];
    for(int i=0;i<m;i++)
    scanf("%d",&a[i]);
    scanf("%d",&n);
    int b[n];
    for(int i=0;i<n;i++)
        scanf("%d",&b[i]);
    if(m<n)
    {
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(a[i]==b[j])
                    printf("%d ",b[j]);
            }
        }
    }
    else
    {
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(b[i]==a[j])
                    printf("%d ",b[i]);
            }
        }
    }
    }
    return 0;
}
