#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int A, B, C, M;
	cin >> A >> B >> C >> M;
	// A:���̴� �Ƿε� / B:ó���� ���� ��
	// C:�پ��� �Ƿε� / M:�ִ� �Ƿε� �ѵ�

	int t = 0; // ���� �ð�
	int work = 0, m = 0; // ���� �� ��, ���� �Ƿε�
	while (t < 24) {
		if (m + A > M) {
			// ���� 1�ð� ���ϸ� ���ƿ� �� ��
			// --> ����ߵ�
			t++; // 1�ð� ��
			m = m - C; // �Ƿε� C��ŭ ����
			if (m < 0) m = 0; // m�� 0���� �۾����� 0���� �ʱ�ȭ
		}
		else {
			// ���� 1�ð� ���� �� ����
			t++; // 1�ð� ����
			m = m + A; // �Ƿε� A��ŭ ����
			work = work + B; // B��ŭ ����
		}
	}

	cout << work << endl;

	return 0;
}