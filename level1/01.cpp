// UVa10055

#include <iostream>
using namespace std;

int main()
{
long long int nHashmat, nOpponent; // 存兵力，題目說可能到 2^32 故要注意型態
while (cin >> nHashmat >> nOpponent) // 資料輸入
    {
    cout << abs(nHashmat - nOpponent) << endl; // 輸出兩兵力差
    }
}
