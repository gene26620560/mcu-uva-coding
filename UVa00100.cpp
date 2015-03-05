// UVa00100
// CPE #04
// MCU #08

#include <iostream>
using namespace std;

// 計算 3n + 1 的長度
int calcLength(int number)
{
int length = 1; // 長度
while (number > 1)
    {
    // 依題意計算
    if (number % 2 == 0) number /= 2;
    else number = number * 3 + 1;

    // 長度 +1
    length++;
    }
return length;
}

int main()
{
int i, j; // 題目的 i ~ j 區間
int maxLength; // 最大長度
int currentNumber; // 目前數字
int length; // 計算後的長度

// 輸入區間範圍
while (cin >> i >> j)
    {
    // 最大長度初始化（歸零）
    maxLength = 0;

    // 在區間內計算各個長度
    for (currentNumber = min(i, j); currentNumber <= max(i, j); currentNumber++)
        {
        // 計算長度
        length = calcLength(currentNumber);

        // 判斷是否比較大，是就留起來
        if (length > maxLength) maxLength = length;
        }
    // 輸出答案
    cout << i << " " << j << " " << maxLength << endl;
    }
}
