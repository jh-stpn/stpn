#include <iostream>
using namespace std;

int N, x, y;
int dx[4] = { -1, 1, 0, 0 };
            //W, E, N, S
int dy[4] = { 0, 0, 1, -1 };

int main() {
    // Please write your code here.
    cin >> N;
    char dir;
    int dist;
    for(int i = 0; i < N; i++)
    {
        cin >> dir >> dist;
        for(int j = 0; j < dist; j++)
        {
            switch(dir)
            {
                case 'W':
                    //cout << "W" << endl;
                    x += dx[0];
                    break;
                case 'E':
                    //cout << "E" << endl;
                    x += dx[1];
                    break;
                case 'N':
                    //cout << "N" << endl;
                    y += dy[2];
                    break;
                case 'S':
                    //cout << "S" << endl;
                    y += dy[3];
                    break;
                default:
                    break;
            }
        }
    }
    cout << x << " " << y;
    return 0;
}