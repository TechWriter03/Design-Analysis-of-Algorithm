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