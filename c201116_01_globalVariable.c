#include <stdio.h>
//전역변수 : 자동초기화
int a; // 0
double d; //0.000000
char c; // null

int add(int a, int b){
    return a + b;
}

int plus(int su){
    //전역변수 1씩 증가
    a += su;
    return a;
}

int main(){
    //지역변수 / 전역변수
    //메모리 : 지역변수(데이터영역), 지역변수(스택)
    //초기화 : 전역변수(자동초기화), 지역변수(초기화 안 됨)
    //접근성 : 전역변수(어디서든 접근), 지역변수(함수 안에서 만)
    //우선순위 : 같은 이름이 있을 경우 지역변수 우선
    //주의사항 : 지역변수의 무분별한 선언은 프로그램의 복잡도 증가
    // printf("a : %d \t d : %lf\t c : %c",a,d,c);
    // int a = 100;
    // add(20, 10);
    // printf("%d", a);

    //전역변수 1씩 증가
    // plus();
    // plus();
    // plus();
    // plus();
    // plus();
    // plus();
    
    //사용자에게 정수를 입력 받아 계속 누적하는 함수 0을 입력하면 종료
    int su;
    while (su != 0)
    {
        scanf("%d",&su);
        plus(su);
    }
    printf("%d",a);
}