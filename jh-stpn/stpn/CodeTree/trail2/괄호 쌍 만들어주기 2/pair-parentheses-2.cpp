#include <iostream>
#include <string>

using namespace std;

int main() {
    // Please write your code here.
    string A;
    cin >> A;
    int cnt = 0;
    for(int i = 0; i < (int)A.length() - 3; i++)
    {
        if(A[i] == A[i + 1] && A[i + 1] == '(')
        {
            for(int j = i + 2; j < (int)A.length() - 1; j++)
            {
                if(A[j] == A[j + 1] && A[j + 1] == ')')
                {
                    cnt++;
                }
            }
        }
    }
    cout << cnt;
    return 0;
}