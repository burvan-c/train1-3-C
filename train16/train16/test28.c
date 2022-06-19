#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>



//操作符
// 
// 
//算术操作符

//int main()
//{
//	int a = 6 / 5;
//	float a_1 = 6 / 5;
//	int a_2 = 6 %5;            //取模操作符的操作数必须为整数
//	float a_3 = 6 %5;
//
//	float a_4 = 6.0 / 5;
//
//	printf("%d\n%f\n%d\n%f\n%f\n", a,a_1,a_2,a_3,a_4);
//	return 0;
//}

//移位操作符
//int main()
//{
//	int a = -1;
//	//整数二进制表示形式：原码、反码、补码
//	// 原码：由数值直接写出的二进制序列
//	// 反码：原码的符号位不变，其他位取反
//	// 补码：反码+1
//	//内存中正整数--原码形式(正整数原码、反码、补码相同）；负整数--补码形式
//	//符号位是第一位，正整数为0，负整数为1
//
//
//	//算术移位
//	//左移操作符：左边丢弃，右边补0；向左移动一位<=>乘以2
//	//右移操作符：右边丢弃，左边补0；向右移动一位<=>除以2
//	
//	//把a的二进制位向左移动一位
//	int b = a << 1;
//	int c = a >> 1;
//	printf("%d\n%d\n%d\n", a, b,c);
//	return 0;
//}



//位操作符  &--按位与   |--按位或    ^--按位异或     操作数必须为整数
//int main()
//{
//	int a = 3, b = 5;
//	//二进制每一位进行与操作
//	int c = a & b;
//	//二进制每一位进行或操作
//	int d = a | b;
//	//二进制每一位进行异或操作(相同为0，相异为1）
//	int e = a ^ b;    //(c、c++中没有乘方运算符） 
//	printf("%d\n%d\n%d\n", c,d,e);
//	return 0;
//}



//int main()
//{
//	int a = 13;
//	a = a | (1 << 4);//移位运算符--省去计算，二进制高位更方便
//	//01101
//	//10000
//	printf("%d\n", a);
//	return 0;
//}




//赋值操作符----   =   
//连续赋值     x=y=z:z的值赋给y,y的值赋给x
//复合赋值符：+=、-=、*=、/=、%=、>>=、<<=、&=、|=、^=
//=---赋值
//==----判断相等




//单目操作符
//      ！--逻辑反操作
//      - --负值
//		+ --正值
//		& --取地址
//		sizeof --操作数的类型长度（单位为字节）
//		~ --对一个数二进制取反
//		-- --前置或后置自减
//		++ --前置或后置自加
//		* --解应用操作符
//		（类型） --强制类型转换

//
//int main()
//{
	//int arr[10] = {0};
	////sizeof--操作符，不是函数
	//printf("%d\n", sizeof(arr));//计算数组大小
	//printf("%d\n", sizeof(int [10]));//计算arr类型大小



	//short s = 5;//short占2个字节
	//int b = 10;//int占4个字节
	//printf("%d\n", sizeof(s = b + 2));//s的是short类型，这里没有强制类型转化
	//printf("%d\n", s);   //sizeof（）中的表达式不参与运算*********************************
	


	/*int a = -1;
	int b = ~a;
	printf("%d\n", b);*/


	//int a = 10;
	//int b = a++;//后置++，先使用，后++
	//int c = ++a;//前置++，先++，后使用
	//printf("%d\n%d\n%d\n", a, b, c);
	//printf("%d\n", a--);
	//printf("%d\n", a);



	//int a = 10;
	//printf("%p\n", &a);
	//int *pa = &a;//pa用来存放地址--指针变量
	//*pa = 20;//*--解引用操作符--间接访问操作符


	//int a = (int) 3.14;//强制类型转换
	//printf("%d\n", a);



	//int i = 0, a = 0, b = 2, c = 3, d = 4; 
	//i = a++ && ++b && d++;//逻辑运算与：第一个为假，后面就没必要再运算了（一假为假）
	////i=a++||++b||d++;//逻辑运算或：b为真，b后面的就不用运算了（一真为真）
	//printf("%d\n%d\n%d\n%d\n", a, b, c, d);



	//条件操作符--三目操作符
	/*int a = 3, b = 0;
	b = (a > 5 ? 1 : -1);*/



	////逗号表达式
	//int a = 3, b = 5,c = 0;
	////逗号表达式从左向右依次计算，整个表达式的结果是最后一个表达式的结果
	//int d = (c = 5, a = c + 3, b = a - 4, c += 5);





	//下标引用操作符
	//int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	//printf("%d\n", arr[4]);//[]--下标引用操作符
	//[]的操作数是2个：arr,4 
	//	return 0;
	//}




//函数调用操作符
//int add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int a = 10, b = 20;
//	//函数调用
//	int ret = add(a, b);//()---函数调用操作符
//	return 0;
//}




//结构成员访问操作符
struct book//结构体必须有分号
{
	char name[20];
	char id[20];
	int price;
};
int main()
{
	struct book b = { "c语言","c20220620",55 };
	printf("书名:%s\n书号:%s\n价格:%d\n", b.name,b.id,b.price);
	return 0;
}