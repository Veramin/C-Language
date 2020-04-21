#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char **argv) {
    // Q: 生成区间[1, 100]随机数
    
    srand(time(0));
    int a = rand()%100 + 1;
    
    printf("%d\n", a);

    
  return 0;
}
