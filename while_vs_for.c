#include <stdio.h>

int main(int argc, char **argv) {
    // Q: 输入一个整数，求其阶乘
    
    // Way 1: wihle实现
    // 记录用户输入的数字
    int n;
    
    // 输入值动作
    scanf("%d", &n);
    int fact = 1;
    
    int i = 1;
    while( i <= n) {
        fact *= i;
        i++;
    }
    
    printf("%d!=%d\n", n, fact);
    
    // Way 2: for实现(非C99、i++)
    // 记录用户输入的数字
    // int n;
    
    // // 输入值动作
    // scanf("%d", &n);
    // int fact = 1;
    
    // int i = 1;
    // for(i = 1; i <= n; i++) {
    //     fact *= i;
    // }
    
    // printf("%d!=%d\n", n, fact);
    
    // Way 3: for实现(C99、i++)
    // 记录用户输入的数字
    // int n;
    
    // // 输入值动作
    // scanf("%d", &n);
    // int fact = 1;
    
    // for(int i = 1; i <= n; i++) {
    //     fact *= i;
    // }
    
    // printf("%d!=%d\n", n, fact);
    
    // Way 4: for实现(i--)
    // 记录用户输入的数字
    // int n;
    
    // // 输入值动作
    // scanf("%d", &n);
    // int fact = 1;
    
    // int i = n;
    // // for 省略初始动作
    // for(; n > 1; n--) {
    //     fact *= n;
    // }
    
    // printf("%d!=%d\n", i, fact);
    
  return 0;
}
