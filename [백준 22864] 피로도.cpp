#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int A, B, C, M;
	cin >> A >> B >> C >> M;
	// A:쌓이는 피로도 / B:처리한 일의 양
	// C:줄어드는 피로도 / M:최대 피로도 한도

	int t = 0; // 현재 시간
	int work = 0, m = 0; // 현재 한 일, 현재 피로도
	while (t < 24) {
		if (m + A > M) {
			// 다음 1시간 일하면 번아웃 올 때
			// --> 쉬어야됨
			t++; // 1시간 쉼
			m = m - C; // 피로도 C만큼 감소
			if (m < 0) m = 0; // m이 0보다 작아지면 0으로 초기화
		}
		else {
			// 다음 1시간 일할 수 있음
			t++; // 1시간 일함
			m = m + A; // 피로도 A만큼 증가
			work = work + B; // B만큼 일함
		}
	}

	cout << work << endl;

	return 0;
}