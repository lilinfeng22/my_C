#include <stdio.h>

int main()
{
	int i;
	float score_list[6];
	float max = score_list[0], min = score_list[0];
	float sum = 0;
	float avg;
	for (i = 0; i <= 5; i++)
	{
		printf("please input the score from the %d referee:\n", i + 1);
		scanf_s("%f", &score_list[i]);
		sum += score_list[i];
		avg = (float)sum / 6;
	}
	printf("the sum result is :%.2f\n", sum);
	printf("the avg is: %.2f", avg);
	return 0;
}