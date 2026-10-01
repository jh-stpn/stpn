#include <iostream>

using namespace std;

int A, B, C, D;
int main() {
    // Please write your code here.
    cin >> A >> B >> C >> D;
    cout << (C * 60 + D) - (A * 60 + B);
    return 0;
}