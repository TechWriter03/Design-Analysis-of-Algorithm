#include <stdio.h>
int c=0;
void function(int n){
    c++;
    for(int i=n/2;i<n;i++){
        c++;
        for(int j=1;j<n;j=2*j){
            c++;
            for(int k=1;k<n;k=k*2){
                c++;
                //c++;
                c++;
            }
            c++;
        }
        c++;
    }
    c++;
}
int main(){
    int n;
    scanf("%d",&n);
    function(n);
    printf("%d",c);
}
