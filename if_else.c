#include <stdio.h>
int main()
{
    int a, b, c;
    int d = 0;

    printf("���Կո��������������������ݣ�\n");
    scanf_s("%d %d %d %d", &a, &b, &c, &d);

    if (a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a)
        printf("����ֱ��������\n");
    else if (a == b || b == c || c == a)
        printf("���ǵ���������\n");
    else {
        while (d < 99) {
            printf("%d\n", d += 1);
        }
    }

    char name[10];
    int grade = 0;
    printf("��������������:\n");
    scanf_s("%4s", name, sizeof(name));
    printf("���������ĳɼ���\n");
    scanf_s("%d", &grade);
    switch (grade)
    {
    case 10:
        printf("���ĳɼ��ǳ�����\n");
        break;
    case 9:
        printf("���ĳɼ�һ������\n");
        break;
    default:
        break;
    }
    printf("====================\n");
    printf("������%-*s\n", 10, name);
    printf("�ɼ���%-*d\n", 10, grade);
    printf("====================\n");

    return 0;
}
