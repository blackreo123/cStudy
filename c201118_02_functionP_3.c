#include <stdio.h>

void strPrint(char *pp[]){
    
    printf("%s\n",pp[0]);
    printf("%s\n",pp[1]);
    printf("%s\n",pp[2]);
}

int main(){
    //포인터의 포인터
    char a[2] = "c";
    char b[5] = "java";
    char c[7] = "python";

    //포인터의 배열
    char *p[3] = {a,b,c};
    //char **pp = p;
    strPrint(p);


}