#include <stdio.h>

#define size 10001
int main()
{
	int N, num;
	int ip[size] = { 0 };
	scanf("%d", &N);

	for (int i = 0; i < N; ++i)
	{
		scanf("%d", &num);
		ip[num]++;
	}

	for (int i = 0; i <= size; i++)
	{
		if (!ip[i]) continue;
		for (int j = 0; j < ip[i]; ++j) printf("%d\n", i);
	}
	return 0;
}