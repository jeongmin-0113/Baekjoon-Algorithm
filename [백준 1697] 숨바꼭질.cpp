#include <iostream>
#include <queue>
using namespace std;

int n, k;
int visited[100001];
int arr[3] = { -1, 1, 2 };
queue<int> q;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	fill(visited, visited + 100001, -1);
	cin >> n >> k;

	visited[n] = 0;
	q.push(n);

	while (true) {
		int cur = q.front();
		q.pop();

		for (int i = 0; i < 3; ++i) {
			int num;
			if (i == 2) num = cur * arr[i];
			else num = cur + arr[i];

			if (num >= 0 && num <= 100000 && visited[num] == -1) {
				visited[num] = visited[cur] + 1;
				q.push(num);
			}
		}

		if (visited[k] != -1) break;
	}
	
	cout << visited[k] << '\n';

	return 0;
}