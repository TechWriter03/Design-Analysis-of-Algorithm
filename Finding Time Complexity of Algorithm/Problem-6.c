#include<stdio.h>
int c=0;
void reverse(int n)
{
    int rev=0,rem;
    c++;
    while(n!=0)
    {
        c++;
        rem=n%10;
        c++;
        rev=rev*10+rem;
        c++;
        n/=10;
        c++;
    }
    c++;
    // printf("%d",rev);
    c++;
}
int main()
{
    int n;
    scanf("%d",&n);
    reverse(n);
    printf("%d",c);
    return 0;
}
