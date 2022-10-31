/* Problem Statement:
Given a sorted matrix mat[m][m] and an element ‘x’. Find whether the element x is present in the matrix.
Matrix is sorted in a way such that all elements in a row are sorted in increasing order and for row ‘i’,
where 1 <= i <= m-1, the first element of row ‘i’ is greater than or equal to the last element of row ‘i-1’. 

Input Format:
   First Line Contains Integer m – Size of array
   Next m*m lines Contains m*m numbers – Elements of an array
   An Integer x – Element to check present in matrix or not

Output Format:
   First Line Contains FOUND or NOT FOUND -  If x is the present print “FOUND” otherwise print “NOT FOUND” */

#include<stdio.h>
int Bin_Srch(int a[],int k,int l,int h,int m)
{
    if(a[m]==k)
        return 1;
    else if(l==h)
        return -1;
    else if(a[m]>k)
    {
        h=m-1;
        m=(l+h)/2;
        return Bin_Srch(a,k,l,h,m);
    }
    else
    {
        l=m+1;
        m=(l+h)/2;
        return Bin_Srch(a,k,l,h,m);
    }
    
}
int main()
{
    int n,key,ans;
    scanf("%d",&n);
    n*=n;
    int a[n];
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    scanf("%d",&key);
    int low=0,high=n-1,mid=(low+high)/2;
    ans=Bin_Srch(a,key,low,high,mid);
    if(ans==1)
        printf("FOUND");
    else if(ans==-1)
        printf("NOT FOUND");
    return 0;
}
