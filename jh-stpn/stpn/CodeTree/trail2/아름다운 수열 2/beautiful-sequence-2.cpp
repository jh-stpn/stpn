#include <iostream>
#define MAX 100
using namespace std;

int A[MAX + 1];
int B[MAX + 1];
bool vis[MAX + 1];

int main() {
    // Please write your code here.
    int N, M;
    cin >> N >> M;
    for(int i = 0; i < N; i++)
    {
        cin >> A[i];
    }
    for(int i = 0; i < M; i++)
    {
        cin >> B[i];
    }
    int answer = 0;
    for(int i = 0; i < N - M + 1; i++)
    {
        for(int j = 0; j < M; j++)
        {
            if(B[j] == A[i])
            {
                vis[j] = true;
                int loop = 1;
                int cnt = 1;
                while(loop < M)
                {
                    for(int k = 0; k < M; k++)
                    {
                        if(vis[k]) continue;
                        if(A[loop + i] == B[k])
                        {
                            vis[k] = true;
                            cnt++;
                            break;
                        }
                    }
                    loop++;
                }
                for(int k = 0; k < M; k++) vis[k] = false;
                if(cnt == M) answer++;
                break;
            }
        }
    }
    cout << answer;
    return 0;
}