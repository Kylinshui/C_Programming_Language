/*************************************************************************
	> File Name: hello.c
	> Author: shuixianbing
	> Mail: shui6666@126.com 
	> Created Time: 2018年02月28日 星期三 11时47分51秒
 ************************************************************************/
#include <stdio.h>
#include <math.h>
main(){
	float f,c;
	for(c=-20;c<=100;c=c+1){
		f = c*(9.0/5.0)+32;

	printf("%3.1f\t %6.0f\n", c, f);
	}
}
