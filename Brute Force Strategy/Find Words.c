/* Problem Statement :
You are given an array of strings words and a string chars.
A string is good if it can be formed by characters from chars(each character can only be used once).
Return the sum of lengths of all good strings in words.
    
Example 1:
Input: words = ["cat","bt","hat","tree"], chars = "atach"
Output: 6
Explanation: The strings that can be formed are "cat" and "hat" so the answer is 3 + 3 = 6.

Example 2:
Input: words = ["hello","world","leetcode"], chars = "welldonehoneyr"
Output: 10
Explanation: The strings that can be formed are "hello" and "world" so the answer is 5 + 5 = 10.

Constraints:
1 <= words.length <= 1000
1 <= words[i].length, chars.length <= 100
words[i] and chars consist of lowercase English letters.
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int n,s=0,f=0;
    scanf("%d",&n);
    int len[n];
    char a[n][10];
    for(int i=0;i<n;i++)
    {
        scanf("%s ",a[i]);
        len[i]=strlen(a[i]);
    }
    char b1[10];
    scanf("%s",b1);
    int blen=strlen(b1);
    for(int i1=0;i1<n;i1++)
    {
        int asci[26];
        char b[10];
        strcpy(b,b1);
        memset(asci,0,sizeof(asci));
        for(int i=0;i<blen;i++)
        {
            int c1=1;
            if(b[i]=='0')
            continue;
            for(int j=i+1;j<blen;j++)
            {
                if(b[i]==b[j])
                {
                    c1++;
                    b[j]='0';
                }
            }
            int ind=(int)b[i];
            b[i]='0';
            asci[ind-97]=c1;    
        }
        int y=0;
        for(int k=0;k<len[i1];k++)
        {
            char ch=a[i1][k];
            if(asci[ch-97]<=0)
            break;
            if(asci[ch-97]!=0)
            {
                asci[ch-97]--;
                y++;
            }
        }
        if(y==len[i1])
        s+=len[i1];
    }  
    printf("%d",s);
    return 0;
}
