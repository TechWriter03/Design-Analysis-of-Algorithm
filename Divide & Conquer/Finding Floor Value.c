/* Problem Statement:
Given a sorted array and a value x, the floor of x is the largest element in array smaller than or equal to x. 
Write divide and conquer algorithm to find floor of x.

Input Format:
   First Line Contains Integer n – Size of array
   Next n lines Contains n numbers – Elements of an array
   Last Line Contains Integer x – Value for x
 
Output Format:
   First Line Contains Integer – Floor value for x */

#include<stdio.h>
int n,x;
void find(int a[],int l,int h,int m)
{
    if(a[m]<=x && a[m+1]>x)
    {
        printf("%d",a[m]);
        return ;
    }
    else if(a[m]>x)
        find(a,l,m-1,(l+m-1)/2);
    else if(a[m]<x)
        find(a,m+1,h,(m+1+h)/2);
    else 
        return ;
}
int main()
{
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    scanf("%d",&x);
    find(a,0,n-1,n/2);
    return 0;
}
