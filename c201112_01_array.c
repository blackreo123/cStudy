#include <stdio.h>

int main()
{
    //array
    // int arr[3];
    // // printf("size of arr: %lu\n", sizeof(arr) / sizeof(int));
    // // printf("%d\n", arr[0]);
    // arr[0] = 10;
    // // printf("%d\n", arr[0]);
    // arr[1] = 20;
    // // printf("%d\n", arr[1]);
    // arr[2] = 30;
    // // printf("%d\n", arr[2]);

    // int size = sizeof(arr)/sizeof(int);
    // for(int i = 0; i < size; i++){
    //     arr[i] = (i + 1)*10;
    // }

    // for(int i = 0; i < size; i++){
    //     printf("%d\n",arr[i]);
    // }

    //선언과 동시에 초기화
    // int arr[] = {1,2,3};
    // int size = sizeof(arr)/sizeof(int);
    // for(int i = 0; i<size; ++i){
    //     printf("%d\n",arr[i]);
    // }

    //문자 a,b,c,d,e 를 배열에 초기화 하고 출력
    // char arr[] = {'a','b','c','d','e'};
    // int size = sizeof(arr)/sizeof(char);
    
    // for(int i = 0; i< size; i++){
    //     printf("%c\n",arr[i]);
    // }

    //실수 3.14, 2.35, 65.25.를 배열에 초기화하고 출력
    // float arr[] = {3.14, 2.35, 65.25};
    // int size = sizeof(arr) / sizeof(float);
    // for(int i = 0; i<size; i++){
    //     printf("%f\n",arr[i]);
    // }

    //배열의 주소
    // int arr[] = {10,20,30};
    // printf("%p %d\n",arr,arr);
    // printf("%p %d %d %d\n",arr[0],&arr[0],&arr[1],&arr[2]); //4바이트씩 간격을 두고 있음.

    //정수열 배열의 값을 초기화 하고 그 합을 구하는 프로그램을 작성하시오.
    // int arr[] = {2,5,7,40,39};
    // int sum = 0;
    // int size = sizeof(arr) / sizeof(int);
    // for(int i =0; i < size; i++){
    //     sum += arr[i];
    // }
    // printf("합계 : %d",sum);

    //사용자에게 입력을 받아서 배열을 초기화하고 배열의 합계를 출력
    //컴파일타임 : 문법적인 오류체크 
    //런타임 : 실행하는 시점
    //int a = 6; //a 선언은 컴파일 타임, 6 대입은 런타임
    //int arr[a]; //에러.

    //번호 순번대로 점수배열을 만들고 본호를 입력받아서 점수 출력.
    // int score[] = {80,88,90,77,60};
    // int size = sizeof(score) / sizeof(int);
    // int number;    
    // while(1){
    //     printf("당신의 번호는(0을 누르면 종료합니다.) : ");
    //     scanf("%d",&number);
    //     if(number == 0){
    //         printf("종료합니다.");
    //         break;
    //     }else if(number > size){
    //         printf("잘못 입력하셨습니다.\n");
    //     }else{
    //         printf("당신의(%d번) 점수는 : %d 입니다.\n",number,score[number -1]);
    //     } 
    // }
    // do{
    //     printf("당신의 번호는(0을 누르면 종료합니다.) : ");
    //     scanf("%d",&number);
    //     if(number > size){
    //         printf("잘못 입력하셨습니다.\n");
    //     }else if(number == 0){
    //         printf("종료합니다.");
    //     }    
    //     else{
    //         printf("당신의(%d번) 점수는 : %d 입니다.\n",number,score[number -1]);
    //     } 
    // }while(number != 0);
    
    //문자를 입력 받아 배열에 저장하고 해당번호를 입력하면 문자출력 길이 5
    // char arr[5];
    // int size = sizeof(arr) / sizeof(char);
    // char a;
    // int n;
    // for(int i=0; i<size; i++){
    //     printf("입력할 문자1개 : ");
    //     scanf("%c",&a);
    //     getchar();
    //     arr[i] = a;
    // }
    // while(1){
    //     printf("당신의 번호는(0을 누르면 종료합니다.) : ");
    //     scanf("%d",&n);
    //     if(n == 0){
    //         printf("종료합니다.");
    //         break;
    //     }else if(n > size){
    //         printf("잘못 입력하셨습니다.\n");
    //     }else{
    //         printf("%c\n",arr[n -1]);
    //     } 
    // }

    // //피보나치 수열 0,1,1,2,3,5,8,13,21
    // int fibo[10];
    // int size = sizeof(fibo) / sizeof(int);
    // for(int i = 0; i < size; i++){
    //     if(i == 0){
    //         fibo[0] = 0;
    //     }else if(i == 1){
    //         fibo[1] = 1;
    //     }else{
    //         fibo[i] = fibo[i-2] + fibo[i-1];
    //     }
    // }
    // for(int i = 0; i < size; i++){
    //     printf("%d\t",fibo[i]);
    // } 

    //최댓값/최솟값 찾기
    // int arr[] = {5,6,7,8,9,3,4,1};
    // int size = sizeof(arr)/sizeof(int);
    // int max = 0;
    // int min = arr[0];
    // for(int i = 0; i<size; i++){
    //     if(arr[i] > max){
    //         max = arr[i];
    //     }
    //     if(arr[i] < min){
    //         min = arr[i];
    //     }
    // }
    // printf("최댓값 : %d\n최솟값 : %d",max,min);

    //사용자에게 문자를 입력받아 배열에서 인덱스 찾기.
    // char arr[]={'g','h','u','y','k'};
    // int size = sizeof(arr) /sizeof(char);
    // char c;
    // printf("찾으려는 문자를 입력하세요 : ");
    // scanf("%c",&c);
    // getchar();
    // for(int i = 0; i < size; i++){
    //     if(arr[i] == c){
    //         printf("찾으려는 인덱스 : %d",i);
    //         break;
    //     }
    //     printf("없습니다.");
    //     break;
    // }

    //실습)히스토그램 그리기
	//영업사원의 실적을 입력받아 그래프(*)로 나타내기
	//1:**********
	//2:*******
    int scoreList[3];
    int size = sizeof(scoreList)/sizeof(int);    
    int score;
    for(int i = 0; i < size; i++){
        printf("실적을 입력하세요 %d번 : ",i+1);
        scanf("%d",&score);
        scoreList[i] = score; 
    }
    for(int i = 0; i<size; i++){
        printf("%d : ",i+1);
        for(int j = 0; j < scoreList[i]; j++){
            printf("*");
        }
        printf("\n");
    }
}