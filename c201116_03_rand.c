#include <stdio.h>
#include <stdlib.h> //rand() 포함
#include <time.h> //time 관련

int main(){
    //랜덤함수
    //시드값을 현재시간으로 구해서 준다
    //1~6까지의 수를 랜덤으로 구해온다면
    // srand((unsigned)time(NULL));

    // for(int i = 0; i < 5; i++){
    //     printf("%d\n",rand()%6+1);
    // }
    
    //2인 주사위 게임
    // int a,b;
    // srand((unsigned)time(NULL));
    // int countA = 0;
    // int countB = 0;
    // while(1){
    //     a = rand()%6+1;
    //     b = rand()%6+1;
        
    //     if(a > b){
    //     printf("a 승\n");
    //     countA++;
    //     }else if(a == b){
    //     printf("무승부\n");
    //     }else{
    //     printf("b 승\n");
    //     countB++;
    //     }

    //     if(countA == 3){
    //         printf("a 3승");
    //         break;
    //     }else if(countB == 3){
    //         printf("b 3승");
    //         break;
    //     }
    // }
    
    //로또
    //로또 번호 생성 (1~46)
    // int lotto[6];
    // int size = sizeof(lotto) / sizeof(int);
    // srand((unsigned)time(NULL));
    // for(int i = 0; i < size; i++){
    //     lotto[i] = rand() % 45 + 1;
    //     for(int j = 0; j<i; j++){
    //         if(lotto[j] == lotto[i]){
    //             i--;
    //             break;
    //         }
    //     }
    // }
    // for(int i = 0; i < size; i++){
    //     printf("%d\t",lotto[i]);
    // }

    
}