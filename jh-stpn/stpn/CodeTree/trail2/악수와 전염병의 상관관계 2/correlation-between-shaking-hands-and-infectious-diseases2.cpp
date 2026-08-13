#include <iostream>
#include <algorithm>
using namespace std;

class Info
{
public:
    int t, x, y;
    Info(int t = 0, int x = 0, int y = 0)
    {
        this->t = t;
        this->x = x;
        this->y = y;
    }
};

class Dev
{
public:
    int k;
    bool sick;
    Dev(int k = 0, bool sick = false)
    {
        this->k = k;
        this->sick = sick;
    }
};

bool comp(Info i1, Info i2)
{
    if(i1.t < i2.t) return true;
    else return false;
}

Info info[251];
Dev dev[102];

int main() {
    // Please write your code here.
    int N, K, P, T;
    cin >> N >> K >> P >> T;
    for(int i = 0; i < T; i++)
    {
        int t, x, y;
        cin >> t >> x >> y;
        info[i] = Info(t, x, y);
    }
    sort(info, info + T, comp);
    dev[P].k = K;
    dev[P].sick = true;
    for(int i = 0; i < T; i++)
    {
        if(dev[info[i].x].sick && dev[info[i].x].k > 0)
        {  
            dev[info[i].x].k--;
            if(dev[info[i].y].sick)
            {
                if(dev[info[i].y].k > 0) dev[info[i].y].k--;
            }
            else
            {
                dev[info[i].y].sick = true;
                dev[info[i].y].k = K;
            }
        }
        else if(dev[info[i].y].sick && dev[info[i].y].k > 0) 
        {
            dev[info[i].y].k--;
            dev[info[i].x].k = K;
            dev[info[i].x].sick = true;
        }
    }
    for(int i = 1; i <= N; i++)
    {
        if(dev[i].sick) cout << 1;
        else cout << 0;
    }
    return 0;
}
