/* Problem Statement:
Assume you are an awesome parent and want to give your children some cookies. But, you should give each child at most one cookie.
Each child i has a greed factor g[i], which is the minimum size of a cookie that the child will be content with and 
each cookie j has a size s[j]. If s[j] >= g[i], we can assign the cookie j to the child i, and the child i will be content. 
Your goal is to maximize the number of your content children and output the maximum number.

Example Input: 
3
1 2 3
2
1 1

Output: 
1

Explanation: 
You have 3 children and 2 cookies. The greed factors of 3 children are 1, 2, 3. 
And even though you have 2 cookies, since their size is both 1, you could only make the child whose greed factor is 1 content.
You need to output 1.

Constraints:
1 <= g.length <= 3 * 10^4
0 <= s.length <= 3 * 10^4
1 <= g[i], s[j] <= 2^31 - 1 */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int m,n,c=0;
    scanf("%d",&m);
    int a[m],map[m];
    memset(map,0,sizeof(map));
    for(int i=0;i<m;i++)
        scanf("%d",&a[i]);
    scanf("%d",&n);
    int b[n];
    for(int j=0;j<n;j++)
        scanf("%d",&b[j]);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(b[i]==a[j] && map[j]!=1)
            {
                map[j]=1;
                c++;
            }
        }
    }
    printf("%d",c);
    return 0;
}
