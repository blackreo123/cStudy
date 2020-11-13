#define _CRT_NONSTDC_NO_WARNINGS
#include <stdio.h>
#include <termios.h>
#include <unistd.h>
#include <curses.h> //getch 들어있음.
#include <string.h> //int strlen 들어있음. 문자열 관련 함수.

//getch 만들기 ... #include <termios.h> #include <unistd.h> 이 두개 필요함.. 
// int getch(void)
// {
//     struct termios oldt, newt;
//     int ch;
//     tcgetattr( STDIN_FILENO, &oldt );
//     newt = oldt;
//     newt.c_lflag &= ~( ICANON | ECHO );
//     tcsetattr( STDIN_FILENO, TCSANOW, &newt );
//     ch = getchar();
//     tcsetattr( STDIN_FILENO, TCSANOW, &oldt );
//     return ch;
// }

int main(){
    //문자 전용함수
    // char c;
    // printf("문자입력 : ");
    // scanf("%c", &c);
    // printf("%c",c);

    //문자 전용함수
    // getchar() 에코기능이 있다.
    // char c; // int 써도 되긴함 그런데 4바이트 짜리 공간을 만들겟지?
    // printf("문자입력 : ");
    // c = getchar(); //이거 인티저로 돌려줌
    // printf("입력하신 문자는 ");
    // putchar(c); //이거 인티저를 받음 포맷 문자열은 사용을 못해요 한문자 찍기는 좋음
    
    //getch() 에코기능이 없다.
    // printf("문자 : ");
    // char c = getch();
    // printf("입력한 문자 : ");
    // putchar(c);

    // char pw[4];
    // printf("pw : ");
    // for(int i = 0; i < 4; i++){
    //     pw[i] = getch();
    //     printf("*"); // 비번 별찍기
    // }
    // printf("\ninserted pw : ");
    // for(int i = 0; i < 4; i++){
    //     putchar(pw[i]);
    // }

    //가변길이(최대길이는 있다.) 비밀번호 엔터를 입력하면 비밀번호 입력 종료.
    // char pw[11];
    // printf("pw: ");
    // for(int i=0;i<10;i++){
    //     pw[i] = getch();
    //     if(pw[i] == '\n'){
    //         // pw[i] = '\0';
    //         break;
    //     }
    //     printf("*");
    // }
    // for(int i=0;i<10;i++){
    //     if(pw[i] == '\n'){
    //         break;
    //     }
    //     putchar(pw[i]);
    // }
    // printf("inserted pw : %s",pw);

    //문자열 입출력 전용함수
    // char name[21];
    // printf("what your name? : ");
    // gets(name);
    // printf("your name is : ");
    // puts(name);
    // printf("%d %d",strlen(name),sizeof(name));

    //문자열을 입력 받고 그 문자열의 값과 길이와 주소값을 출력해 보시오
    char mun[100];
    printf("입력해라: ");
    gets(mun);
    printf("값 : %s\n",mun);
    printf("길이 : %d\n",strlen(mun));
    printf("주소 : %p\n",mun);
}