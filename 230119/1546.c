#include <stdio.h>

int main(){
    int n,s,m=0; //n은 과목 개수, s는 점수, m은 점수 최댓값
    double sum=0; // 조작한 시험 점수
    int arr[1000]; // 시험 점수가 담긴 배열
    double brr[1000]; // 새로운 점수가 담긴 배열
    scanf("%d",&n);

    for(int i=0; i<n; i++){
        scanf("%d",&s);
        arr[i]=s;
        brr[i]=s;

    }
    m=arr[0];

    for(int i=0; i<n; i++){
        if(m<arr[i]){
            m=arr[i];
        }
    }
    for(int i=0; i<n; i++){
        brr[i]=(double)(arr[i])/m*100; //타입캐스팅
        sum+=brr[i];
    }

    sum=sum/n;
    printf("%f",sum);
}