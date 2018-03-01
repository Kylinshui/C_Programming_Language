/*************************************************************************
	> File Name: trim.c
	> Author: shuixianbing
	> Mail: shui6666@126.com 
	> Created Time: 2018年03月01日 星期四 11时09分11秒
 ************************************************************************/
#include <stdio.h>
#include <string.h>
int main(){
	char s[] = "hello i like computer   \n";
	int n=trim(s);
	printf("n:%d s:%s\n",n,s);
	return 0;
}

int trim(char s[]){
	int n;
	for(n=strlen(s)-1;n>=0;n--)
		if(s[n]!=' ' && s[n]!='\t' && s[n]!='\n')
		  break;
		
	s[n+1]='\0';

	return n;
}
