/*************************************************************************
	> File Name: strcat.c
	> Author: shuixianbing
	> Mail: shui6666@126.com 
	> Created Time: 2018年03月01日 星期四 15时40分48秒
 ************************************************************************/
#include <stdio.h>
char *mystrcat(char *s,char *t);

int main(){
	char a[100] = "hello ";
	char *b = "world";

	char *p = mystrcat(a,b);
	printf("p:%s\n",p);

	return 0;
}
//add string t to s
char *mystrcat(char *s,char *t){
	char *p = s;
	while(*s++!='\0')
	  ;
	s--;
	while(*s++=*t++)
	  ;

	return p;
}
