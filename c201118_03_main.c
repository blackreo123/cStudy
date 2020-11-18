#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// int main(int argc, char** argv){
int main(int argc, char* argv[]){
    // printf("아규먼트 수 : %d\n", argc);
    // for(int i = 0; i < argc; i++){
    //     printf("%s\n", argv[i]);
    // }

    if(argc <3){
        printf("ID!!!! PW!!!!");
        exit(0);
    }
    if(strcmp(argv[1],"root")==0 && strcmp(argv[2],"1111")==0){
        printf("super!!");
    }else{
        printf("nomal");
    }
}