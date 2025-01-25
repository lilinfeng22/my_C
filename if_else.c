#include <stdio.h>
int main()
{
    int a, b, c;
    int d = 0;

    printf("请以空格隔开来输入您所需的数据：\n");
    scanf_s("%d %d %d %d", &a, &b, &c, &d);

    if (a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a)
        printf("这是直角三角形\n");
    else if (a == b || b == c || c == a)
        printf("这是等腰三角形\n");
    else {
        while (d < 99) {
            printf("%d\n", d += 1);
        }
    }

    char name[10];
    int grade = 0;
    printf("请输入您的名字:\n");
    scanf_s("%4s", name, sizeof(name));
    printf("请输入您的成绩：\n");
    scanf_s("%d", &grade);
    switch (grade)
    {
    case 10:
        printf("您的成绩非常优秀\n");
        break;
    case 9:
        printf("您的成绩一般优秀\n");
        break;
    default:
        break;
    }
    printf("====================\n");
    printf("姓名：%-*s\n", 10, name);
    printf("成绩：%-*d\n", 10, grade);
    printf("====================\n");

    return 0;
}
