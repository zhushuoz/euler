/*************************************************************************
	> File Name: 6-2.c
	> Author: zhushuo
	> Mail: 
	> Created Time: 2018年07月22日 星期日 20时26分25秒
 ************************************************************************/

#include <stdio.h>
int main() {
    int sum1 = 5050;
    int sum2 = (2 * 100 * 100 *100 + 3 * (1 + 100) * 100 - 2 * 100) / 6;
    printf("%d\n", sum1 * sum1 -sum2); 
    return 0;
}
