#include <iostream>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        string tmp; cin >> tmp;
        cout << tmp[0] << tmp[tmp.size()-1] << '\n';
    }
}
