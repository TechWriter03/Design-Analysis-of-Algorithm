#include<stdio.h>
int main()
{
    int n,f=0,T=0,c2;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        T+=a[i];
    }
    printf("\n");
    for(int i=0;i<n;i++)
    {
        int c=0;
        for(int j=i+1;j<n;j++)
        c+=a[j];
        if(i>0)
        {
            int k=i-1;
            while(k>=0)
            {
                c+=a[k];
                k--;
            }
        }
        if(c==a[i])
        {
            f=1;
            break;
        }
        for(int j=i+1;j<n;j++)
        {
            int c1=0;
            c1+=a[i]+a[j];
            c2=T-c1;
            if(c1==c2)
            {
                f=1;
                break;
            }
        }
    }
    if(f==1)
    printf("true");
    else
    printf("false");
    return 0;
}