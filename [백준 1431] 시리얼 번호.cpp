#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int cnt(string s, int size) {
	int sum = 0;
	for (int i = 0; i < size; ++i) {
		if (isdigit(s[i])) sum += s[i] - '0';
	}
	return sum;
}

bool compare(string a, string b) {
	int aSize = a.size();
	int bSize = b.size();
	if (aSize != bSize) return aSize < bSize;
	else {
		int aSum = cnt(a, aSize);
		int bSum = cnt(b, bSize);
		if (aSum != bSum) return aSum < bSum;
		else return a < b;
	}
	
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n;
	vector <string> v;
	cin >> n;
	for (int i=0; i<n; ++i) {
		string s;
		cin >> s;
		v.push_back(s);
	}
	sort(v.begin(), v.end(), compare);

	for (int i = 0; i < n; ++i) {
		cout << v[i] << '\n';
	}
	return 0;
}