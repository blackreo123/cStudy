#include <stdio.h>
#include <math.h>
int main(){
    //이차배열
    // int arr[2][3];
    // arr[0][0] = 1;
    // arr[0][1] = 2;
    // arr[0][2] = 3;
    // arr[1][0] = 4;
    // arr[1][1] = 5;
    // arr[1][2] = 6;
    // for(int i = 0; i < 2; i++){
    //     for(int j = 0; j < 3; j++){
    //         printf("%d",arr[i][j]);
    //     }
    //     printf("\n");
    // }

    //2차배열에 1~6까지 넣기
    // int arr[5][7];
    // for(int i = 0; i < 5; i++){
    //     for(int j = 0; j < 7; j++){
    //         arr[i][j] = (i * 7)+(j+1);
    //         printf("%d\t",arr[i][j]);
    //     }
    //     printf("\n");
    // }

    //2차원 배열의 사이즈
    // int arr[2][3];
    // printf("%d\n",sizeof(arr));
    // printf("%d\n",sizeof(arr[0]));
    // printf("%d\n",sizeof(arr[0][0]));
    // //2차원 배열의 주소
    // printf("%d\n",arr); 
    // printf("%d\n",arr[0]);
    // printf("%d\n",&arr[0][0]); //셋다 같다...
    // printf("%d\n",&arr[1][0]); //12만큼 떨어져 있징 왜냐면 열이 3열 이니까 하나당 4바이트고
    
    // //행의 갯수
    // int hang = sizeof(arr) / sizeof(arr[0]);
    // //열의 갯수
    // int yull = sizeof(arr[0]) / sizeof(int);
    // printf("행 : %d\n열 : %d",hang,yull);

    //한번더 연습..!
    // int a[] = {10,20,30};
    // printf("size : %d\n", sizeof(a));
    // printf("주소: %p\n",a[0]);
    // printf("주소2: %p\n",a[1]); //4만큼 떨어짐.

    //2차배열 한 번더 연습..!
    // int a[2][4] ={{10,20},{50,60,70,80}};
    // printf("size : %lu\n",sizeof(a));
    // printf("size : %lu\n",sizeof(a[0]));
    // printf("행의 갯수: %d\n", sizeof(a)/sizeof(a[0]));
    // printf("열의 갯수: %d\n",sizeof(a[0])/sizeof(int));
    // printf("주소 : %p\n",a);
    // printf("주소 : %p\n",a[0]);
    // printf("주소 : %p\n",a[1]);

    // //빈공간에 0이 들어감.
    // for(int i = 0; i < sizeof(a)/sizeof(a[0]); i++){
    //     for(int j = 0; j < sizeof(a[0])/sizeof(int); j++){
    //         printf("%d\t",a[i][j]);
    //     }
    //     printf("\n");
    // }

    //이렇게 행 구분 없이 나열해도 가능 하지만 비어있을때는 당겨져서 뒤에 0이 붙는다.
    // int a[2][4] ={10,20,40,50,60,70};
    // for(int i = 0; i < sizeof(a)/sizeof(a[0]); i++){
    //     for(int j = 0; j < sizeof(a[0])/sizeof(int); j++){
    //         printf("%d\t",a[i][j]);
    //     }
    //     printf("\n");
    // }

    // //행은 생략 가능 하다.
    // int a[][4] ={10,20,30,40,50,60,70,80};
    // for(int i = 0; i < sizeof(a)/sizeof(a[0]); i++){
    //     for(int j = 0; j < sizeof(a[0])/sizeof(int); j++){
    //         printf("%d\t",a[i][j]);
    //     }
    //     printf("\n");
    // }

    //문자열
    //1차배열
    // char s[] = "hello"; //문자열 끝에는 null(\0)이 포함되어 있다. 문자열의 끝을 알기 위해서. 그러므로 선언한때 최소 한칸 더 크게 선언 해야함. 하지만 길이 생략 가능 ㅋ
    // printf("%s\n", s);

    // 문자열의 2차 배열
    // char s[3][5] = {"yoon", "bae", "kim"};
    // // printf("문자열의 총 크기 : %d\n", sizeof(s));
    // // printf("행의 갯수 : %d\n", sizeof(s)/sizeof(s[0]));
    // int hang = sizeof(s)/sizeof(s[0]);
    // for(int i = 0; i < hang; i++){
    //     printf("%s\n",s[i]);
    // }

    //반 학생의 국영수 점수를 입력받아 번호대로 배열에 저장하고 반 번호 순서대로 총점과 평균을 출력하는 프로그램을 작성하시오.
    // int s[2][3];
    // for(int i =0; i < sizeof(s)/sizeof(s[0]); i++){
    //     printf("국영수 점수 차례대로 입력해서 중간에 띄어쓰기 하고 : ");
    //     scanf("%d %d %d",&s[i][0],&s[i][1],&s[i][2]);
    // }
    //  for(int i =0; i < sizeof(s)/sizeof(s[0]); i++){
    //     printf("%d번 합계: %d, 평균: %f\n",i+1, s[i][0]+s[i][1]+s[i][2], (s[i][0]+s[i][1]+s[i][2]/3.0));
    // }

    //좋아하는 칼라들 입력받고 출력
    char s[3][7];
    for(int i = 0; i < 3; i++){
        printf("좋아하는 색 %d번째 : ", i+1);
        scanf("%s",s[i]);
        getchar();
    }
    for(int i =0; i<3;i++){
        printf("%s\n",s[i]);
    }
}