/* 분해합 */
#include <stdio.h>

int main()
{
	int N, temp, digit = 0, result = 0;
	scanf("%d", &N);
	temp = N;
	
	while (temp > 0) {
		temp /= 10;
		digit++;
	}
	
	temp = N;
	temp = temp - digit * 9;
	if (temp < 0)
		temp = 0;
	
	int num, sum = 0;
	for (int i = temp; i <= N; i++) {
		num = i;
		sum += num;
		while (num > 0) {
			sum += num % 10;
			num /= 10;
		}
		
		if (sum == N) {
			result = i;
			break;
		}
		sum = 0;
	}
	
	printf("%d", result);
	return 0;
}
