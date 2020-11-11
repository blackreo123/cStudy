#include <stdio.h>

int main(){
    //for
    // for(int i =0; i < 10; i++){ // i +=2 이런 식도 댐...!
    //     printf("%d\n",i);
    // }
    // int sum = 0;
    // for(int i = 1; i<=10; i++){
    //     sum += i;
    // }
    // printf("%d",sum);
    // int n;
    // int sum =0;
    // printf("몇 까지 더하시겠냐 : ");
    // scanf("%d",&n);
    // for(int i = 1; i<=n; i++){
    //     sum += i;
    // }
    // printf("%d",sum);

    //구구단을 2단부터 9단까지 출력해 보시오
    // for(int i = 2; i < 10; i++){
    //     printf("[%d단]\n",i);
    //     for(int j = 1; j < 10; j++){
    //         printf("%d * %d = %d\n",i,j,i*j);
    //     }
    // }

    //별찍기 1
    // for(int i = 0; i<8; i++){
    //     for(int j = 0; j<=i; j++){
    //         printf("*");
    //     }
    //     printf("\n");
    // }    

    //별찍기 2
    // for(int i = 0; i<8; i++){
    //     for(int j = 7; j>=i; j--){
    //         printf("!");   
    //     }
    //     for(int k = 0; k<=i;k++){
    //             printf("*");
    //         }    
    //     printf("\n");
    // }
    //별찍기 3
    // for(int i = 1; i<8; i++){
    //     for(int j = 7; j>=i; j--){
    //         printf(" ");   
    //     }
    //     for(int k = 1; k<=i*2-1;k++){
    //             printf("*");
    //         }
    //     printf("\n");
    // }                

    //1부터 10까지의 정수에서 두 수를 골라 두 수의 합이 10이 되는 두 수를 구하는 프로그램.
    for(int i = 1; i <10; i++){
        for(int j = 9; j>=5; j--){
            if(i + j == 10){
                printf("(%d,%d)\n",i,j);
            }
        }
    }
}