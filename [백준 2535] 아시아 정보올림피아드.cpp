#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Student {
	int nationNum;
	int studentNum;
	int score;
};

bool compare(Student a, Student b) {
	return a.score > b.score;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n;
	cin >> n;
	vector <Student> students;
	for (int i = 0; i < n; ++i) {
		Student s;
		cin >> s.nationNum >> s.studentNum >> s.score;
		students.push_back(s);
	}
	sort(students.begin(), students.end(), compare);

	int nation[100] = { 0, };
	int ans = 0;
	for (int i = 0; i < n; ++i) {
		if (nation[students[i].nationNum] < 2) {
			cout << students[i].nationNum << ' ' << students[i].studentNum << '\n';
			ans++;
			nation[students[i].nationNum]++;
		}
		if (ans == 3) break;
	}

	return 0;
}