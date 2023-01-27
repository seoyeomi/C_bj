#include <stdio.h>

int main(){
    int c,n,s; // c:테스트케이스 수, n:학생 수, s:점수 
    scanf("%d",&c); //테스트케이스 수 입력 받기
    int arr[1001]={0};
    double ans=0;

    for(int i=0; i<c; i++){
        int sum=0, avg=0;
        int count=0;

        scanf("%d",&n); // 학생 수 입력받기 

        for(int j=0; j<n; j++){
            
            scanf("%d",&s); //점수 입력받기
            arr[j]=s;  
            sum+=arr[j];

        }
        avg= sum/n;
        // printf("avg:%d\n",avg);

        for(int i=0; i<n; i++){
            if(arr[i]>avg){
                count+=1;
                
            }
        }
         ans = (double)((double)count /(double)n );
        printf("%.3f%%\n",ans*100);
    }


}
// 점수의 평균을 구하고, 그 평균을 넘는 점수의 비율을 구한다.
// 예를들어, 첫 번째 줄에서 50,50,70,80,100 이므로 이들의 평균은 70이 된다.
// 평균70을 넘는 점수는 80,100 두 가지이므로 2/5 *100=40%비율이다.
