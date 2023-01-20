// 테스트케이스 수 입력받고, 각 테스트 케이스를 한 줄씩 입력 받기(문자열)
// 'O'인 경우 배열에 +1해줌 -> 근데 여기서 다음 배열이 'O' 이면 ++
// 점수 출력

// 테스트케이스 수 입력받고, 각 테스트 케이스를 한 줄씩 입력 받기
// 입력 받은 문자열을 배열에 넣어줌 
// for문 통해서 'O'인 경우 ++ (배열의 다음을 고려해줌)
#include <stdio.h>

int main(){
    int n,count=0,sum=0;
    // char arr[81]={0};
    scanf("%d",&n); //테스트케이스 수 입력 

    // for(int i=0; i<n; i++){ // 테스트케이스를 배열로 입력 받음
    //     scanf("%s",arr);
    // }

    for(int i=0; i<n; i++){ 
            char arr[81]={0};

            count=0;
            sum=0;
            scanf("%s",arr);
        for(int j=0; j<80; j++){
            if(arr[j]=='O'){
                count +=1;
                sum += count; 
            }

            else{
                count = 0;
                }            
        }
        printf("%d\n",sum);

    }

    
}