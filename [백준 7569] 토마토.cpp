#include <iostream>
#include <deque>
#include <map>
#include <algorithm>
using namespace std;

struct point {
	int y, x, z;
};

int m, n, h; // m:���� n:���� h:����
int box[101][101][101];
// (�ʱ�)���� 1 / ������ -1 / ���� 0 ���� �����ϱ�!!

deque <point> riped;

int tomato = 0;

int dx[6] = { 0, 0, -1, 1, 0, 0 };
int dy[6] = { -1, 1, 0, 0, 0, 0 };
int dz[6] = { 0, 0, 0, 0, -1, 1 };

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	// �Էº�
	cin >> m >> n >> h;
	for (int z = 0; z < h; ++z) {
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
					riped.push_back({i, j, z});
				}
				else {
					// �丶�� ����
					x = 0;
				}

				box[i][j][z] = x;
			}
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
		int x, y, z;
		y = riped[0].y;
		x = riped[0].x;
		z = riped[0].z;
		riped.pop_front();

		for (int i = 0; i < 6; ++i) {
			// �����¿� ������ �丶�� Ȯ��
			int nx = x + dx[i];
			int ny = y + dy[i];
			int nz = z + dz[i];

			if (nx >= 0 && nx < m && ny >= 0 && ny < n && nz >= 0 && nz < h && (box[ny][nx][nz] == -1)) {
				// ������ ���� �̳��鼭 ������ �丶����
				box[ny][nx][nz] = box[y][x][z] + 1; // ���� ��¥ �� ����
				riped.push_back({ ny, nx, nz }); // ���� �丶�信 �߰�!
			}
		}
	}

	int day = 0;
	// ���� �������� ���� �丶���� ��¥ �� ���ϱ� && ������ �丶�� �ִ� �� Ȯ��
	for (int c = 0; c < h; ++c) {
		for (int a = 0; a < n; ++a) {
			for (int b = 0; b < m; ++b) {
				if (box[a][b][c] == -1) { // ������ �丶�� �߰�!!
					cout << -1 << '\n';
					return 0;
				}
				else {
					// ���� �������� ���� �丶�� ��¥ ����
					day = max(box[a][b][c], day);
				}
			}
		}
	}

	// ó�� ���¸� 1�̶�� �ϰ� Ǯ� -1 ����
	cout << day-1 << '\n';
	return 0;
}