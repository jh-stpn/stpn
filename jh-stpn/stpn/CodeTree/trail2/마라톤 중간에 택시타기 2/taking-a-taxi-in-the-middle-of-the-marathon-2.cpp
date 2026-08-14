#include <iostream>
#include <vector>
#include <cstdlib>
#include <climits>
#define X first
#define Y second
using namespace std;

int main() {
    // Please write your code here.
    int N;
    cin >> N;
    pair<int, int> p[100];
    for(int i = 0; i < N; i++)
    {
        cin >> p[i].X >> p[i].Y;
    }
    int min = INT_MAX;
    for(int i = 1; i < N - 1; i++)
    {
        int sum = 0;
        int pre = 0;
        for(int j = 1; j < N; j++)
        {
            if(i == j) continue;
            sum += abs(p[pre].X - p[j].X) 
                    + abs(p[pre].Y - p[j].Y);
            pre = j;
        }
        if(min > sum) min = sum;
    }
    cout << min;
    return 0;
}