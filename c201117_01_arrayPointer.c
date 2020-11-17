#include <stdio.h>

int main(){
    //배열의 포인터
    // int arr[] = {10,20,30};
    // int* p = arr;
    // printf("%p\n",p);
    // printf("%d\n",*p);
    // p++;
    // printf("%p\n",p);
    // printf("%d\n",*p);
    // p++;
    // printf("%p\n",p);
    // printf("%d\n",*p);

    // for(int i = 0; i<3; i++){
    //     printf("%p\n",p);
    //     printf("%d\n",*p);
    //     p++;
    //}

    //포인터의 주소는 그대로
    // int arr[] = {10,20,30};
    // int *p = arr;
    // for(int i = 0; i <3 ; i++){
    //     printf("%p, %d\n",p + i, *(p+i));
    // }

    //배열의 이름을 포인터로 사용
    // int arr[] = {10,20,30};
    // printf("%p %d\n",arr,*arr);
    // printf("%p %d\n",arr+1,*(arr+1));
    //배열의 이름은 상수라서 변경 불가능 arr++ 이런거 불가능

    //포인터의 인덱스를 이용한 접근
    // int arr[] = {10,20,30};
    // int*p = arr;
    // printf("%d %d %d\n",p[0],p[1],p[2]);

    // double d[] = {1.1,2.1,3.1};
    // double*p = d;
    
    // for(int i =0; i< 3; i++){
    //     printf("%p, %lf\n",p+i, *(p+i));
    // }
    
    // for (int i = 0; i < 3; i++)
    // {
    //     printf("%lf\n",p[i]);
    // }
    
    //문자형 배열에 b f g y z를 저장하고 포인터 변수를 이용하여 한 글자씩 화면에 출력하여라.
    // char arr[] = {'b','f','g','y','z'};
    // char*p = arr;
    // for(int i=0; i<5; i++){
    //     printf("%c\n",*(p+i));
    // }

    //정수형 배열에 9 6 8 1 2를 저장하고 포인터 변수를 이용하여 합계를 구하여라
    // int arr[] = {9,6,8,1,2};
    // int*p = arr;
    // int sum = 0;
    // for(int i =0; i<sizeof(arr)/sizeof(int); i++){
    //     sum += *(p+i);
    // }
    // printf("%d\n",sum);

    //문자열의 포인터
    // char str[] = "hello";
    // char *p = str;
    // p = "sad";
    // printf("%s %s\n",str, p);
    // puts(str);
    // puts(p);

    // char *p = "hello";
    // puts(p);
    // p = "bye";
    // puts(p);

    // 사용자에게 이름과 키를 입력받아 포인터 변수에 저장하고 출력 계속 입력 여부 (y/n)
    char name[20];
    double height;
    char* pname = name;
    double *pheight = &height;
    char check;
    while (1)
    {
        printf("======================================\n");
        printf("name : ");
        gets(pname);
        printf("height : ");
        scanf("%lf",&height);
        getchar();
        printf("%s, %lf\n",pname, *pheight);
        printf("======================================\n");
        printf("계속 하려면 y 아니면 n\n");
        scanf("%c",&check);
        if(check == 'n'){
            break;
        }else if(check == '\n'){
            continue;
        }
         
        
    }
    
    
}