/*************************************************************************
	> File Name: delete.c
	> Author: shuixianbing
	> Mail: shui6666@126.com 
	> Created Time: 2018年03月01日 星期四 10时19分39秒
 ************************************************************************/
#include <stdio.h>
void squeeze(char s[], int c);

int main(){
	char s[] = "hello today is a good day";

	squeeze(s, 'o');
	printf("s:%s\n",s);

	return 0;
}

void squeeze(char s[], int c){

	int i,j=0;
	for(i=0;s[i]!='\0';i++){
		if(s[i]!=c)
		  s[j++] = s[i];
	}
	s[j] = '\0';
}
