#include <iostream>
#include <string>
using namespace std;

int n;
string s = "";
void recursiveFunc() {
	cout << s << "\"����Լ��� ������?\"" << '\n';
	if (s.size() / 4 == n) {
		cout << s << "\"����Լ��� �ڱ� �ڽ��� ȣ���ϴ� �Լ����\"" << '\n';
		cout << s << "��� �亯�Ͽ���." << '\n';
		return;
	}
	cout << s << "\"�� ����. �������� �� �� ����⿡ �̼��� ��� ������ ����� ������ �־���." << '\n';
	cout << s << "���� ������� ��� �� ���ο��� ������ ������ �߰�, ��� �����Ӱ� ����� �־���." << '\n';
	cout << s << "���� ���� ��κ� �ǾҴٰ� �ϳ�. �׷��� ��� ��, �� ���ο��� �� ���� ã�ƿͼ� ������.\"" << '\n';
	s += "____";
	recursiveFunc();
	s.erase(s.size() - 4, 4);
	cout << s << "��� �亯�Ͽ���." << '\n';
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> n;
	cout << s << "��� �� ��ǻ�Ͱ��а� �л��� ������ �������� ã�ư� ������." << '\n';
	recursiveFunc();

	return 0;
}