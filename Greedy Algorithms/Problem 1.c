/* Problem Statement:
Write a program to take value V and  we want to make change for V Rs, and we have infinite supply
of each of the denominations in Indian currency, i.e., we have infinite supply of 
{1,2,5,10,20,50,100,500,1000} valued coins/notes, what is the minimum number of coins and/or notes needed to make the change.

Input Format:
Take an integer from stdin.

Output Format:
print the integer which is change of the  number.

Example Input :
64

Output:
4

Explanaton:
We need a 50 Rs note and a 10 Rs note and two 2 rupee coins. */

#include<stdio.h>
int help(int n,int c)
{
    int a[9]={1,2,5,10,20,50,100,500,1000};
    if(n==0)
        return c;
    else
    {
        for(int i=0;i<9;i++)
        {
            if(a[i]<=n && a[i+1]>n)
            {
                n-=a[i];
                c++;
            }
        }
        return help(n,c);
    }
}
int main()
{
    int n,c=0;
    scanf("%d",&n);
    int count=help(n,c);
    printf("%d",count);
    return 0;
}
