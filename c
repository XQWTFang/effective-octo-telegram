#include <stdio.h>

int main() {
    // 定義變數
    double num1, num2, result;
    char operator;

    // 輸入兩個數字和運算符號
    printf("請輸入第一個數字: ");
    scanf("%lf", &num1);

    printf("請輸入運算符號 (+, -, *, /): ");
    scanf(" %c", &operator);  // 注意這裡有一個空格，避免吸收前一次輸入的換行符號

    printf("請輸入第二個數字: ");
    scanf("%lf", &num2);

    // 進行四則運算
    switch(operator) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if(num2 != 0) {
                result = num1 / num2;
            } else {
                printf("錯誤：除數不能為零\n");
                return 1;  // 返回非零表示程序異常結束
            }
            break;
        default:
            printf("錯誤：無效的運算符號\n");
            return 1;  // 返回非零表示程序異常結束
    }

    // 輸出結果
    printf("結果: %.2f\n", result);

    return 0;  // 返回零表示程序正常結束
}
