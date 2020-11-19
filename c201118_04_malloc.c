#include <stdio.h>
#include <stdlib.h> //malloc()
#include <string.h>
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
    // int num;
    // int kamoku = 3;
    // printf("학생 수 : ");
    // scanf("%d",&num);
    // int *p = (int*)malloc(sizeof(int) * num * kamoku);
    // for(int i = 0; i < num; i++){
    //     printf("score : ");
    //     for(int j = 0; j < kamoku; j++){
    //         scanf("%d",p+j+(i*kamoku));
    //     }
    // }
    // int sum =0;
    // double avg =0;
    // int ksum = 0;
    // int esum = 0;
    // int msum = 0;
    // int chong = 0;
    // double chavg = 0;
    // for(int i = 0; i<num; i++){
    //     sum = 0;
    //     avg = 0.0;
    //     printf("%d번 : ",i+1);
    //     for(int j = 0; j < kamoku; j++){
    //         printf("%d\t",*(p+j+(i*kamoku)));
    //         sum += *(p+j+(i*kamoku));
    //         if(j == 0){
    //             ksum += *(p+0+(i*kamoku));
    //         }else if(j == 1){
    //             esum += *(p+1+(i*kamoku));
    //         }else if(j == 2){
    //             msum += *(p+2+(i*kamoku));
    //         }
    //         avg = sum/3.0;
    //     }
    //     chong += sum;
    //     chavg += avg;
    //     chavg = chavg / num;
    //     printf("합계 : %d\t평균 : %lf",sum,avg);
    //     printf("\n");
    // }
    // printf("국어 총점 : %d\t영어 총점 : %d\t 수학 총점 : %d\t 전체 총점 : %d\t 전체 평균 :  %lf",ksum,esum,msum,chong,chavg);
    // free(p);

    //피보나치 수열 구하기
    //9 => 1, 1, 2, 3, 5, 8, 13, 21, 34 ...
    // 1) 갯수 입력 받고 동적 할당
    // int count;
    // printf("count : ");
    // scanf("%d",&count);
    // int *p = (int*)malloc(sizeof(int) * count);
    // for(int i = 0; i< count; i++){
    //     if(i == 0){
    //         *p = 1;
    //     }else if(i == 1){
    //         *(p+1) = 1;
    //     }else{
    //         *(p+i) = *(p+i-1) + *(p+i-2);
    //     }
    // }
    // for(int i = 0; i<count; i++){
    //     printf("%d\t",*p);
    //     p++;
    // }
    // p -= count;
    // free(p);

    //문자열의 동적할당
    // char buffer[100] = "yoon";
    // printf("%lu %lu\n",sizeof(buffer),strlen(buffer));
    // char *p[2];
    // p[0] = malloc(strlen(buffer)+1);
    // //버퍼의 데이터를 p로 옮기기
    // strcpy(p, buffer);
    // printf("%lu %s\n",strlen(p), p);

    //반학생의 성적등급(A,B,C,D,E,F)을 저장
    // 1)반학생 수 입력받고 동적 할당
    // 2) 성적 입력받아 메모리에 저장
    // 3) 포인터 변수를 이용하여 출력
    // int num;
    // int ch = 0;
    // printf("반 학생 수: ");
    // scanf("%d",&num);
    
    // char *p = (char*)malloc(sizeof(char) * num);
    // for(int i =0; i < num; i++){
    //     //엔터값 처리
    //     while((ch = getchar()) != '\n'){}
    //     printf("%d번 : ",i+1);
    //     scanf("%c",p+i);
    // }
    // printf("\n");
    // for(int i=0; i < num; i++){
    //     printf("%d번 : %c\n",i+1, *(p+i));
    // }
    // free(p);

    //동적 재할당 : realloc()
    //사용자에게 정수를 계속 입력받아 저장하고 0을 입력하면 종료.
    // int *p = NULL;
    // int cnt = 0;
    // int input = 0;
    // while(1){
    //     printf("int : ");
    //     p = (int*)realloc(p,sizeof(int) * (cnt + 1));
    //     scanf("%d", &input);
    //     if(input == 0){
    //         break;
    //     }
    //     *(p+cnt) = input;
    //     printf("inputted int : %d\n",*(p+cnt));
    //     cnt++;
        
    // }
    // printf("\n");
    // for(int i = 0; i < cnt; i++){
    //     printf("%d\n",*(p+i));
    // }
}