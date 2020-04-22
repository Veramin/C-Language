#include <stdio.h>

int main(int argc, char **argv) {
    // Q: 如何用1角、2角、5角的硬币凑出10元以下的金额
    
    // Case1: 输出所有满足情况的组合
    // // 记录用户输入金额的变量
    // int x;
    // // one:1角、two:2角、three:5角
    // int one, two, five;
    
    // printf("请输入你想拼凑的金额数，注意不超过10元哦\n");
    // scanf("%d", &x);
    
    // for(one = 1; one < x*10; one++) {
    //     for(two = 1; two < x*10 / 2; two++ ) {
    //         for(five = 1; five < x*10 / 5; five++) {
    //             if(one + two*2 + five*5 == x*10) {
    //                 printf("%d个1角+%d个2角+%d个5角=%d元\n", one, two, five, x);
    //             }
    //         }
    //     }
    // }
    
    // Case2: 只输出一种情况即可（break）
    // // 记录用户输入金额的变量
    // int x;
    // // one:1角、two:2角、three:5角
    // int one, two, five;
    // // 记录是否找到组合
    // int res = 0;
    
    // printf("请输入你想拼凑的金额数，注意不超过10元哦\n");
    // scanf("%d", &x);
    
    // for(one = 1; one < x*10; one++) {
    //     for(two = 1; two < x*10 / 2; two++ ) {
    //         for(five = 1; five < x*10 / 5; five++) {
    //             if(one + two*2 + five*5 == x*10) {
    //                 printf("%d个1角+%d个2角+%d个5角=%d元\n", one, two, five, x);
    //                 res = 1;
    //                 break;
    //             }
    //         }
    //         if(res) break;
    //     }
    //     if(res) break;
    // }
    
    // Case3: 只输出一种情况即可（goto out）
    // 记录用户输入金额的变量
    int x;
    // one:1角、two:2角、three:5角
    int one, two, five;
    
    printf("请输入你想拼凑的金额数，注意不超过10元哦\n");
    scanf("%d", &x);
    
    for(one = 1; one < x*10; one++) {
        for(two = 1; two < x*10 / 2; two++ ) {
            for(five = 1; five < x*10 / 5; five++) {
                if(one + two*2 + five*5 == x*10) {
                    printf("%d个1角+%d个2角+%d个5角=%d元\n", one, two, five, x);
                    goto out;
                }
            }
        }
    }
    out:
    
    return 0;
    
    // Conslusion
    // Q: 如何跳出多重循环?
    // M:
    //   1. break
    //      注意：如例题Case2(break)，break只能跳出当前那层循环，如果有多个循环的话，需要在外层定义一个flag，然后在第一次跳出循环的地方改变flag的值，在外层循环处判断flag知否满足跳出循环的条件，满足jiubreak...
    //   2. goto out
    //      注意： goto out是c语言提供的跳出多重循环的方法，使用时在需要跳出多重循环的地方写入'goto out;'，在跳到的位置写入'out:'即可，如例题Case2(goto out)。但是应用场景仅限此类，以免出现滥用无用goto out的情况。
}
