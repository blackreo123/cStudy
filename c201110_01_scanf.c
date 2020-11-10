#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
int main(){
    // //scanf함수: 사용자 입력.
    // int a = 10;
    // printf("%d %p\n",a, &a); //변수의 주소.

    //정수 입력받기.
    // int a;
    // scanf("%d",&a); //선언한 변수의 주소에다가 입력 받는다.
    // printf("입력 받은 값: %d\n",a);

    //실수 입력 받기.
    // float f; double d;
    // printf("실수를 입력하세요.: ");
    // scanf("%f",&f);
    // printf("double 입력하세요.: ");
    // scanf("%lf",&d);
    // printf("입력한 실수: %f\n",f);
    // printf("입력한 double: %f",d);

    //문자 입력 받기.
    // char c;
    // printf("문자를 입력하세요.: ");
    // scanf("%c",&c);
    // printf("입력한 문자: %c",c);

    //문자열 입력 받기.
    // char s[10];
    // printf("what is you name? : ");
    // scanf("%s",s); // 문자열은 그 자체로 주소를 나타내어서 걍 써도 댐.
    // printf("your name is %s",s);

    //두개이상의 데이터 받기
    // int a, b;
    // printf("두개의 정수를 입력: ");
    // scanf("%d %d",&a,&b); //공백 또는 엔터로 구분.
    // printf("입력한 두 정수: %d %d",a,b);

    //문자열 입력 받기2
    // char s[11];
    // printf("what is you name? : ");
    // gets(s); //문자열 전용 함수.
    // printf("your name is %s",s);

    //반지름(정수) 원주율을 입력 받아서 원의 넓이 구하기.
    // int r; float p;
    // printf("반지름과 원주율을 입력하세요 : ");
    // scanf("%d %f",&r,&p);
    // printf("원의 넓이는 : %f 입니다.",r*r*p);

    //16진수 입력받기
    // int a;
    // printf("16진수 입력: ");
    // scanf("%x",&a);
    // printf("10진수로 변환 : %d\n",a);

    //RGB값을 입력받아 코드값 만들기
    //255 0 0 ==> ff0000
    // int r,g,b;
    // int rgb;
    // printf("rgb값을 입력하세요\n");
    // printf("r : ");
    // scanf("%d",&r);
    // printf("g : ");
    // scanf("%d",&g);
    // printf("b : ");
    // scanf("%d",&b);
    // rgb = r << 16 | g << 8 | b;
    // printf("%x",rgb);
    
    //두개의 정수를 입력 받아 몫, 나누기, 나머지를 구해보시오.
    // int a, b;
    // printf("두개의 정수를 입력하세요 : ");
    // scanf("%d %d",&a,&b);
    // printf("몫 : %d, 나누기 : %lf, 나머지 : %d",a/b,(double)a/(double)b,a%b);

    //물건 구입 후 거스름돈을 계산하여 출력하는 프로그램을 완성하시오(단, 물건값과 지불한 돈은 입력 받는다)
    // int a,b;
    // printf("물건값 : ");
    // scanf("%d",&a);
    // printf("물건값 : ");
    // scanf("%d",&b);
    // printf("거스름돈 : %d",a-b);

    //국어,영어, 수학 점수를 입력 받아 합계와 평 균을 구하는 프로그램을 완성하시오
    // int k, e, m; int sum; float avg;
    // printf("국어, 영어, 수학 점수를 입력하세요.\n");
    // printf("국어 : ");
    // scanf("%d",&k);
    // printf("영어 : ");
    // scanf("%d",&e);
    // printf("수학 : ");
    // scanf("%d",&m);
    // sum = k+e+m;
    // avg = sum/3.0;
    // printf("합계는 %d, 평균은 %f 입니다.",sum,avg);

    //정상 체중 여부 출력하기
    //➢ 키와 몸무게를 입력 받아서 정상체중 여부 출력 ➢ 정상체중 = (키-100) * 0.9
    //➢ 오차범위 : + - 10%

    float h; float k; float kijun;
    printf("키와 몸무게를 입력하세요\n");
    printf("키: ");
    scanf("%f",&h);
    printf("몸무게: ");
    scanf("%f",&k);
    kijun = (h - 100) * 0.9;
    k > kijun * 1.1 ? printf("과체중") : (k < kijun * 0.9 ? printf("저체중") : printf("정상"));
}