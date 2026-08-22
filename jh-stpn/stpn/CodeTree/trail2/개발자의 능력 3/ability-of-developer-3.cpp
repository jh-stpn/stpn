#include <iostream>
#include <climits>
#include <cstdlib>
using namespace std;

int main() {
    // Please write your code here.
    int a[6];
    int sum = 0;
    for(int i = 0; i < 6; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    int min = INT_MAX;
    for(int i = 0; i < 6; i++)
    {
        for(int j = i + 1; j < 6; j++)
        {
            for(int k = j + 1; k < 6; k++)
            {
                if(abs(2*(a[i]+a[j]+a[k]) - sum) < min)
                    min = abs(2*(a[i]+a[j]+a[k]) - sum);   
            }
        }
    }
    cout << min;
    return 0;
}