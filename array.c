#include <stdio.h>

int main(int argc, char **argv) {
    // Q: 输入数量不确定的[0, 9]范围内的整数，统计每一种数字出现的次数，输入-1表示结束
    
    // 规定数组长度（c99）
    const int number = 10;
    // 记录用户输入的数
    int x;
    // 定义数组
    int count[number];
    int i;
    
    // 初始化数组
    for(i=0; i<number; i++) {
        count[i] = 0;
    }
    
    scanf("%d", &x);
    
    //  数组操作
    while (x != -1) {
        if(x>=0 && x<=9) {
        // 如果输入的数字是有效的值
            count[x]++;
        }else {
            printf("输入数字无效，请输入[0, 9]范围内的整数，此次输入不做记录\n");
        }
        scanf("%d", &x);
    }
    
    // 输出结果
    for(i=0; i<number; i++) {
        printf("%d:%d\n", i, count[i]);
    }
    
    return 0;
}
