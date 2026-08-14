#include <iostream>
#include <vector>
#define MAX 15
#define X first
#define Y second
using namespace std;

char arr[MAX][MAX];
int cnt;

int main() {
    // Please write your code here.
    int R, C;
    cin >> R >> C;
    for(int i = 0; i < R; i++)
        for(int j = 0; j < C; j++)
            cin >> arr[i][j];
    pair<int, int> j1;
    pair<int, int> j2;
    for(j1.Y = 1; j1.Y < R - 2; j1.Y++)
    {
        for(j1.X = 1; j1.X < C - 2; j1.X++)
        {
            if(arr[0][0] != arr[j1.Y][j1.X])
            {
                for(j2.Y = j1.Y + 1; j2.Y < R - 1; j2.Y++)
                {
                    for(j2.X = j1.X + 1; j2.X < C - 1; j2.X++)
                    {
                        if(arr[j1.Y][j1.X] != arr[j2.Y][j2.X] 
                                && arr[j2.Y][j2.X] != arr[R-1][C-1])
                        {
                            cnt++;
                        }
                    }
                }
            }
        }
    }
    cout << cnt;
    return 0;
}