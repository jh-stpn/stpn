#include <iostream>
#include <string>
#define MAX 50
using namespace std;

int N, M;
int dx[8] = { 0, 1, 1, 1, 0, -1, -1, -1 };
    //Up, Up+Right, Right, Down+Right, Down, Down+Left, Left, Up+Left
int dy[8] = { -1, -1, 0, 1, 1, 1, 0, -1 };


string arr[MAX];

int LEE(int _x, int _y)
{
    int cnt = 0;
    for(int i = 0; i < 8; i++)
    {
        int nx = _x + dx[i];
        int ny = _y + dy[i];
        if(nx < 0 || ny < 0 || nx >= MAX || ny >= MAX) continue;
        if(arr[ny][nx] == 'E')
        {
            nx += dx[i];
            ny += dy[i];
            if(nx < 0 || ny < 0 || nx >= MAX || ny >= MAX) continue;
            if(arr[ny][nx] == 'E') cnt++;
        }
    }
    return cnt;
}

int main() {
    // Please write your code here.
    cin >> N >> M;
    for(int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }
    int answer = 0;
    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < M; j++)
        {
            if(arr[i][j] == 'L')
            {
                answer += LEE(j, i);
            }
        }
    }
    cout << answer;
    return 0;
}