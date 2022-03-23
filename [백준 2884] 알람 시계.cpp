#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int hour, min;
	cin >> hour >> min;
	if (min < 45) {
		hour -= 1;
		if (hour < 0) hour = 23;
		min = 60 - (45 - min);
	}
	else min -= 45;

	cout << hour << ' ' << min;

	return 0;
}