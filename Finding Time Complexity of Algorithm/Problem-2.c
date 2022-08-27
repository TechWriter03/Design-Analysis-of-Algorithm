#include<stdio.h>
int c=0;
void func(int n)
{
    if(n==1)
    {
        c++;
        //printf("");
        c++;
    }
    else
    {
        c++;
        for(int i=1;i<=n;i++)
        {
            c++;
            for(int j=1;j<=n;j++)
            {
                c++;
                //printf("");
                c++;
                //printf("");
                c++;
                break;
            }
            c++;
        }
        c++;
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    func(n);
    printf("%d",c);
    return 0;
}
