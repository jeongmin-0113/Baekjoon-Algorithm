#include <iostream>
#include <deque>
#include <map>
#include <algorithm>
using namespace std;

struct point {
	int y, x, z;
};

int m, n, h; // m:가로 n:세로 h:높이
int box[101][101][101];
// (초기)익음 1 / 안익음 -1 / 없음 0 으로 저장하기!!

deque <point> riped;

int tomato = 0;

int dx[6] = { 0, 0, -1, 1, 0, 0 };
int dy[6] = { -1, 1, 0, 0, 0, 0 };
int dz[6] = { 0, 0, 0, 0, -1, 1 };

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	// 입력부
	cin >> m >> n >> h;
	for (int z = 0; z < h; ++z) {
		for (int i = 0; i < n; ++i) {
			for (int j = 0; j < m; ++j) {
				int x; cin >> x;

				if (x == 0) {
					// 안익음 + 토마토 있음
					x = -1;
					tomato++;
				}
				else if (x == 1) {
					// 익음 + 토마토 있음
					tomato++;
					riped.push_back({i, j, z});
				}
				else {
					// 토마토 없음
					x = 0;
				}

				box[i][j][z] = x;
			}
		}
	}
	
	if (tomato == riped.size()) {
		// 모든 토마토가 익어 있음
		cout << 0 << '\n';
		return 0;
	}
	else if (riped.size() == 0) {
		// 익어있는 토마토 없음 --> 토마토가 익을 수 없음
		cout << -1 << '\n';
		return 0;
	}

	// 토마토 익는 시간 계산
	while (!riped.empty()) {
		int x, y, z;
		y = riped[0].y;
		x = riped[0].x;
		z = riped[0].z;
		riped.pop_front();

		for (int i = 0; i < 6; ++i) {
			// 상하좌우 안익은 토마토 확인
			int nx = x + dx[i];
			int ny = y + dy[i];
			int nz = z + dz[i];

			if (nx >= 0 && nx < m && ny >= 0 && ny < n && nz >= 0 && nz < h && (box[ny][nx][nz] == -1)) {
				// 지정된 범위 이내면서 안익은 토마토임
				box[ny][nx][nz] = box[y][x][z] + 1; // 익은 날짜 수 저장
				riped.push_back({ ny, nx, nz }); // 익은 토마토에 추가!
			}
		}
	}

	int day = 0;
	// 가장 마지막에 익은 토마토의 날짜 수 구하기 && 안익은 토마토 있는 지 확인
	for (int c = 0; c < h; ++c) {
		for (int a = 0; a < n; ++a) {
			for (int b = 0; b < m; ++b) {
				if (box[a][b][c] == -1) { // 안익은 토마토 발견!!
					cout << -1 << '\n';
					return 0;
				}
				else {
					// 가장 마지막에 익은 토마토 날짜 저장
					day = max(box[a][b][c], day);
				}
			}
		}
	}

	// 처음 상태를 1이라고 하고 풀어서 -1 해줌
	cout << day-1 << '\n';
	return 0;
}