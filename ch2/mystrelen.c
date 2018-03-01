/*************************************************************************
	> File Name: strelen.c
	> Author: shuixianbing
	> Mail: shui6666@126.com 
	> Created Time: 2018年03月01日 星期四 09时10分26秒
 ************************************************************************/
#include <stdio.h>
#include <string.h>
int main(){
	char name[] = "shui xian bing";

	int l = mystrlen(name);
	printf("len:%d\n", l);
	

	return 0;
}
int mystrlen(char s[]){
	int len=0;
	while(s[++len]!='\0')
	  ;
	return len;
	
}
