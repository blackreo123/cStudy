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
    int a = 10, b = 20;
    printf("%d\n",a > 0 && b > 0); //둘다 참일때만 true
    printf("%d\n",a > 0 && b < 0);
    printf("%d\n",a > 0 || b > 0); //둘중 하나만 참이어도 true
    printf("%d\n",a > 0 || b < 0);
    printf("%d\n",a < 0 || b < 0); //둘다 거짓이면 false
}