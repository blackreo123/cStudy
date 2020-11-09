#include <stdio.h>
//진입점 함수
int main(){
    //변수
    // int a; long b;  //선언
    // a = 10; b = 20;//대입연산자: 할당
    // printf("%d %ld\n",a,b);
    // printf("size: %d %d\n",sizeof(a),sizeof(b));
    // //실수형 변수
    // //선언과 동시에 초기화.
    // float f = 3.14123456789;   
    // double d = 3.14123456789; 
    // printf("%.13f %.13f\n",f,d);
    // printf("size: %d %d\n",sizeof(f),sizeof(d));

    // //문자형
    // char c = 'a';
    // printf("%c %d %c\n",c,c,a);
    // printf("size: %d\n",sizeof(c));

    // //문자열: 문자열의 형은 없다. ==> 문자의 배열.
    // //문자열배열의 크기는 데이터 사이즈 +1
    // //(\0 : 널문자) ==> 문자열의 끝.
    // char s[6] = "hello";
    // printf("%s %d %p\n",s,s,s);
    // printf("5번 인덱스 : %c\n",s[5]); //문자열 마지막엔 무조건 null문자가 있다. 왜냐하면 문장의 끝을 알기 위해서 인것이다..!
    // s[2] = '\0';
    // printf("바꾼후 : %s\n", s);

    //알파벳 문자들의 아스키 코드의 값을 알아보시오.
    //A,a,%,+
    // printf("%d %d %d %d\n",'A','a','%','+');
    // 변수에 정수형/실수형/문자형의 데이터가 저장되어 있을때 메모리에서 차지하는 사이즈를 각각 구하시오~
    int a = 1; float b = 1.1; char c = 'a'; long d = 10;
    printf("%d %lu %lu %d",sizeof(a),sizeof(b),sizeof(c),sizeof(d)); //sizeof() 이거 나중에 좀더 공부해봐야겠다. %lu로 쓰라고 나오네...    
    return 0;
}