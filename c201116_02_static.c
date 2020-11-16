#include <stdio.h>

int plus(){
    //static변수
    //초기화 : 처음 호출했을때
    //메모리 : 데이터 영역
    //접근 : 함수안에서만 가능
    static int a; //static 변수
    a++;
    return a;
}
int jago(int a){
    static int j = 0;
    j += a;
    return j;
}
void ibgo(){
    int a;
    printf("입고 수 : ");
    scanf("%d",&a);
    printf("%d개 입고하였습니다.\n",a);   
    jago(a);
}

void pan(){
    int a;
    printf("판매 수 : ");
    scanf("%d",&a);
    printf("%d개 판매하였습니다.\n",a);   
    jago(-a);
}


int main(){
    //static
    // for(int i = 0; i<10; i++){
    //     printf("%d\n",plus());
    // }
    
    while (1)
    {
        int n;
        printf("1. 입고\n2. 출고\n3. 재고\n0. 종료\n");
        printf("번호 선택 : ");
        scanf("%d",&n);
        switch(n){
            case 1:
                ibgo();
                break;
            case 2:
                pan();
                break;
            case 3:
                printf("재고 : %d개\n",jago(0));
                break;
            case 0:
                printf("종료합니다.\n");
                return 0;
            default:
                printf("잘못 입력했습니다.\n");
        }
    }
    

}