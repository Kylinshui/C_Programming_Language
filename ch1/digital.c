/*************************************************************************
	> File Name: digital.c
	> Author: shuixianbing
	> Mail: shui6666@126.com 
	> Created Time: 2018年02月28日 星期三 15时40分43秒
 ************************************************************************/
#include <stdio.h>
main(){
	int ndigit[10];
	int space,others;
	int i,c;
	for(i=0;i<10;i++)
	  ndigit[i]=0;

	while((c=getchar())!='\n'){
		if(c>='0'&& c<='9')
		  ndigit[c-'0']++;
	}
	for(i=0;i<10;i++)
	printf("%d %d次\n",i, ndigit[i]);
}
