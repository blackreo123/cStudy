#include <stdio.h>
#include <stdarg.h>
//가변인자
//main함수의 sum에 가변인자 더하기
void addSum(int* psum,int cnt,...) {
	int* p = &cnt;
	printf("%p\n", psum);
	printf("%p %d\n", p, cnt);
	printf("%p %d\n", p + 1, *(p+1));
	printf("%p %d\n", p + 2, *(p+2));
	// for (int i = 1; i <= cnt; i++) {
	// 	*psum += p[i];
	// }
}
void change(int* a, int* b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void oneTen(int* sum){
    for(int i=1; i<11;i++){
        *sum += i;
    }
}

//메인 함수의 sum에 값 더하기
// void addSum(int* p, int* ps){
//     *ps += *p;
// }

void addRef(int *p){
    *p += 100;
}

//call by value
void add(int a){
    printf("%d\n",a+100);
}

int main(){
    //함수의 매개변수에 포인터 전달
    
    //call by value
    // int a = 10;
    // add(a);

    //call by reference
    // int a = 10;
    // addRef(&a);
    // printf("%d\n",a);

    //
    // int a = 10, b = 20;
    // int sum = 0;
    // addSum(&a,&sum);
    // addSum(&b,&sum);
    // printf("%d\n",sum);

    //1~10까지 더하기
    // int sum = 0;
    // oneTen(&sum);
    // printf("sum : %d\n",sum);

    //두수의 값 바꾸기
    // int a = 10, b = 20;
    // int temp;
    // temp = a;
    // a = b;
    // b= temp;
    // printf("a : %d, b : %d",a,b);

    // int a = 10, b = 20;
    // change(&a,&b);
    // printf("a : %d, b : %d",a,b);

    //정수만 입력받는 함수 만들기
	//int a;
	//inputInt(&a); 
	//printf("입력하신 정수는 %d\n", a);
	//
	//char name[20];
	//inputStr(name);
	//printf("당신의 이름은 %s\n", name);

	//합계더하는 함수
	int sum=0;
	int a = 10, b = 20, c=30;
	//addSum(&sum,2,10,20); //30
	//addSum(&sum, 3, 10, 20, 30); //60
	addSum(&sum, 5, 10, 20, 30, 40, 50 ); //150
	printf("합계:%d\n", sum);
}