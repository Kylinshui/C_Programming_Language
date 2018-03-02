/*************************************************************************
	> File Name: student.c
	> Author: shuixianbing
	> Mail: shui6666@126.com 
	> Created Time: 2018年03月02日 星期五 15时02分50秒
 ************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct{
	int id;
	char name[20];
	char sex;
	int age;
} student;
void show_info(student *s);
int main(){
	
	student *s = (student *)malloc(sizeof(student));
	
	s->id = 1;
	strcpy(s->name, "bshui");
	s->sex = 'M';
	s->age = 18;

	show_info(s);

	return 0;
}

void show_info(student *s){
	
	printf("id:%d name:%s sex:%c age:%d\n",s->id,
				s->name, s->sex, s->age);
}
