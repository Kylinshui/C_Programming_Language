/*************************************************************************
	> File Name: strcpy.c
	> Author: shuixianbing
	> Mail: shui6666@126.com 
	> Created Time: 2018年03月01日 星期四 14时59分44秒
 ************************************************************************/
#include <stdio.h>
void mystrcpy(char *s, char *t);

int main(){
	char s[20]="";
	char *t = "hello world";
	mystrcpy(s,t);
	printf("s:%s\n",s);


	return 0;
}
//copy t to s
void mystrcpy(char *s, char *t){
	while(*s++=*t++)
	  ;
}
