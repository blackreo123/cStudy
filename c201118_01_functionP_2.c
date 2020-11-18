#include <stdio.h>

//이름을 출력하는 함수
void inputName(){
    
}

void printName(char (*p)[20],int size){
    for(int i = 0; i<size; i++){
        printf("[%d] %s\n",i,p+i);
    }
}

int main(){

    
    char name[3][20];
    int size = sizeof(name)/sizeof(name[0]);
    //char a = 'a', b = 'b' , c='c';
    //char *p[3] = {&a,&b,&c}; //포인터의 배열

    char(*p)[20] = name; //배열의 포인터

    for(int i = 0; i<3; i++){
        scanf("%s",p+i);
    }
    printName(name,size);
    
}