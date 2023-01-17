#include <stdio.h>

int main(){
    int A,B,C;
    scanf("%d %d",&A,&B);
    printf("\n");
    scanf("%d",&C);
    
    if((B+C)%60==0){ //분 단위가 60분,120분 ...이면
        A= A+((B+C)/60); //나누어서 몫을 더해준다
        B=0;
        if(A>23){
            A=A-24;
            printf("%d %d",A,B);
        }
        else{
            printf("%d %d",A,B);
        }
    }
    else if(B+C<60){ //분이 60보다 작을경우
        printf("%d %d",A,B+C);
    }
    else{ //분이 60분보다 클 경우
            A=A+((B+C)/60);
            B=((B+C)%60);
        if(A>23){
            A=A-24;
            printf("%d %d",A,B);
        }
        else{
            printf("%d %d",A,B);   
        }
    }
    return 0;
}