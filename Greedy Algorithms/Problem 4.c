/* Problem Statement:
A person needs to eat burgers. Each burger contains a count of calorie. After eating the burger, the person needs to run a distance to burn out his calories. 
If he has eaten i burgers with c calories each, then he has to run at least 3i * c  kilometers to burn out the calories. For  example, if he ate 3
burgers with the count of calorie in the order: [1, 3, 2], the kilometers he needs to run are (30 * 1) + (31 * 3) + (32 * 2) = 1 + 9 + 18 = 28.
But this is not the minimum, so need to try out other orders of consumption and choose the minimum value. Determine the minimum distance
he needs to run. Note: He can eat burger in any order and use an efficient sorting algorithm.

Input Format:
   First Line contains the number of burgers
   Second line contains calories of each burger which is n space-separate integers 
 
Output Format:
   Print minimum number of kilometers needed to run to burn out the calories
 
For example:
–—————————————————-
| Input  | Result |
|————————|————————|
|3       | 76     |
|5 10 7  |        |
|________|________| */

#include<stdio.h>
int power(int x,int y)
{
    int ans=1;
    for(int i=1;i<=y;i++)
        ans*=x;
    return ans;
}
int main()
{
    int n,s=0,t;
    scanf("%d",&n);
    int a[n];
    for(int j=0;j<n;j++)
        scanf("%d",&a[j]);
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[j]>a[i])
            {
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }
    for(int i=0;i<n;i++)
        s+=power(3,i)*a[i];
    printf("%d",s);
    return 0;
}
