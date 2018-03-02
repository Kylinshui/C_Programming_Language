/*************************************************************************
	> File Name: point.c
	> Author: shuixianbing
	> Mail: shui6666@126.com 
	> Created Time: 2018年03月02日 星期五 11时24分54秒
 ************************************************************************/
#include <stdio.h>
int *test(int n);

int main(){
	int i =10;
	int *p;
	p = &i;
	printf("addr: &i=%p p=%p\n",&i, p);
	printf("value: i=%d *p=%d\n",i, *p);

	p = test(15);
	printf("p:%d\n",*p);

	return 0;
}

int *test(int n){
	int *p = &n;

	return p;
}
