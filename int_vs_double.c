#include <stdio.h>

int main(int argc, char **argv) {
    printf("请输入身高，"
          "如输入\"5 7\"表示5尺七寸 ");
    
    int foot;
    int inch;
    
    scanf("%d %d", &foot, &inch);
    
    printf("身高是%f米",
          ((foot + inch / 12.0) * 0.3048));
           
    return 0;
    
    // Other way
    // printf("请输入身高，"
   //       "如输入\"5 7\"表示5尺七寸 ");
    
    // double foot;
    // double inch;
    
    // scanf("%lf %lf", &foot, &inch);
    
    // printf("身高是%f米",
     //     ((foot + inch / 12) * 0.3048));
           
    // return 0;
    
    // Conslusion
    // 数据类型：整数、带小数点的数
    
    // 1. 整数：
    //          int
    //          print("%d", ...)
    //          scanf("%d", ...)
    
    // 2. 带小数点的数
    //          double
    //          print("%f", ...)
    //          scanf("%lf", ...)
    
    // 3. double: 双精度浮点数
    //    float: 单精度浮点数
}
