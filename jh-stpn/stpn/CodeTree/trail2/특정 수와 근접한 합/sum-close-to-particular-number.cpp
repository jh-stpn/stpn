#include <iostream>
#include <climits>
#include <cstdlib>
#define MAX 100
using namespace std;

int arr[MAX + 1];

int main() {
    // Please write your code here.
    int S, N;
    cin >> N >> S;
    for(int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }
    int sum = 0;
    int min = INT_MAX;
    for(int i = 0; i < N; i++)
    {
        for(int j = i + 1; j < N; j++)
        {
            sum = 0;
            for(int k = 0; k < N; k++)
            {
                if(k == i || k == j) continue;
                sum += arr[k];
            }
            if(abs(S - sum) < min) min = abs(S - sum);
        }
    }
    cout << min;
    return 0;
}