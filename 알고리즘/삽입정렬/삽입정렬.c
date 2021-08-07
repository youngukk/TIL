#include <stdio.h>

int main()
{

	int i, j, k, key;
	int a[5] = {30, 70, 10, 90, 40};
	j = -1;



	for (i = 1; i < 5; i++)
	{
		key = a[i];
		for (k = i -1; k >= 0; k--)
		{
			if (a[k] > key)
				a[k + 1] = a[k];
			else break;
		}
		a[k + 1] = key;
	}

	for (int i = 0; i < 5; i++)
	{
		printf("%d ", a[i]);
	}
	return 0;
}