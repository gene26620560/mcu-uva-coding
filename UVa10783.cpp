// UVa10783
// CPE #19
// MCU #02

#include <iostream>
using namespace std;

int main()
{
int nCaseCount, nCase; // 測資筆數
int nStart, nEnd; // 範圍
int nSum; // 計算總和
int number; // 目前的數字

// 讀入測資筆數
cin >> nCaseCount;
for (nCase = 1; nCase <= nCaseCount; nCase++)
    {
    // 初始化（歸零）
    nSum = 0;

    // 讀入測資範圍
    cin >> nStart >> nEnd;

    // 起始值為 nStart 若不是奇數則會 + 1
    for (number = nStart + 1 - (nStart % 2); number <= nEnd; number += 2)
        {
        nSum += number;
        }

    // 輸出答案
    cout << "Case " << nCase << ": " << nSum << endl;
    }
}
