/*************************************************************************
	> File Name: chars.c
	> Author: shuixianbing
	> Mail: shui6666@126.com 
	> Created Time: 2018年02月28日 星期三 14时09分19秒
 ************************************************************************/
#include <stdio.h>
main(){
	int c,pc=EOF;
	while((c=getchar())!=EOF){
		if(c==' ')
			if(pc!=' ')
				putchar(c);  
		if(c!=' ')
		  putchar(c);
		pc = c;
	}
}
