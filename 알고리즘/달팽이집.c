#include <stdio.h>

int main()
{
	int n = 0, s = 1, k = 5, i = 0, j = -1;
	int a[5][5] = { {0,} ,{0,} };
	while (1)
	{
		for (int p = 0; p < k; p++)
		{
			n += 1;
			j += s;
			a[i][j] = n;
		}
		k -= 1;

		if (k != 0)
		{
			for (int p = 0; p < k; p++)
			{
				n += 1;
				i += s;
				a[i][j] = n;
			}
			s *= -1;
		}

		else break;
	}
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			printf("%d ", a[i][j]);
		}
		printf("\n");

	}
	return 0;
}
