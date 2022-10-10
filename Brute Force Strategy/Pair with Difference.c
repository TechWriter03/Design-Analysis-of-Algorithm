/* Problem Statement:

Given an array A of sorted integers and another non negative integer k, 
find if there exists 2 indices i and j such that A[j] - A[i] = k, i != j.

Input Format:
First Line n - Number of elements in an array
Next n Lines - N elements in the array
k - Non - Negative Integer

Output Format:
1 - If pair exists
0 - If no pair exists

Explanation for the given Sample Testcase:
YES as 5 - 1 = 4
So Return 1.

For Example:
–——————————————————-
| Input  | Result  |
|————————|—————————|
|3       |1        |
|1 3 5   |         |
|4       |         |
|________|_________|  */

#include<stdio.h>
int main()
{
    int n,k,f=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    scanf("%d",&k);
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[j]-a[i]==k)
            {
                f=1;
                break;
            }
        }
    }
    if(f==1)
        printf("1");
    else
        printf("0");
    return 0;
}
