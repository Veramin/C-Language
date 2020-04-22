#include <stdio.h>

int main(int argc, char **argv) {
    // Q: 输入两个数a和b，输出他们的最大公约数「Greatest Common Divisor(GCD)」
    // 例如： 输入12和18
    //        输出6
    
    // 存放a、b
    int a, b;
    // 存放a%b
    int x;
    
    scanf("%d %d", &a, &b);
    
    while( b != 0 ) {
        x = a%b;
        a = b;
        b = x;
    }
    
    printf("gcd=%d", a);
    
    // Analysis:
    // 利用辗转相除法
    // 1. 如果b等于0，计算结束，a就是最大公约数；
    // 2. 否则，计算a除以b的余数，让a等于b，b等于a%b;
    // 3. 回到第一步。
    
    // 以a=12, b=18为例， t为余数
    // a        b       t
    // 12       18      12
    // 18       12      6
    // 12       6       0
    // 6        0
    
    // 结论：当b=0时，a=6为最大公约数

    return 0;
}
