/*************************************************************************
	> File Name: year.c
	> Author: shuixianbing
	> Mail: shui6666@126.com 
	> Created Time: 2018年03月01日 星期四 09时38分21秒
 ************************************************************************/
#include <stdio.h>
#include <math.h>
int main(){
	int is = years(2017);
	printf("is:%d\n",is);
	return 0;
}

/**
 *返回值１为闰年,０不是闰年
 */
int years(int year){

	if((year%4==0) && (year%100!=0)|| (year%400==0))
	  return 1;
	else 
	  return 0;

}
