#include <stdio.h>

int main(){
    //연산자 (+, -, *, /)
    // int a = 50, b = 20;
    // printf("%d + %d = %d\n",a,b,a+b);
    // printf("%d - %d = %d\n",a,b,a-b);
    // printf("%d * %d = %d\n",a,b,a*b);
    // printf("%d / %d = %.2f\n",a,b,(double)a/b);//형변환
    // printf("%d %% %d = %d\n",a,b,a%b);

    //부호연산자
    // int a = 10;
    // printf("%d\n",-a);

    //증감연산자
    // int a = 10;
    // ++a; //전위 연산자.
    // printf("%d\n", a);
    // a--; //후위 연산자.
    // printf("%d\n", a);

    //증감(전위/후위)연산자
    // int a = 10;
    // printf("%d\n",a++); //printf후에 a++
    // printf("%d\n",a);

    // printf("%d\n",++a); //++a하고 printf
    
    // int b = a++; //b에 대입 하고 후에 a++
    // printf("%d %d\n",a,b);

    // int b = ++a; //++a하고 b에 대입.
    // b = a++;
    // printf("%d %d\n",a,++b);

    // int a = 10;
    // printf("%d\n",++a);
    // printf("%d\n",a+=3);
    // printf("%d\n",--a);
    // printf("%d\n",a-=3);

    //관계연산자
    // int a = 10, b = 20;
    // printf("%d\n",a < b); //true 1
    // printf("%d\n",a > b); //fales 0
    // printf("%d\n",a == b);
    // printf("%d\n",a != b);

    //논리연산자
    // int a = 10, b = 20;
    // printf("%d\n",a > 0 && b > 0); //둘다 참일때만 true
    // printf("%d\n",a > 0 && b < 0);
    // printf("%d\n",a > 0 || b > 0); //둘중 하나만 참이어도 true
    // printf("%d\n",a > 0 || b < 0);
    // printf("%d\n",a < 0 || b < 0); //둘다 거짓이면 false
    // printf("%d\n",!(a > 0)); //(a>0)의 결과의 반대 라는 뜻~

    //비트연산자
    // int a= 4, b = 3;
    // printf("%d\n",a&b); //and 2진수로 바꿔서 둘다 1이면 1 하나라도 0이면 0
    // printf("%d\n",a|b); //or 하나라도 1이면 1
    // printf("%d\n",a^b); //xor 다를때 1을 반환
    // printf("%d\n",~a); //not 비트를 반대로 바꿈.
    // printf("%d\n",a>>2); //1을 오른쪽으로 두칸 2의 2승 나누기랑 같다.
    // printf("%d\n",a<<2); //1을 왼쪽으로 2칸 2의 2승 곱하기랑 같다.

    //상항 연산자
    // int a = 10;
    // //(조건) ? 참일때 : 거짓일때;
    // a > 0 ? printf("양수") : printf("음수");

    //두 수가 주어졌을때 큰수를 출력해라.
    // int a = 8, b = 9; 
    // int max;
    // // (a>b) ? (c = a) : (c = b);
    // max = a>b ? a : b;
    // printf("%d\n",max);

    //20, 10, 30 3개의 정수가 주어졌을 때 가장 큰 값을 구하는 프로그램을 삼항 연산자를 이용하여 만들어 보시오.
    int a = 20;
    int b = 10;
    int c = 30;
    int max;
    max = a>b ? a : b;
    max = max > c? max : c;
    printf("가장 큰 값은 %d입니다\n",max);
}