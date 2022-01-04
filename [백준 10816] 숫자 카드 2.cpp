#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int N, M;

	cin >> N;
	int* card = new int[N];
	for (int i = 0; i < N; i++) cin >> card[i];
	sort(card, card + N);

	cin >> M;
	int* tmp = new int[M];
	for (int i = 0; i < M; i++) cin >> tmp[i];

	int* ans = new int[M];

	for (int i = 0; i < M; i++)
	{
		ans[i] = 0;
		int low = lower_bound(card, card + N, tmp[i]) - card;
		int up = upper_bound(card, card + N, tmp[i]) - card;
		ans[i] = up - low;
	}
	for (int i = 0; i < M; i++) cout << ans[i] << ' ';

	return 0;
}