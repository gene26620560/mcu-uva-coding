// UVa10041
// CPE #01
// MCU #25

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
int iTestCase; // 測試資料數量
int iCount; // 門牌數量
vector<int> vNumber; // 建立向量儲存門牌號碼
vector<int> vDistance; // 建立向量儲存距離

// 輸入測試資料數量
cin >> iTestCase;

// 針對每筆測試資料作處理
while (iTestCase--)
    {
    cin >> iCount; // 輸入門牌數量

    // 開空間來放門牌號碼以及距離
    vNumber.resize(iCount);
    vDistance.resize(iCount);

    // 輸入所有門牌
    for (int i = 0; i < iCount; ++i)
        {
        cin >> vNumber[i];
        }

    // 計算門牌距離
    for (int i = 0; i < iCount; ++i)
        {
        vDistance[i] = 0; // 初始化距離
        for (int j = 0; j < iCount; ++j) // 計算距離累加
            {
            vDistance[i] += abs(vNumber[i] - vNumber[j]);
            }
        }

    // 輸出答案，最小的距離總和
    cout << *min_element(vDistance.begin(), vDistance.end()) << endl;
    }
}
