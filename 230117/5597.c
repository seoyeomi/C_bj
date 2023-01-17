#include<stdio.h>
// 배열에 값들을 넣어놓고 1부터 30까지 비교해서 없는 수를 배열에 저장.
// 이후 배열에 저장해놓은 수를 크기 순으로 출력 
int main(){
    int n[30];

    for(int i=0; i<28; i++){
        scanf("%d",&n[i]);
    }

    for(int i=0; i<28; i++){
        for(int j=0; j<30; j++){
            if(n[i]!=j){
                int num[2]=j;
            }
        }
    }

}