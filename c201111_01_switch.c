#include <stdio.h>

int main()
{
    //switch
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
    // }

    //마지막날을 출력
    //

    //A~F
    char g;
    printf("your grade is : ");
    scanf("%c", &g);
    switch (g)
    {
    case 'A':
    case 'B':
        printf("GREAT!");
        break;
    case 'C':
    case 'D':
        printf("GOOD!");
        break;
    case 'E':
    case 'F':
        printf("TRY!");
        break;
    default:
        printf("check again!");
    }
    return 0;
}