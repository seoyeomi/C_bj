#include <stdio.h>

int main(){
    int n,v,count=0;
    int arr[100];
    scanf("%d",&n);

    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }

    scanf("%d",&v);

    for(int i=0; i<n; i++){
        if(arr[i]==v){
            count ++;
        }
    }
    printf("%d",count);
}