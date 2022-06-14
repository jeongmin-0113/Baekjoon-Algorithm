#include <iostream>
#include <string>
#include <map>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	map<string, int> pukiName; // 이름이 키 - 번호가 값
	map<int, string> pukiNum; // 번호가 키 - 이름이 값
	pukiName.insert({ "불량알", 0 }); // 0번 미리 넣어주기ㅎㅎ
	pukiNum.insert({ 0, "불량알"});

	int n, m; cin >> n >> m;
	for (int i = 1; i <= n; ++i) {
		string tmp; cin >> tmp;
		pukiName.insert({ tmp, i });
		pukiNum.insert({ i, tmp });
	}

	while (m--) {
		string tmp; cin >> tmp;
		if (isdigit(tmp[0])) {
			// 숫자일 때 - 포켓몬 이름 출력
			int num = stoi(tmp);
			cout << pukiNum[num] << '\n';
		}
		else {
			// 포켓몬 이름일 때 - 도감 번호 출력
			int num = pukiName[tmp];
			cout << num << '\n';
		}
	}

	return 0;
}