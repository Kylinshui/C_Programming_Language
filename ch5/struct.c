/*************************************************************************
	> File Name: struct.c
	> Author: shuixianbing
	> Mail: shui6666@126.com 
	> Created Time: 2018年03月02日 星期五 15时23分28秒
 ************************************************************************/
#include <stdio.h>
#include <stdlib.h>
typedef struct{
		int i; // 4
		short sh;//2
		char c; //1 
		double d; //8

} s;

typedef struct{
	char a; //2
	short b; //2
	char d; //2
} t;
int main(){

	s s1;
	t t1;
	//对齐
	printf("t:%ld\n", sizeof(t1));
	//补齐
	printf("s:%ld\n",sizeof(s1));



	return 0;
}
