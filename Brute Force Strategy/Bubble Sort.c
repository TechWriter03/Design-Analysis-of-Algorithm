/* Problem Statement:
Bubble sort is one of the easiest and brute force sorting algorithms. It is used to sort elements in either ascending or descending order.
Write a program to implement the bubble sort Algorithm. Get the number of elements as in input in the first line and then get the numbers as input.
Display the numbers in ascending order as output.

Input:
6
6 4 3 9 0 1

Output:
0 1 3 4 6 9 */

#include<stdio.h>
int main()
{
    int n,t;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(a[j+1]<a[j])
            {
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }
    for(int j=0;j<n;j++)
        printf("%d ",a[j]);
    return 0;
}
