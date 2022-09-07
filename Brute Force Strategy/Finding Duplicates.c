/* Problem Statement:
Find Duplicate in Array.
Given a read only array of n + 1 integers between 1 and n, find one number that repeats.

Input Format:
First Line - Number of elements
n Lines - n Elements

Output Format:
Element x - That is repeated

For example:
-————————————————————-
| Input    | Result  |
|——————————|—————————|
|5         |1        |
|1 1 2 3 4 |         |
|__________|_________| */

#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
                printf("%d",a[i]);
        }
    }
    return 0;
}
