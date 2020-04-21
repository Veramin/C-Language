#include <stdio.h>

int main(int argc, char **argv) {
    // Q: 求平均数(非负数)
    
    // Way 1: while
    // 记录用户输入的数字
    int n;
    // 和
    int sum = 0;
    // 次数
    int x = 0;
    
    scanf("%d", &n);
    while( n > -1 ) {
        sum += n;
        x++;
        scanf("%d", &n);
    }
    
    printf("平均数是%f\n", 1.0 * sum / x);
    
    // Way 2: do-while
    // 记录用户输入的数字
    // int n;
    // // 和
    // int sum = 0;
    // // 次数
    // int x = 0;
    

    // do {
    //     scanf("%d", &n);
    //     if( n > -1 ) {
    //         sum += n;
    //         x++;  
    //     }
    // }while ( n > -1  );
    
    // printf("平均数是%f\n", 1.0 * sum / x);
    
    // Conclusion
    // 此处while要比do-while好，后续要判断两次相同的条件

    
  return 0;
}
