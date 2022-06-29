#include <iostream>
#include <deque>
#include <algorithm>
using namespace std;

int m, n; // m:���� n:����
int box[1001][1001];
// (�ʱ�)���� 1 / ������ -1 / ���� 0 ���� �����ϱ�!!

deque <pair<int, int>> riped;

int tomato = 0;

// �� �� �� ��
int dx[4] = { 0, 0, -1, 1 };
int dy[4] = { -1, 1, 0, 0 };

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	// �Էº�
	cin >> m >> n;
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			int x; cin >> x;

			if (x == 0) {
				// ������ + �丶�� ����
				x = -1;
				tomato++;
			}
			else if (x == 1) {
				// ���� + �丶�� ����
				tomato++;
				riped.push_back({ i, j });
			}
			else {
				// �丶�� ����
				x = 0;
			}

			box[i][j] = x;
		}
	}

	if (tomato == riped.size()) {
		// ��� �丶�䰡 �;� ����
		cout << 0 << '\n';
		return 0;
	}
	else if (riped.size() == 0) {
		// �;��ִ� �丶�� ���� --> �丶�䰡 ���� �� ����
		cout << -1 << '\n';
		return 0;
	}

	// �丶�� �ʹ� �ð� ���
	while (!riped.empty()) {
		int x, y;
		y = riped[0].first;
		x = riped[0].second;
		riped.pop_front();

		for (int i = 0; i < 4; ++i) {
			// �����¿� ������ �丶�� Ȯ��
			int nx = x + dx[i];
			int ny = y + dy[i];

			if (nx >= 0 && nx < m && ny >= 0 && ny < n && (box[ny][nx] == -1)) {
				// ���ΰ� 0 �̻� m ����, ���ΰ� 0 �̻� n �����̸鼭 ������ �丶����
				box[ny][nx] = box[y][x] + 1; // ���� ��¥ �� ����
				riped.push_back({ ny, nx }); // ���� �丶�信 �߰�!
			}
		}
	}

	int day = 0;
	// ���� �������� ���� �丶���� ��¥ �� ���ϱ� && ������ �丶�� �ִ� �� Ȯ��
	for (int a = 0; a < n; ++a) {
		for (int b = 0; b < m; ++b) {
			if (box[a][b] == -1) { // ������ �丶�� �߰�!!
				cout << -1 << '\n';
				return 0;
			}
			else {
				// ���� �������� ���� �丶�� ��¥ ����
				day = max(box[a][b], day);
			}
		}
	}

	// ó�� ���¸� 1�̶�� �ϰ� Ǯ� -1 ����
	cout << day-1 << '\n';
	return 0;
}