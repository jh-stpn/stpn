#include <iostream>
#include <climits>
#define MAX 1003
using namespace std;

int N;
int room[MAX + 1];

int main() {
    // Please write your code here.
    cin >> N;
    int people = 0;
    int min = INT_MAX;
    for(int i = 0; i < N; i++)
    {
        cin >> room[i];
    }
    for(int i = 0; i < N; i++)
    {
        int weight = 1;
        int dist = 0;
        for(int j = i + 1; j < i + N; j++)
        {
            dist += room[j % N] * weight++;
        }
        if(min > dist) min = dist;
    }
    cout << min;
    return 0;
}