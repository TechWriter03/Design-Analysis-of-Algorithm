/* Problem Statement:

Find the intersection of two sorted arrays. OR in other words,
Given 2 sorted arrays, find all the elements which occur in both the arrays. 

Input Format
The first line contains T, the number of test cases. Following T lines contain:
Line 1 contains N1, followed by N1 integers of the first array
Line 2 contains N2, followed by N2 integers of the second array

Output Format
The intersection of the arrays in a single line

Example

Input:
1
6 1 2 3 4 5 6
2 1 6

Output:
1 6

For Example:
–—————————————————————————————-
| Input             | Result  |
|———————————————————|—————————|
|1                  |1 2 3 4  |
|3 10 17 15         |         |
|6 2 7 10 15 57 246 |         |
|___________________|_________| */

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
