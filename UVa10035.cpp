// UVa10035
// CPE #03
// MCU #11

#include <iostream>
using namespace std;

int main()
{
int numberA, numberB; // 題目的兩個數字
int nOperation; // 存放答案
int prevCalc; // 上一個計算結果

// 對每一筆資料輸入
while (cin >> numberA >> numberB)
    {
    // 判斷是不是最後一筆
    if (numberA == 0 && numberB == 0) break;

    // 初始化（歸零）
    nOperation = 0;
    prevCalc = 0;

    // 計算 Operation 數量
    while (numberA > 0 || numberB > 0)
        {
        prevCalc = ((numberA % 10) + (numberB % 10) + prevCalc) / 10;
        nOperation += prevCalc;
        numberA /= 10;
        numberB /= 10;
        }

    // 輸出答案
    if (nOperation > 0)
        {
        if (nOperation == 1)
            {
            cout << "1 carry operation." << endl;
            }
        else
            {
            cout << nOperation << " carry operations." << endl;
            }
        }
    else
        {
        cout << "No carry operation." << endl;
        }
    }
}
