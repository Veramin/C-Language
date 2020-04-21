#include <stdio.h>

int main(int argc, char **argv) {
    // Q: 整数逆序的数
    
    int x;
    int val;
    int digit;
    int res = 0;
    scanf("%d", &x);
    val = x;
    
    while( x > 0 ) {
        // 取出个位数给digit
        digit = x % 10;
        res = res * 10 + digit;
        printf("x=%d, digit=%d, res=%d\n", x, digit, res);
        
        // 删除掉末尾的一个数
        x /= 10;
    }
    
    printf("%d的逆序数是%d\n", val, res);
    
  return 0;
}
