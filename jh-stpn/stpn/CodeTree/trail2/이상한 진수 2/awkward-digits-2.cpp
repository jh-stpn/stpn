#include <iostream>
#include <string>
using namespace std;

int main() {
    // Please write your code here.
    string a;
    cin >> a;
    int max = -1;
    for(int i = 0; i < a.length(); i++)
    {
        string temp = a;
        if(temp[i] == '0') temp[i] = '1';
        else temp[i] = '0';
        int baesu = 1;
        int sum = 0;
        for(int j = temp.length() - 1; j >= 0; j--)
        {
            sum += baesu * (temp[j] - 48);
            baesu *= 2;
        }
        if(sum > max) max = sum;
    }
    cout << max;
    return 0;
}