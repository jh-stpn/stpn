#include <iostream>
#define MAX 100
using namespace std;

int arr[MAX + 2];

int main() {
    // Please write your code here.
    int N;
    cin >> N;
    for(int i = 1; i <= N; i++)
    {
        cin >> arr[i];
    }
    int cnt = 0;
    for(int l = 1; l <= N; l++)
    {
        for(int r = l; r <= N; r++)
        {
            
            double avg = 0;
            for(int k = l; k <= r; k++)
            {
                avg += (double)arr[k];
            }
            avg /= (double)(r - l + 1);
            for(int k = l; k <= r; k++)
            {
               
                if((double)arr[k] == avg)
                {
                    cnt++;
                    break;
                }
            }
        }
    }
    cout << cnt;
    return 0;
}