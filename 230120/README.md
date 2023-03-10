### 23.01.20  
#### 8958.c (OX퀴즈)  

로직:  
테스트케이스 수를 입력 받고, 이후 O와 X로 이루어진 문자열을 입력받아 이를 배열에 넣는다.  
O의 경우 1점을 획득하고 X인 경우는 점수를 획득하지 않는데, 연속적으로 O가 나올 경우  
1점을 추가로 더 획득한다.  
-> 즉, for문을 통해 테스트케이스 횟수만큼 문자열OX을 배열에 입력 받고, O인 경우는 +1 X인 경우는 점수를 0으로 초기화 해준다. 점수의 총점을 출력한다.  
예시:  
5  
OOXXOXXOOO  
OOXXOOXXOO  
OXOXOXOXOXOXOX  
OOOOOOOOOO  
OOOOXOOOOXOOOOX  
출력예시) 10 9 7 55 30  

소감:  
처음 내가 생각한 로직은 배열에 O,X를 입력받고 O인 경우 +1 & 그 다음 배열이 O인지 검사하여 O라면 ++을 하여 총 점수를 구하고자 하였다. 이 로직은 구현하는 데에 어려움이 있을 것 같아, for문을 통해서 'O'인 경우에만 점수를 획득하고 변수를 하나 더 두어서 합계를 따로 구하는 방식을 선택하였다.  

완성 코드:  

```  
#include <stdio.h>

int main(){
    int n,count=0,sum=0;
    scanf("%d",&n); //테스트케이스 수 입력 

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
```  
위 코드에서 헤더파일 <string.h>를 선언하고, 문자열의 길이만큼 반복문을 실행하여 점수를 구하는 방식도 존재할테지만 헤더파일을 하나 더 선언하지 않고 코드를 작성하고 싶은 마음에 최대 80까지 입력받는 문제 조건에 의하여 반복문을 작성하였다. ``` for(int j=0; j<80; j++;)```  
더불어 배열을 초기화 해주는 ```arr[81]={0};``` 이 내용도 처음 테스트케이스의 수를 입력받는 코드 바로 아래에 작성하였었다.  

그러나 이렇게 작성하니 테스트케이스 중 'OOOOOOOOOO'을 입력 받았을 때, 55가 아닌 56이 출력 되는 문제가 발생하였다.  
이런 문제가 왜 발생하는지 궁금하여 [질문게시판](https://www.acmicpc.net/board/view/102789)을 찾아보게 되었고, 입력을 받을 때 배열 전체를 비워줘야 한다(즉 초기화 해주어야 한다)는 사실을 알게 되었다.  
이 이유는 배열을 초기화 해주지 않게 되면, 이전에 입력 받은 내용이 현재 입력 받는 문자열보다 길이가 길 경우 배열 요소에 남아있기 때문에 잘못된 출력결과가 도출될 수 있기 때문이다.  
=> 이전에 OXOXOXOXOXOXOX를 입력 받은 후 OOOOOOOOOO을 입력받게되면,
OOOOOOOOOO이 입력받아지고도 이전의 내용인 XOX가 뒤에 남아 있다.  
``` 'O','O','O','O','O','O','O','O','O','O','\0','X','O','X' ``` 
(OXOX가 남아 있는 것이 아니라 XOX가 남아있는 이유: 위처럼 문자열은 마지막 null값(\0) 을 포함하기 때문)  

