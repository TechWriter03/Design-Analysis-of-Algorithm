/* Problem Statement:
Given an array of 1s and 0s this has all 1s first followed by all 0s. Aim is to find the number of 0s.
Write a program using Divide and Conquer to Count the number of zeroes in the given array.

Input Format:
- First Line Contains Integer m – Size of array
- Next m lines Contains m numbers – Elements of an array

Output Format:
- First Line Contains Integer – Number of zeroes present in the given array. */

#include<stdio.h>
int divide(int n,int a[])
{
    int ans;
    for(int j=0;j<n;j++)
    {
        if(a[j]==1 && a[j+1]==0)
        {
            ans=j+1;
            ans=n-ans;
            break;
        }
        else
        {
            if(a[j]==1)
            ans=0;
            else if(a[j]==0)
            ans=n;
        }
    }
    return ans;
}
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    int t=divide(n,a);
    printf("%d",t);
    return 0;
}
