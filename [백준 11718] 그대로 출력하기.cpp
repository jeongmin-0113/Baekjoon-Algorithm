#include <iostream>
#include <string>
using namespace std;

int main() {
    while (true) {
        string tmp;
        getline(cin, tmp);
        if (tmp == "") break;
        else cout << tmp << '\n';
    }

    return 0;
}
