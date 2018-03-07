/*************************************************************************
	> File Name: change.c
	> Author: shuixianbing
	> Mail: shui6666@126.com 
	> Created Time: 2018年03月06日 星期二 09时40分13秒
 ************************************************************************/
/*把一个整型数组的第n位之前的数倒序*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void recover(int *a, int n);
int main(){
	int a[] = {1, 3, 4, 6, 10, 45};
	int i;
	recover(a, 6);
	for(i=0; i<sizeof(a)/sizeof(int);i++)
	  printf("%d ", a[i]);

	puts("\n");

	return 0;
}

void recover(int *a, int n){
	int *p,*q;
	int t;
	p = &a[0];
	q = &a[n-1];
	while(p < q){
		t = *p;
		*p = *q;
		*q = t;
		p++;
		q--;
	}




}
