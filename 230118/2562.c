#include <stdio.h>

int main(){
    int max,num=0;
    int arr[9];

    for(int i=0; i<9; i++){
        scanf("%d",&arr[i]);
    }

    max=arr[0];

    for(int i=0; i<9; i++){
        if(max<arr[i]){
            max=arr[i];
            num=i;
        }
    }
    printf("%d\n%d",max,num+1);

}