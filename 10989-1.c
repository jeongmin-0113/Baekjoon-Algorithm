#include <stdio.h>

int main()
{
	int N, tmp;
	int cnt[10001] = { 0 };
	scanf("%d", &N);

	for (int i = 0; i < N; ++i)
	{
		scanf("%d", &tmp);
		cnt[tmp]++;
	}

	for (int j=0; j<10001; ++j)
	{
		for (int n = 0; n < cnt[j]; ++n) printf("%d\n", j);
	}
	return 0;
 }