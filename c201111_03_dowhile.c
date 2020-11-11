#include <stdio.h>

int main(){
    //do while
    //사용자에게 입력받은 정수 더하기 0을 입력하면 종료.
    // int a, s = 0;
    // do{
    //     printf("int : ");
    //     int r = scanf("%d",&a); //정수를 읽으면 1이 리턴되고 아니면 0이 리턴된다.

    //     //잘못하여 문자 입력했을때.
    //     if(r == 0){
    //         printf("정수를 정확하게 입력하세요.\n");
    //         getchar(); //문자전용함수 : 한문자를 읽는다. 읽고 버린다.
    //     }else{
    //         s += a;
    //     }
        
    // }while(a != 0);
    // printf("총 합: %d",s);

    //while문으로는...
    // int a = 1, s = 0; //while은 먼저 선언을 해줘야한대여...
    // while(a != 0){
    //     printf("int : ");
    //     scanf("%d",&a);
    //     s += a;
    // }
    // printf("총 합: %d",s);

    //사용자에게 한 문자를 입력받아 출력해주기 n을 입력하면 종료.
    char a;
    do{
        printf("char : ");
        scanf("%c",&a);
        getchar(); //엔터값 처리.
        printf("%c\n",a);
        
    }while(a != 'n');
    // return 0;
}