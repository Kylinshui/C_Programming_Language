/*************************************************************************
	> File Name: mystrlen.c
	> Author: shuixianbing
	> Mail: shui6666@126.com 
	> Created Time: 2018年03月01日 星期四 14时31分46秒
 ************************************************************************/
#include <stdio.h>
#include <string.h>
int main(){
	char s[] = "the weather is so good";
	int n = strlen(s);
	printf("len:%d\n",n);
	int l = mystrlen(s);


	printf("len:%d\n",l);
	return 0;
}

int mystrlen(char *s){
	int n=0;
	while(*s++!='\0'){
		n++;
	}

	return n;
}
