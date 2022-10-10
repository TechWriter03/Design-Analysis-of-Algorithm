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
