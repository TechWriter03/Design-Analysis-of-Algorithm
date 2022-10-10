/* Problem Statement:

Given a string and a pattern identify whether the pattern occurs in the given string or not. 
If the pattern occurs in the given string then print 1 otherwise print 0.

Input Format:
First Line - String
Second Line - Pattern

Output Format:
1 - If Pattern occurs in the given String
0 - If Pattern doesn't occur in the given String

For Example:
–————————————————————————-
| Input        | Result  |
|——————————————|—————————|
|Rajalakshmi   |1        |
|lak           |         |
|______________|_________| */

#include<stdio.h>
#include<string.h>
int main()
{
    char a[20],b[20];
    scanf("%s",a);
    scanf("%s",b);
    char *f;
    f=strstr(a,b);
    if(f)
        printf("1");
    else
        printf("0");
    return 0;
}
