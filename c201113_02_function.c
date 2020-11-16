#include <stdio.h>
#include <math.h>
#include <time.h>
#include <unistd.h>
//hello를 출력하는 함수
void helloPrint(){
    printf("hello\n");
}
//매개변수를 전달하는 함수
void agePrint(int age){
    printf("나이 : %d\n",age);
}
//매개변수 두 정수의 합을 반환
int add(int a, int b){
    return a + b;
}
//빼기
int sub(int a, int b){
    return a - b;
}
//곱
int mul(int a, int b){
    return a * b;
}
//나누기
double nanugi(int a, int b){
    return  (double)a / b;
}

//길이와 높이를 매개변수로 받아 넓이를 반환
int sanub(int a, int b){
    return a*b;
}
//원의 반지름을 매개변수로 받아 원의 넓이를 반환
double circleArea (int r){
    return pow(r,2) * M_PI;
}
//두수를 입력받아 큰수를 반환하는 함수
int kensu(int a, int b){
    if(a>b){
        return a;
    }else{
        return b;
    }
    
}
//단수를 입력받아 구구단을 출력해주는 함수
void gugudan(int a){
    for(int i = 1; i < 10; i++){
        printf("%d * %d = %d\n",a,i,a*i);
    }
}
//정수를 매개변수로 받아서 소수인지 아닌지 출력
void sosu(int a){
    for(int i = 2; i<a; i++){
        if(a % i == 0){
            printf("소수가 아뉘돠.\n");
            return;
        }
    }
    printf("소수돠!\n");
}
//숫자를 받아서 1부터 그 숫자까지의 합 반환
int daduhae(int a){
    int sum;
    for(int i = 1; i < a; i++){
        sum += i;
    }
    return sum;
}
//카운트 다운~
void countDown(int n){
    for(int i = n; i>0; i--){
        printf("%d\n",i);
        sleep(1);
    }
}
int main(){
    // helloPrint();
    // agePrint(20);
    // int sum = add(30,10);
    // int sb = sub(30,10);
    // int gob = mul(30,10);
    // double nanu = nanugi(30,7);
    // printf("%d\n",sum);
    // printf("%d\n",sb);
    // printf("%d\n",gob);
    // printf("%lf\n",nanu);

    // printf("%d\n",sanub(3,5));
    // printf("%lf\n",circleArea(4));
    // printf("%d\n",kensu(5,7));
    // gugudan(2);
    // printf("%d\n",daduhae(10));
    // sosu(127);
    countDown(10);
}