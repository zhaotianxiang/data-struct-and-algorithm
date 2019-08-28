#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int input;
    vector<int> bits;

    while(cin >> input)
    {
        // 位操作， 与 4 和 与 1, 非与 1， 来判断低位是不是为 101
        int cnt = 29;

        int startPos = -1;
        int maskCnt = 0;

        while(cnt>=0) {
            // 判断低三位是否为 101
            int n = input>>cnt;
			cout << n << endl;
            if( (1&n) != 0 && (2&(~n)) != 0 && (4&n) != 0) {
                maskCnt++;
                startPos = cnt;
            }
            cnt--;
        }
        cout << maskCnt << " " << startPos;
    }
}
