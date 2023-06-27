Lab#define _CRT_SECURE_NO_WARNINGS 0

#include <stdio.h>

int main() {
	struct student
	{
		char name[100];
		char major_class[100];
		char student_id[100];
		char phone_number[100];
		float grade;
	};
	struct student student;
	scanf("%s",&student.name);
	scanf("%s", &student.major_class);
	scanf("%s", &student.student_id);
	scanf("%s", &student.phone_number);
	scanf("%f", &student.grade);

	printf("姓名：%s\n", student.name);
	printf("专业班级：%s\n", student.major_class);
	printf("学号：%s\n", student.student_id);
	printf("手机号：%s\n", student.phone_number);
	printf("C语言实验成绩：%lf\n", student.grade);
	return 0;
}
