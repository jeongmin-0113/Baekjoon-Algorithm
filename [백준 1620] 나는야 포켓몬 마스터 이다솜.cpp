#include <iostream>
#include <string>
#include <map>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	map<string, int> pukiName; // �̸��� Ű - ��ȣ�� ��
	map<int, string> pukiNum; // ��ȣ�� Ű - �̸��� ��
	pukiName.insert({ "�ҷ���", 0 }); // 0�� �̸� �־��ֱ⤾��
	pukiNum.insert({ 0, "�ҷ���"});

	int n, m; cin >> n >> m;
	for (int i = 1; i <= n; ++i) {
		string tmp; cin >> tmp;
		pukiName.insert({ tmp, i });
		pukiNum.insert({ i, tmp });
	}

	while (m--) {
		string tmp; cin >> tmp;
		if (isdigit(tmp[0])) {
			// ������ �� - ���ϸ� �̸� ���
			int num = stoi(tmp);
			cout << pukiNum[num] << '\n';
		}
		else {
			// ���ϸ� �̸��� �� - ���� ��ȣ ���
			int num = pukiName[tmp];
			cout << num << '\n';
		}
	}

	return 0;
}