/*************************************************************************
	> File Name: 28-1.c
	> Author: zhushuo
	> Mail: 
	> Created Time: 2018年07月22日 星期日 21时02分00秒
 ************************************************************************/

#include <stdio.h>

int main() {
    int ans = 1;
    for (int i = 1, j = 1; i < 1001 ; i+=2){
        for (int k = 1; k <= 4 && (j += (i + 1)); k++){
            ans += j;
        }
    }
    printf("%d\n", ans);
}
