#include <stdio.h>

int main(int argc, char **argv) {
    // Q: 判断用户输入的数是否为素数
    // 素数 ？ 
    // 只能被1和自身整除的数为素数
    
    // 用于记录用户输入的数
    int x;
    int val;
    int i;
    int isPrime = 1; // 1 => 是素数；
                     // 0 => 不是素数；
    // 用户输入数字
    scanf("%d", &x);
    val = x;
    
    for (i = 2; i < x; i++) {
        if(x % i == 0) {
            isPrime = 0;
            break;
        }
    }
    
    //  做输出判断
    if (isPrime == 1) {
        printf("%d 是素数", val);
    } else {
      printf("%d不是素数", val);  
    }
    
  return 0;
}
