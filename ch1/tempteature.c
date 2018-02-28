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
	for(f=0;f<=300;f=f+20){
		c = (5.0/9.0)*(f-32.0);

	printf("%3.0f\t %6.1f\n", f, c);
	}
}
