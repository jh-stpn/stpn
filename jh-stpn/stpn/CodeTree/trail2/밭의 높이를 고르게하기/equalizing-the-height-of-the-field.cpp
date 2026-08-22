#include <iostream>
#include <climits>
#define MAX 100
using namespace std;

int N, H, T;
int arr[MAX + 1];

int main() {
    // Please write your code here.
    cin >> N >> H >> T;
    int min = INT_MAX;
    for(int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }
    for(int i = 0; i < N - T + 1; i++)
    {
        int cost = 0;
        for(int j = i; j < i + T; j++)
        {
            int temp = arr[j];
            while(temp != H)
            {

                if(temp < H)
                {
                    temp++;
                    cost++;
                }
                else
                {
                    temp--;
                    cost++;
                }
            }
        }
        if(cost < min) min = cost;
    }
    cout << min;
    return 0;
}