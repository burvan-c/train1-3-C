#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//�ṹ�������c���Դ����µ�����
//����һ��ѧ��
struct stu
{
	char name[10];
	int age;
	double score;
};
//����һ���������
struct book
{
	char name[10];
	float price;
	char id[30];
};
int main()
{
	struct stu s = { "����",20,85 };//�ṹ��Ĵ������ʼ��
	printf("1:%s %d %lf\n", s.name, s.age, s.score);//�ṹ�����.��Ա����
	struct stu* ps = &s;
	printf("2:%s %d %lf\n", (*ps).name, (*ps).age, (*ps).score);
	printf("3:%s %d %lf\n", ps->name, ps->age, ps->score);//ָ��ָ�����
	//->   �ṹ��ָ��->��Ա������
	return 0;
}