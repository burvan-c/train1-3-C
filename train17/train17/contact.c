//#define _CRT_SECURE_NO_WARNINGS 1
//#include"contact.h"
//
//
//void initcontact(contact* pc)
//{
//	pc->sz = 0;
//	//memset();�ڴ�����,���ֽ�Ϊ��λ
//	memset(pc->data, 0, sizeof(pc->data));
//}
//
//
//void addcontact(contact* pc) 
//{
//	if (pc->sz == 1000)
//	{
//		printf("ͨѶ¼�������޷�����\n");
//		return;
//	}
//	//����һ������Ϣ
//	printf("��������:>");
//	scanf("%s", pc->data[pc->sz].name);
//	printf("��������:>");
//	scanf("%d", &(pc->data[pc->sz].age));
//	printf("�����Ա�:>");
//	scanf("%s", pc->data[pc->sz].sex);
//	printf("����绰:>");
//	scanf("%s", pc->data[pc->sz].tele);
//	printf("�����ַ:>");
//	scanf("%s", pc->data[pc->sz].addr);
//
//	pc->sz++;
//	printf("���ӳɹ�\n");
//}
//
//
//
//
//void printcontact(const contact* pc)
//{
//	int i = 0;
//	//��ӡ����
//	printf("%-20s\t%-5s\t%-5s\t%-12s\t%-20s\n", "����", "����", "�Ա�", "�绰", "��ַ");
//	for (i = 0; i < pc->sz; i++)
//	{
//		printf("%-20s\t%-5d\t%-5s\t%-12s\t%-20s\n",
//			pc->data[i].name,
//			pc->data[i].age,
//			pc->data[i].sex,
//			pc->data[i].tele,
//			pc->data[i].addr);
//
//	}
//}
//
//
//
//
//static int findbyname(contact* pc, char name[])
//{
//	int i = 0;
//	for (i = 0; i < pc->sz; i++)
//	{
//		if (strcmp(pc->data[i].name, name) == 0)
//			return i;
//	}
//	return -1;//�Ҳ���
//
//}
//void delcontact(contact* pc)
//{
//	char name[max_name] = { 0 };
//	if (pc->sz == 0)
//	{
//		printf("ͨѶ¼Ϊ�գ�����ɾ��\n");
//		return;
//	}
//	printf("����ɾ������:>");
//	scanf("%s", name);
//	//1.����Ҫɾ������
//	int pos = findbyname(pc, name);
//	if (pos == -1)
//	{
//		printf("Ҫɾ�����˲�����\n");
//		return ;
//	}
//	//2.ɾ��
//	int i = 0;
//	for (i = pos; i < pc->sz-1; i++)
//	{
//		pc->data[i] = pc->data[i + 1];
//	}
//	pc->sz--;
//	printf("ɾ���ɹ�\n");
//}
//
//
//
//void searchcontact(contact* pc)
//{
//	char name[max_name] = { 0 };
//	printf("����Ҫ���ҵ���ϵ�˵�����:>");
//	scanf("%s", name);
//	int pos = findbyname(pc, name);
//	if (pos == -1)
//	{
//		printf("Ҫ���ҵ��˲�����\n");
//		return;
//	}
//	else
//	{
//	printf("%-20s\t%-5s\t%-5s\t%-12s\t%-20s\n", "����", "����", "�Ա�", "�绰", "��ַ");
//		printf("%-20s\t%-5d\t%-5s\t%-12s\t%-20s\n",
//				pc->data[pos].name,
//				pc->data[pos].age,
//				pc->data[pos].sex,
//				pc->data[pos].tele,
//				pc->data[pos].addr);
//	}
//}
//
//
//
//void modifycontact(contact* pc)
//{
//	char name[max_name] = { 0 };
//	printf("����Ҫ�޸ĵ���ϵ�˵�����:>");
//	scanf("%s", name);
//	int pos = findbyname(pc, name);
//	if (pos == -1)
//	{
//		printf("Ҫ�޸ĵ��˲�����\n");
//		return;
//	}
//	else
//	{
//		printf("��������:>");
//		scanf("%s", pc->data[pos].name);
//		printf("��������:>");
//		scanf("%d", &(pc->data[pos].age));
//		printf("�����Ա�:>");
//		scanf("%s", pc->data[pos].sex);
//		printf("����绰:>");
//		scanf("%s", pc->data[pos].tele);
//		printf("�����ַ:>");
//		scanf("%s", pc->data[pos].addr);
//		printf("�޸ĳɹ�\n");
//	}
//}
//