#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class Su
{
public:
    int val, move, id;
    Su(int v = 0, int m = 0, int i = 0)
    {
        this->val = v;
        this->move = m;
        this->id = i;
    }
    void Print()
    {
        cout << move << " ";
    }
};

bool comp_val(Su s1, Su s2)
{
    if(s1.val == s2.val)
    {
        return s1.id < s2.id;
    }
    return s1.val < s2.val;
}

bool comp_id(Su s1, Su s2)
{
    return s1.id < s2.id;
}

int main() {
    // Please write your code here.
    int N;
    cin >> N;
    Su arr[1001];
    for(int i = 0; i < N; i++)
    {
        int temp;
        cin >> temp;
        arr[i] = Su(temp, 0, i + 1);
    }
    sort(arr, arr + N, comp_val);
    for(int i = 0; i < N; i++)
        arr[i].move = i + 1;
    sort(arr, arr + N, comp_id);
    for(int i = 0; i < N; i++)
        arr[i].Print();
    return 0;
}