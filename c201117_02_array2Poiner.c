#include <stdio.h>

int main(){
    //다차원 배열의 포인터
    // char arr[3][5] = {"yoon","bae","kim"};
    // char (*p)[5] = arr;
    // // printf("%s\n",p);
    // // printf("%s\n",p+1);
    // // printf("%s\n",p+2);

    // int size = sizeof(arr) / sizeof(arr[0]);
    
    // for(int i=0; i<size; i++){
    //     printf("%s\n",p);
    //     p++;
    // }

    //색을 사용자에게 입력받고 포인터를 이용해서 출력 값을 입력하지 않으면 종료.
    char color[3][10];
    char (*p)[10] = color;
    int size = sizeof(color) / sizeof(color[0]);
    for(int i = 0; i < size; i++){
        printf("color : ");
        gets(p+i);
        // scanf("%s",p+i);
        if(*(p+i)[0] == '\0' || *(p+i)[0] == ' '){
            break;
        }
    }
    printf("\n");
    for(int i = 0; i < size; i++){
        printf("%s\n",p+i);
    }
    
}