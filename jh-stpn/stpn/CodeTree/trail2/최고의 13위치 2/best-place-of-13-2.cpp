#include <iostream>
#define MAX 20
using namespace std;

int arr[MAX][MAX];
bool vis[MAX][MAX];

int main() {
    // Please write your code here.
    int N;
    cin >> N;
    int cnt = 0;
    int max = 0;
    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < N; j++)
        {
            cin >> arr[i][j];
        }
    }
    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < N - 2; j++)
        {
            cnt = 0;
            for(int k = j; k < j + 3; k++)
            {
                vis[i][k] = true;
                if(arr[i][k]) 
                {
                    cnt++;
                }
            }
            for(int l = i; l < N; l++)
            {
                for(int m = 0; m < N - 2; m++)
                {
                    int temp = 0;
                    if(vis[l][m]) continue;
                    for(int n = m; n < m + 3; n++)
                    {
                        if(arr[l][n]) 
                        {
                            temp++;
                        }
                    }
                    if(max < cnt + temp) 
                    {
                        max = cnt + temp;
                    }
                }
            }
        }
    }
    cout << max;
    return 0;
}