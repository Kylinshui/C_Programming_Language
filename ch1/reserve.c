/*************************************************************************
	> File Name: reserve.c
	> Author: shuixianbing
	> Mail: shui6666@126.com 
	> Created Time: 2018年02月28日 星期三 16时31分33秒
 ************************************************************************/
#include <stdio.h>
main(){
	char s[] = "my name is bshui";
	reserve(s);
	printf("%s\n",s);

}

int reserve(char s[]){
	int i,j;
	char temp;
	i=0;
	while(s[i]!='\0')
	  ++i;//find the end of string

	--i;//back off from '\0'
	j=0;
	while(j<i){
		temp = s[j];
		s[j] = s[i];
		s[i] = temp;
		--i;
		++j;
	}

	return 0;
}
