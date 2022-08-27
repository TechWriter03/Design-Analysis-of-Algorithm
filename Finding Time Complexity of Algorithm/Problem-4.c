#include <stdio.h>
int c=0;
void Factor(int n)
{
    for (int i=1;i<=n;i++)
    {
        c++;
        c++;
        if (n%i==0)
        {
            //printf("%d",i);
        }
    }
    c++;
    c++;
    //return 0;
}
int main()
{
    int n;
    scanf("%d",&n);
    Factor(n);
    printf("%d",c);
}
