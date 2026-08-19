#include <iostream>
#define MAX 100
using namespace std;

int arr[MAX + 1];

int main() {
    // Please write your code here.
    int N, K;
    cin >> N >> K;
    for(int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }
    int max = 0;
    for(int i = 0; i < N - K + 1; i++)
    {
        int sum = 0;
        for(int j = i; j < i + K; j++)
        {
            sum += arr[j];
        }
        if(sum > max) max = sum;
    }
    cout << max;
    return 0;
}