### 23.01.18  
#### 2562.c(최댓값)  
로직: 반복문을 통해 배열의 값들을 입력 받고, 처음 입력 받은 값을 max로 설정한다. 이후 반복문을 통해 배열 내부에 들어 있는 값과 설정한 max의 값을 비교하여 이 max보다 큰 값이 들어온다면 그 값을 max로 바꾸어 준다.  

예시:  
3  
29  
38  
12  
57  
74  
40  
85  
61  
출력결과)85 8  

소감:출력 결과에서 첫 번째로는 최댓값을 출력해야 하고, 두 번째로는 최댓값이 몇 번째 수인지를 출력해야 한다. 최댓값이 몇 번째 수인지를 출력하는 과정에서 이 수를 저장할 변수를 초기화 하지 않아 문제 해결에 어려움을 겪었다. -> 초기화 해줌으로써 문제 해결  


#### 5597.c  
로직:크기가 31인 배열을 선언하고, 배열 인덱스 자체를 출석번호로 설정한다.(1,3,5를 입력 받으면 각 1,3,5번째 인덱스에 1,3,5를 저장) 이후 배열을 0 or 특정 값으로 초기화 하고 1번 인덱스부터 차례로 검사하며 초기값이 그대로 들어 있는 요소만 출력한다.  

예시:  
3  
1  
4  
5  
7  
9  
6  
10  
11  
12  
13  
14  
15  
16  
17  
18  
19  
20  
21  
22  
23  
24  
25  
26  
27  
28  
29  
30  
출력결과)2 8  

소감:로직은 전반적으로 이해하겠는데 스스로 완벽하게 풀지 못한 문제이다. 질문게시판과 구글링을 통해서 정답코드와 그 로직도 참고했는데, 머릿속에서 완전히 이해하지 못했다. 그림판에 그려보면서 로직 이해하고자 했는데 그걸 코드로 구현 못함 ㄸㄹㄹ..TT 3시간 이상은 이 문제에 투자한 것 같은데 이런 실력 가지고 어떻게 운체 시프하지 눈물 날 뻔했다. 고작 브론즈 lev5문제인데  
처음 내가 생각한 로직은  
```
입력 받은 배열의 원소들을 1부터 30까지 비교해서 없으면 저장하고 그 값(미존재 값)은 min으로 설정.  
min값이 다음에 들어오는 값(두 번째 미존재 값)이랑 비교해서 작으면 그것을 min으로 바꿔주고,  
이전에 min값으로 설정해준 값은 max로 변경해서 min,max 값을 모두 출력한다.  
``` 
이었다.  그런데 마음처럼 잘 안 돼서 다음과 같이 바꾸었다.  
```
1부터 30까지의 31개의 배열을 미리 선언(배열은 0부터니까 0~30까지 총 31개의 배열필요).  
scanf로 출석번호들을 배열에 저장해놓음.  
처음 1~30까지의 배열과 출석번호가 저장된 배열의 원소를 비교.
```  
그런데 이 로직조차도 두 배열 내부 원소들을 비교하는 방법이 마땅히 떠오르지 않아서 결국 솔루션을 찾아보게 됐다.  

정답코드:  
```
#include <stdio.h>

int main(){
    int arr[31]={0};
    int num;

    for(int i=0; i<28; i++){
        scanf("%d",&num);
        arr[num]=num;
    }
    
    for(int i=1; i<31; i++){
        if(arr[i]==0){
            printf("%d\n",i);
        }
    }
}
```

