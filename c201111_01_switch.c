#include <stdio.h>

int main()
{
    // switch
    // int no = 2;
    // switch (no)
    // {
    // case 1:
    //     printf("one\n");
    //     break;
    // case 2:
    //     printf("two\n");
    //     break;
    // case 3:
    //     printf("three\n");
    //     break;
    // case 4:
    //     printf("four\n");
    //     break;
    // case 5:
    //     printf("five\n");
    //     break;
    // default:
    //     printf("잘못 입력하셨습니다.\n");
    //     break;
    //}

    //마지막날을 출력
    int year, mon;
    printf("which year : ");
    scanf("%d",&year);
    printf("which month : ");
    scanf("%d",&mon);
    switch(mon){
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            printf("31");
            break;
        case 2:
            if(year % 4 == 0 && year % 100 != 0 || year % 400 == 0){
                printf("29");
            }else{
                printf("28");
            }
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            printf("30");
            break;
        default:
            printf("wrong");
    }
    //A~F
    // char g;
    // printf("your grade is : ");
    // scanf("%c", &g);
    // switch (g)
    // {
    // case 'A':
    // case 'B':
    //     printf("GREAT!");
    //     break;
    // case 'C':
    // case 'D':
    //     printf("GOOD!");
    //     break;
    // case 'E':
    // case 'F':
    //     printf("TRY!");
    //     break;
    // default:
    //     printf("check again!");
    //}
    return 0;
}