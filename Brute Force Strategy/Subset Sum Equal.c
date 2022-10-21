/* Problem Statement:

Given a non-empty array nums containing only positive integers, 
find if the array can be partitioned into two subsets such that the sum of elements in both subsets is equal.

Constraints:
1 <= n <= 200
1 <= nums[i] <= 100

For Example:
–——————————————————-
| Input   | Result |
|—————————|————————|
|4        |true    |
|1 5 11 5 |        |
|_________|________| */

#include<stdio.h>
int f=0;
void subset(int ind,int n,int a[],int sz,int temp[],int sum)
{
    int s=0;
    if(ind==n)
    {
        for(int i=0;i<sz;i++)
            s+=temp[i];
        if(s==sum/2)
            f=1;
        return;
    }
    subset(ind+1,n,a,sz,temp,sum);
    temp[sz]=a[ind];
    subset(ind+1,n,a,sz+1,temp,sum);
}
int main()
{
    int n,sum=0;
    scanf("%d",&n);
    int a[n],temp[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        sum+=a[i];
    }
    if(sum%2==1)
    {
        printf("false");
        return 0;
    }
    else
    {
        subset(0,n,a,0,temp,sum);
        if(f==0)
            printf("false");
        else
            printf("true");
        return 0;
    }
}
