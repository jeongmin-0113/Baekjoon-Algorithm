#include <iostream>
using namespace std;

int main() {

    int N; cin >> N;

    string winner;
    if (N % 2 == 0) winner = "CY";
    else winner = "SK";

    cout << winner;
}