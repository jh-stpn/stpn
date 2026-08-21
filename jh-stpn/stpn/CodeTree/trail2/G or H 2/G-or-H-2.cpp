#include <iostream>
#include <algorithm>
#define MAX 101
using namespace std;

char arr[MAX + 2];
int human[MAX + 2];

bool Judge(int _g, int _h)
{
    if(_g > 0 && _h == 0) return true;
    else if(_g == 0 && _h > 0) return true;
    else if(_g != 0 && _g == _h) return true;
    else return false;
}

int main() {
    // Please write your code here.
    int N;
    cin >> N;
    for(int i = 0; i < N; i++)
    {
        int p;
        char alpha;
        cin >> p >> alpha;
        arr[p] = alpha;
        human[i] = p;
    }
    sort(human, human + N);
    int size = 0;
    for(int i = 0; i < N; i++)
    {
        //cout << human[i] << endl;
    }
    for(int i = 0; i < N; i++)
    {
        for(int j = i; j < N; j++)
        {
            int g = 0;
            int h = 0;
            for(int k = human[i]; k <= human[j]; k++)
            {
                if(arr[k] == 'G') g++;
                else if(arr[k] == 'H') h++;
            }
            if(Judge(g, h) && (human[j] - human[i]) > size)
            {
                size = human[j] - human[i];
            }
        }
    }
    cout << size;
    return 0;
}