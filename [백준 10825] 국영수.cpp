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
	// 1. 국어 점수가 감소하는 순서로
	if (a.kor != b.kor) return a.kor > b.kor;
	// 2. (국어점수동일) 영어 점수가 증가하는 순서로
	if (a.eng != b.eng) return a.eng < b.eng;
	// 3. (국영점수동일) 수학 점수가 감소하는 순서로
	if (a.math != b.math) return a.math > b.math;
	// 4. (국영수점수동일) 이름이 사전순으로 증가하는 순서로
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