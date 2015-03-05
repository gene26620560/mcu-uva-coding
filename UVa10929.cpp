// UVa10929
// CPE #05
// MCU #13

#include <iostream>
#include <string>
using namespace std;

int main()
{
string strNumber; // 測試資料的數字以字串形式儲存
int calcEleven; // 用於算 11 的倍數的暫存整數
int i; // 給 strNumber 遊歷的索引值變數

// 讀入數字
while (cin >> strNumber)
    {
    // 判斷輸入是 0 就結束
    if (strNumber == "0") break;

    // 初始化（歸零）
    calcEleven = 0;

    // 先算奇數位數加總（正）
    for (i = 0; i < strNumber.length(); i += 2)
        calcEleven += strNumber[i] - '0';
    // 再算偶數位數加總（負）
    for (i = 1; i < strNumber.length(); i += 2)
        calcEleven -= strNumber[i] - '0';

    // 輸出答案，若算出來的數字可以被 11 整除即可
    if (calcEleven % 11 == 0)
        cout << strNumber << " is a multiple of 11." << endl;
    else
        cout << strNumber << " is not a multiple of 11." << endl;
    }

}
