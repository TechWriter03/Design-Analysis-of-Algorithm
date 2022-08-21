/* Problem Statement 1 :

Given two positive integers, determine the GCD of the numbers.
Solve the above Problem Statement using two algorithms, 
hence write two functions.

1. Iterative Function 1(Consecutive Integer Checking): 
pass the 2 integers to the function, and print the GCD 
and return the no of times the loop gets executed in the function.

2. Iterative Function 1(Euclid’s Algorithm): 
pass the 2 integers to the function, and print the GCD 
and return the no of times the loop gets executed in the function.

Compare the return values and print which function is best
for a specific problem instance.

Input Format
   -> First-line Contains the Integer 1
   -> Second-line Contains Integer 2

Output Format
  ->First-line prints the result in function 1
  -> Second-line prints the result in function 2
  -> Third-line prints the return value of function 1
  -> Fourth-line prints the return value of function 2
  -> Fifth-line, Print “Function 1” if the return value of function 1 
  is lesser than return value of function 2 else print: "Function 2”, 
  if the return value of function 2 is lesser than the return value of 
  function 1 otherwise print “Equal”
 
For example:
–————————————————————–
| Input | Result     |
|———————|————————————|
| 10    | 2          |
| 6     | 2          |
|       | 5          |
|       | 3          |
|       | Function 2 |
|_______|____________|  */

#include<stdio.h>
int ans,c1=0,c2=0;
int gcd(int x,int y)
{
    for(int i=y;i>1;i--)
    {
        c1++;
        if(x%i==0 && y%i==0)
        {
            ans=i;
            break;
        }
    }
    printf("%d\n",ans);
    return c1;
}
int gcd_euclid(int x,int y)
{
    if(y==0)
    {  
        printf("%d\n",x);
        return c2;
    }
    c2++;
    return gcd_euclid(y,x%y);
}
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int c=gcd(a,b);
    int d=gcd_euclid(a,b);
    printf("%d\n",c);
    printf("%d\n",d);
    if(c<d)
        printf("Function 1");
    else if(c>d)
        printf("Function 2");
    else
        printf("Equal");
    return 0;
}
