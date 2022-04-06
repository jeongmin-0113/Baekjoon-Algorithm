#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <tuple>
using namespace std;

struct Member {
	int age = 0;
	int number = 0;
	string name;
};

bool compare(Member a, Member b) {
	if (a.age != b.age) return a.age < b.age;
	else return a.number < b.number;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n;
	vector <Member> members;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		int age;
		string name;
		cin >> age >> name;
		Member tmp;
		tmp.age = age; tmp.number = i; tmp.name = name;
		members.push_back(tmp);
	}
	sort(members.begin(), members.end(), compare);

	for (int i = 0; i < n; ++i) {
		cout << members[i].age << ' ' << members[i].name << '\n';
	}
	return 0;
}