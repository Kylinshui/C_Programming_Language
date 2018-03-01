/*************************************************************************
	> File Name: swap.c
	> Author: shuixianbing
	> Mail: shui6666@126.com 
	> Created Time: 2018年03月01日 星期四 14时19分31秒
 ************************************************************************/
#include <stdio.h>
void swap(int *x, int *y);

int main(){

	int a=6,b=9;
	swap(&a,&b);
	printf("a:%d b:%d\n",a,b);
	return 0;
}

void swap(int *x, int *y){
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;

}
