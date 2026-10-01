#include <iostream>
using namespace std;

int month[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31,
                    30, 31, 30, 31 };
int m1, d1, m2, d2;

int main() {
    // Please write your code here.
    cin >> m1 >> d1 >> m2 >> d2;
    int answer = 0;
    int tot1, tot2;
    tot1 = tot2 = 0;
    for(int i = 1; i < m1; i++)
    {
        tot1 += month[i];
    }
    for(int i = 1; i < m2; i++)
    {
        tot2 += month[i];
    }
    tot1 += d1;
    tot2 += d2;
    answer = tot2 - tot1 + 1;
    cout << answer;
    return 0;
}