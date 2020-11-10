#include <stdio.h>

int main(){
    //조건문
    // int a =0;
    // if (a>0){
    //     printf("%d : ",a);
    //     printf("양수\n"); //실행 되어야 할게 한개 일때에는 중괄호 생략가능.
    // }else if(a == 0){
    //     printf("0이다.");
    // }
    // else{
    //     printf("%d : ",a);
    //     printf("음수\n");
    // }

    //한 개의 정수를 입력 받아서 양수인지 음수인지 화면에 출력하시오.
    // int n;
    // printf("숫자를 입력하세요 : ");
    // scanf("%d",&n);
    // if (n > 0){
    //     printf("%d 은/는 양수입니다.",n);
    // }else if(n == 0){
    //     printf("%d 은/는 0입니다.",n);
    // }else{
    //     printf("%d 은/는 음수입니다.",n);
    // }
    
    //학생의 점수를 입력 받아 학점을 출력하는 프로그램을 작성해 보시오.
    // int a;
    // printf("점수를 입력하세욧! : ");
    // scanf("%d",&a);
    // if(a >= 90){
    //     printf("학점 : A");
    // }else if(a >= 80){
    //     printf("학점 : B");
    // }else if(a >= 70){
    //     printf("학점 : C");
    // }else if(a >= 60){
    //     printf("학점 : D");
    // }else{
    //     printf("학점 : F");
    // }

    //두개의 정수와 기호의 번호를 입력 받아서 사칙연 산결과값을 출력하는 프로그램을 완성하시오.
    // int a,b; int n;
    // printf("두수를 입력 : ");
    // scanf("%d %d",&a,&b);
    // printf("1.덧셈 2.뺄셈 3.곱셈 4.나눗셈\n");
    // printf("번호를 선택하세요 : ");
    // scanf("%d",&n);
    // if(n == 1){
    //     printf("덧셈결과 : %d",a+b);
    // }else if(n == 2){
    //     printf("뺄셈결과 : %d",a-b);
    // }else if(n ==3){
    //     printf("곱셈결과 : %d",a*b);
    // }else if(n == 4){
    //     printf("나눗셈결과 : %d",a/b);
    // }else{
    //     printf("잘못 입력했습니다.");
    // }
    
    //학생의 국.영.수 점수를 입력 받아 총점과 평균을 출력해 보시오(단 60점 미만이 한과목이라도 있으면 과락)
    // int k, e, m, sum; float avg;
    // printf("국영수 입력 : ");
    // scanf("%d %d %d",&k,&e,&m);
    // sum = k + e + m;
    // avg = sum / 3.0;
    // printf("합계 : %d\n평균 : %f\n",sum, avg);
    // if(k < 60 || e < 60 || m < 60){
    //     printf("과락입니다.");
    // }

    //보기메뉴를 보고 음식을 선택하면 가야 할 코너를 알려주는 프로그램을 작성하여 봅시다
    int n;
    printf("1.자장면 2.짬뽕 3.설렁탕 4.비빔밥 5.피자 6.스파게티\n메뉴를 선택하세요 : ");
    scanf("%d",&n);
    if(n == 1 || n == 2){
        printf("중식코너로 가세요.");
    }else if(n == 3 || n == 4){
        printf("한식코너로 가세요.");
    }else if(n == 5 || n == 6){
        printf("양식코너로 가세요.");
    }else{
        printf("잘못입력했습니다.");
    }

    //윤년체크 년도를 입력받고 윤년인지 아닌지 체크 
    //year가 4의 배수이고 100으로 나누어 떨어지지 않아야한다.
    //그러나 400의 배수이면 윤년.
    // int year;
    // printf("년도를 입력하세요 : ");
    // scanf("%d",&year);
    // if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
    // {
    //     printf("윤년입니다.");
    // }else{
    //     printf("윤년이 아닙니다.");
    // }
    

    return 0;
}