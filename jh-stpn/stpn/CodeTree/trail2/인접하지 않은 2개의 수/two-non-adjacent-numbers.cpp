#include <iostream>
#define MAX 100
using namespace std;

int arr[MAX + 1];

int main() {
    // Please write your code here.
    int N;
    cin >> N;
    int max = -1;
    for(int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }
    for(int i = 0; i < N; i++)
    {
        for(int j = i + 2; j < N; j++)
        {
            if(arr[i] + arr[j] > max) max = arr[i] + arr[j];
        }
    }
    cout << max;
    return 0;
}