#include <iostream>
#define MAX 10000
using namespace std;

int arr[MAX + 2];

int main() {
    // Please write your code here.
    int N, K;
    cin >> N >> K;
    for(int i = 0; i < N; i++)
    {
        int p;
        char score;
        cin >> p >> score;
        if(score == 'G')
        {
            arr[p - 1] = 1;
        }
        else if(score == 'H')
        {
            arr[p - 1] = 2;
        }
    }
    int max = 0;
    for(int i = 0; i < MAX - K + 1; i++)
    {
        int sum = 0;
        for(int j = i; j <= i + K; j++)
        {
            sum += arr[j];
        }
        if(max < sum) max = sum;
    }
    cout << max;
    return 0;
}