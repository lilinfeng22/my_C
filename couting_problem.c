#include <stdio.h>
#include <stdlib.h>

int send_Q() {
    int num_list[20], i, x, y, answer, c, d;
    for (i = 0; i < 20; i++) {
        num_list[i] = rand() % 10;
    }
    c = rand() % 20;
    d = rand() % 20;
    x = num_list[c];
    y = num_list[d];

    if (rand() % 2 == 0) {
        printf("\n题目是 %d + %d =\n", x, y);
        answer = x + y;
    }
    else {
        if(x>=y)
        {
            printf("\n题目是 %d - %d =\n", x, y);
            answer = x - y;
        }
        else
        {
            printf("\n题目是 %d - %d =\n", y, x);
            answer = y - x;
        }      
    }
    return answer;
}

int user() {
    int user_answer = 0;
    printf("请输入您的答案:");
    scanf_s("%d", &user_answer);
    return user_answer;
}

int score(int x, int y) {
    int i = 0;
    if (x == y)
        i++;
    return i;
}

void printscore(int s) {
    printf("===================\n");
    printf("$您的成绩为：%-3d分$\n", s);
    printf("===================\n");
}

int main() {
    srand((unsigned)time(NULL));
    int j = 0,total_score = 0;
    for (j=0;j<=9;j++)
    { 
        int answer = send_Q();
        int user_answer = user();
        int s = score(answer, user_answer);
        total_score += s;
    }  
    printscore(total_score);
    return 0;
}
