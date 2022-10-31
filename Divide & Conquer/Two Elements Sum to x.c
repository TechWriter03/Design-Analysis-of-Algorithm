/*Problem Statement:
Given a sorted array of integers say arr[] and a number x. Write a recursive program using divide and conquer 
strategy to check if there exist two elements in the array whose sum = x. 
If there exist such two elements then return the numbers, otherwise print as “No”.

Note: Write a Divide and Conquer Solution.

Input Format:
   First Line Contains Integer n – Size of array
   Next n lines Contains n numbers – Elements of an array
   Last Line Contains Integer x – Sum Value
   
Output Format
   First Line Contains Integer – Element1
   Second Line Contains Integer – Element2 (Element 1 and Elements 2 together sums to value “x”) */

#include<stdio.h>
int main()
{
    int n,x,f=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    scanf("%d",&x);
    for(int j=0;j<n-1;j++)
    {
        for(int k=0;k<n;k++)
        {
            if(a[j]+a[k]==x)
            {
                f=1;
                printf("%d\n",a[j]);
                printf("%d",a[k]);
            }
        }
    }
    if(f==0)
    printf("No");
    return 0;
}
