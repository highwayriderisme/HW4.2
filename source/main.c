#include <stdio.h>

int main() 
{
    int number[10];
	int i = 0, j = 0;
	int temp = 0;

	for (i = 0; i < 10; i++)
	{
		scanf_s("%d", &number[i]);
	}
	for (i = 0; i < 10; i++)
	{
		for (j = i; j < 10; j++) 
		{
			if (number[j] < number[i]) 
			{
				temp = number[j];
				number[j] = number[i];
				number[i] = temp;
			}
		}
	}
    for (i = 0; i < 10; i++)
	{
		printf("%d ", number[i]);
	}
	printf("\n");
	system("pause");
	return 0;
}