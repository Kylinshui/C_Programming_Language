/*************************************************************************
	> File Name: length.c
	> Author: shuixianbing
	> Mail: shui6666@126.com 
	> Created Time: 2018年02月28日 星期三 17时21分39秒
 ************************************************************************/
#include <stdio.h>
#include <limits.h>
int main(){

	printf("singed char %d 到%d\n",SCHAR_MIN, SCHAR_MAX);
	printf("singed short %d 到%d\n",SHRT_MIN, SHRT_MAX);
	printf("singed int %d 到%d\n",INT_MIN, INT_MAX);
	printf("singed long %ld 到%ld\n",LONG_MIN, LONG_MAX);

	printf("unsigned char max:%u\n",UCHAR_MAX);
	printf("unsigned short max:%u\n",USHRT_MAX);
	printf("unsigned int max:%u\n",UINT_MAX);
	printf("unsigned long max:%lu\n",ULONG_MAX);

	return 0;
}
