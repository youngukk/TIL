#include <stdio.h>

int main()
{
	int k, i, j, m, a[9];

	k = 1;

	while (k <= 9)
	{
		k = k + 1;
		a[k - 2] = k;
	}

	j = 0;

	for (i = 0; i < 9; i++)
	{
		if (a[i] != 0)
		{
			j++;
			m = i + 1;
			while (m < 9)
			{
				m = m + a[i];
				a[m - 1] = 0;
			}
		}
		if (a[i] != 0)
		{
			printf("%d 보다 작은 소수는 %d\n", k, a[i]);
		}
	}

	printf("소수의 개수는 %d", j);


	return 0;
}