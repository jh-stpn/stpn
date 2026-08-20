#include <iostream>
#define MAX 500
#define OFFSET 200
using namespace std;

int arr[MAX + 1];

int main() {
    // Please write your code here.
    int N, K;
    cin >> N >> K;
    int max_idx = 0;
    for(int i = 0; i < N; i++)
    {
        int p, candy;
        cin >> candy >> p;
        arr[p + OFFSET] += candy;
        if(max_idx < p) max_idx = p;
    }
    int max = 0;
    for(int i = OFFSET; i < OFFSET + max_idx; i++)
    {
        int sum = 0;
        for(int j = i - K; j <= i + K; j++)
        {
            sum += arr[j];
        }
        if(sum > max) max = sum;
    }
    cout << max;
    return 0;
}