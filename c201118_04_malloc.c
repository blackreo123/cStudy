#include <stdio.h>
#include <stdlib.h> //malloc()

int main(){
    //주소를 돌려준다.
    // void*p = malloc(4); //필요한 byte
    // printf("%p\n",p);

    //형변환 연산자를 이용
    // int count;
    // printf("입력할 숫자 수: ");
    // scanf("%d",&count);
    // int*p = (int*)malloc(sizeof(int)*count);
    // for(int i =0; i<count; i++){
    //     printf("%d번째 수 : ",i+1);
    //     scanf("%d",p+i);
        
    // }
    // for(int i =0; i< count; i++){
    //     printf("%d\n",*(p+i));
    // }
    // free(p);

    //학생수도 입력 받고 국영수 점수 입력받아서 점수를 저장하고 합계와 평균 출력.
    // 2차원 배열 ;;
    // int num, width;
    // width = sizeof(int)*3;
    // printf("학생 수: ");
    // scanf("%d",&num);
    // int **arr;
    // arr = (int**)malloc(sizeof(int*) * num);
    //     for(int i=0; i<num; i++){
    //     arr[i] = (int*)malloc(sizeof(int) * width);
    //     }
    //     for (int i = 0; i < num; i++){
    //         printf("점수 :");
    //         scanf("%d %d %d",&arr[i][0],&arr[i][1],&arr[i][2]);
    //     }
    // int sum = 0;
    // double avg;
    // for(int i = 0; i < num; i++){
    //     sum = 0;
    //     avg = 0;
    //     printf("[%d]번 : ",i+1);
    //     for(int j = 0; j < 3; j++){
    //         printf("%d\t",arr[i][j]);
    //         sum += arr[i][j];
    //         avg = sum/3;
    //     }
        
    //     printf("합계 : %d, 평균 : %lf",sum,avg);
    //     printf("\n");
    // }
    int num;
    int kamoku = 3;
    printf("학생 수 : ");
    scanf("%d",&num);
    int *p = (int*)malloc(sizeof(int) * num * kamoku);
    for(int i = 0; i < num; i++){
        printf("score : ");
        for(int j = 0; j < kamoku; j++){
            scanf("%d",p+j+(i*kamoku));
            
        }
    }
    int sum =0;
    double avg =0;
    for(int i = 0; i<num; i++){
        sum = 0;
        avg = 0.0;
        printf("%d번 : ",i+1);
        for(int j = 0; j < kamoku; j++){
            printf("%d\t",*(p+j+(i*kamoku)));
            sum += *(p+j+(i*kamoku));
            avg = sum/3.0;
        }
        printf("합계 : %d\t평균 : %lf",sum,avg);
        printf("\n");
    }
}
