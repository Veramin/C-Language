#include <stdio.h>

int main(int argc, char **argv) {
    // 用户输入的数字
    int x;
    // 记录用户输入数字的位数
    int n = 0;
    
    scanf("请输入数字%d", &x);
    
    // Way1: while实现 line11 - line18
    n++;
    x /= 10;
    // 只有x<=0，才会跳出循环，打印数字位数
    while(x > 0) {
        n++;
        x /= 10;
    }
    // Way2: do-while实现 ine19 - line24
    // do
    // {
    //     n++;
    //     x /= 10;
    // }while(x > 0);
    
    printf("该数字为%d位数\n", n);
    
    // conslusion
    // while：
    //        1. 先判断条件，再决定是否进入循环体；
    //        2. 有可能一次都不执行；
    // do-while：
    //        1. 先执行一次，再判断循环条件，看是否进入循环体；
    //        2. 至少执行一次；
  return 0;
}
