/* Problem Statement :
The array-form of an integer num is an array representing its digits in left to right order.
For example, for num = 1321, the array form is [1,3,2,1].
Given num, the array-form of an integer, and an integer k, return the array-form of the integer num + k.

Example 1:
Input: num = [1,2,0,0], k = 34
Output: [1,2,3,4]
Explanation: 1200 + 34 = 1234

Example 2:
Input: num = [2,7,4], k = 181
Output: [4,5,5]
Explanation: 274 + 181 = 455

Example 3:
Input: num = [2,1,5], k = 806
Output: [1,0,2,1]
Explanation: 215 + 806 = 1021

Example 4:
Input: num = [9,9,9,9,9,9,9,9,9,9], k = 1
Output: [1,0,0,0,0,0,0,0,0,0,0]
Explanation: 9999999999 + 1 = 10000000000

Constraints:
1 <= num.length <= 104
0 <= num[i] <= 9
num does not contain any leading zeros except for the zero itself.
1 <= k <= 104

For example:
–——————————————————-
| Input  | Result  |
|————————|—————————|
|4       |1 2 3 4  |
|1 2 0 0 |         |
|34      |         |
|________|_________| */

#include<stdio.h>
int power(int x,int y)
{
    int ans=1;
    for(int i=1;i<=y;i++)
    {
        ans*=x;
    }
    return ans;
}
int main()
{
    long int n,t,t1,j=1,p,k;
    scanf("%ld",&n);
    long int a[n];
    for(int i=0;i<n;i++)
    scanf("%ld",&a[i]);
    scanf("%ld",&k);
    for(int i=n-1;i>=0;i--)
    {
        if(i==n-1){
        t=a[i];
        t1=t;
        }
        else{
        p=power(10,j);
        t1+=(p*a[i]);
        j++;
        }
    }
    t1+=k;
    long int b[n+10];
    int i=0;
    while(t1>0)
    {
        b[i]=t1%10;
        i++;
        t1/=10;
    }
    for(int j=i-1;j>=0;j--)
    printf("%ld ",b[j]);
    return 0;
}
