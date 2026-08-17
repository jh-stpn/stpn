#include <iostream>
#include <string>
using namespace std;

int N;

int main() {
    // Please write your code here.
    cin >> N;
    string str;
    cin >> str;
    int cnt = 0;
    for(int i = 0; i < N; i++)
    {
        if(str[i] == 'C')
        {
            for(int j = i + 1; j < N; j++)
            {
                if(str[j] == 'O')
                {
                    for(int k = j + 1; k < N; k++)
                    {
                        if(str[k] == 'W')
                            cnt++;
                    }
                }
            }
        }
    }
    cout << cnt;
    return 0;
}