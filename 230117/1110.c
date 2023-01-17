#include <stdio.h>

int main(){
    int n,a,b,c,count=0;
    scanf("%d",&n);
    int m = n;
    while(1){
        a=n/10; 
        b=n%10;
        c=(a+b)%10;

        n= b*10 + c;
        count++;

        if(n==m){
            break;
        }
    }
    printf("%d",count);
}
