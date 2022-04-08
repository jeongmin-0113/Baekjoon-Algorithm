#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

struct Student {
	string name;
	int kor;
	int eng;
	int math;
};

bool compare(Student a, Student b) {
	// 1. ���� ������ �����ϴ� ������
	if (a.kor != b.kor) return a.kor > b.kor;
	// 2. (������������) ���� ������ �����ϴ� ������
	if (a.eng != b.eng) return a.eng < b.eng;
	// 3. (������������) ���� ������ �����ϴ� ������
	if (a.math != b.math) return a.math > b.math;
	// 4. (��������������) �̸��� ���������� �����ϴ� ������
	if (a.name != b.name) return a.name < b.name;
	return false;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n;
	vector <Student> students;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		Student s;
		cin >> s.name >> s.kor >> s.eng >> s.math;
		students.push_back(s);
	}
	sort(students.begin(), students.end(), compare);

	for (int i = 0; i < n; ++i) {
		cout << students[i].name << '\n';
	}
	return 0;
}