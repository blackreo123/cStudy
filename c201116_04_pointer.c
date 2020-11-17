#include <stdio.h>

int main(){
    //포인터 : 메모리의 주소
    //포인터 변수 : 주소를 저장할 수 있는 변수
    // int a = 10;
    // printf("%p\n",&a);
    // int* p = &a;
    // printf("%p\n",p);

    // double f = 3.14;
    // double* p = &f;
    // printf("%f %p\n",f, &f);
    // printf("%p\n",p);

    // char c = 'a';
    // char* p = &c;
    // printf("%p %p\n",&c,p);
    // printf("%c %c\n",c,*p);

    // int a =10;
    // char* p = &a;
    // printf("%d\n", *p); //형 맞춰서 해야한다~

    //a의 값을 포인터를 이용하여 변경
    // int a =10;
    // printf("%d\n",a);
    // int* p = &a;
    // *p = 20;
    // printf("%d\n",a);

    //d변수의 값을 포인터 변수를 이용하여 3.141592로 변경
//     double d = 3.14;
//     double* p = &d;
//     *p = 3.141592;
//     printf("%lf",d);
    
    //주소를 변경
    //포인터 변수를 이용해서 a를 100으로 b를 200으로 변경
    // int a = 10;
    // int b = 20;

    // int* p = &a;
    // *p = 100;
    // p = &b;
    // *p = 200;
    // printf("%d %d\n",a,b);

    // a=10, b=20, c=30 일 때 base=100을 각 변수에 더해보시오. 단, 변수 a,b,c에 접근 할 때 포인터 변수를 활용하시오
    int a =10, b = 20, c = 30, base = 100;
    int* p = &a;
    *p += base;
    p = &b;
    *p += base;
    p = &c;
    *p += base;
    printf("%d %d %d\n",a,b,c);


 }