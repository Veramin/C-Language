#include <stdio.h>

int main(int argc, char **argv) {
    // 用户输入的数字
    int x;
    // 记录用户输入数字的位数
    int n = 0;
    
    scanf("请输入数字%d", &x);
    
    n++;
    x /= 10;
    
    // 只有x<=0，才会跳出循环，打印数字位数
    while(x > 0) {
        n++;
        x /= 10;
    }
    
    printf("该数字为%d位数\n", n);
  
  return 0;
}
