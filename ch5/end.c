/*************************************************************************
	> File Name: end.c
	> Author: shuixianbing
	> Mail: shui6666@126.com 
	> Created Time: 2018年03月02日 星期五 15时46分55秒
 ************************************************************************/
#include <stdio.h>
int main(){
	
	union{
		int i;
		char c;
	}u;
	
	u.i = 1;
	if(u.c==1)
	  printf("little end\n");
	else
	  printf("big end\n");

	return 0;
}
