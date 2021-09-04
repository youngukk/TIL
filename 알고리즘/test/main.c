#include <stdio.h>
#include <stdlib.h>

int main()
{
	int N, M, sum = 0;
	scanf("%d %d", &N, &M);

	int *card = malloc(sizeof(int) * N);

	for (int i = 0; i < N; i++)
		scanf("%d", &card[i]);

	for (int i = 0; i < N - 2; i++)
		for (int j = i + 1; j < N - 1; j++)
			for (int k = j + 1; k < N; k++)
				if (abs(M - sum) > abs(M - (card[i] + card[j] + card[k])))
					sum = card[i] + card[j] + card[k];

	printf("%d\n", sum);
	free(card);
	return 0;
}
