#include <stdio.h>

int main(){
    int arr[42]={0};
    int a;
    int count=0;

    for(int i=0; i<10; i++){
        scanf("%d",&a);
        arr[a%42]++;
    }

    for(int i=0; i<42; i++){
        if(arr[i]!=0){
            count++;
        }
    }
    printf("%d",count);
}
// 42로 나눈 나머지들을 배열에 담아놓는다. 배열 중복검사해서
// 중복이 발생하는 경우 1씩 빼주고 아닌경우 1씩 count한다.


// #include <stdio.h>

// int main(){
//     int arr[10]={0};
//     int n;
//     int count=0;

//     for(int i=0; i<10; i++){
//         scanf("%d",&n);
//         arr[i]=n%42; //배열에 42로 나눈 나머지를 넣어준다
//     }

//     for(int i=0; i<10; i++){
//         if(arr[i]!=-1){ //arr[i]에, 42로 나누어 떨어져서 0이 들어 있는
//             count ++; //경우를 고려하여 -1로 설정하고, 값이 들어있을 때 count해준다
//         }
//         for(int j=i+1; j<10; j++){
//             if(arr[i]==arr[j]){ // 배열 안의 원소가 동일하면
//                 arr[j]=-1; // -1로 만들어서 무시한다
//             }
//         }
//     }
//     printf("%d",count);
// }

// 크기가 42인 배열을 생성하고 0으로 초기화 한다. 
// 나머지가 존재하는 배열을 증가시킨다.
// 배열의 원소가 0이 아닐 때 count를 한다.