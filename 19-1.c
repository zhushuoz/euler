/*************************************************************************
	> File Name: 19-1.c
	> Author: zhushuo
	> Mail: 
	> Created Time: 2018年08月06日 星期一 18时47分14秒
 ************************************************************************/

#include <stdio.h>

int days[13] ={
    0, 31, 28, 31, 30, 
    31, 30, 31, 31, 30,
    31, 30, 31
};

int is_year(int y) {//判断是否为闰年

    return (y % 4 && !(y % 100)) || y % 400;
}




int main() {
    int y = 1900, m = 1, d = 1, w = 1, ans = 0; 
    do {
        d += 1;
        m += (d > (days[m] + (m == 2 && is_year(y))) && (d = 1));//当d大于day[m]的时候 m+=1 && d=1;
        y += (m > 12 && (m = 1));//当m > 13时 y+=1;
        w = (w + 1) % 7;//w代表星期几
        if (y > 1900 && d == 1 && w == 0) ans++;
    }while(y != 2001);
    printf("%d\n", ans);


    return 0;
}
