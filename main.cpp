#include"stu.h"
#include<iostream>
using namespace std;
const int n = 3;
int main()
{
	double Gpa[n];
	srand(time(NULL));
	for (int i = 0; i < n; i++)
	{
		Gpa[i] =(double)
			(rand() % 400) / 100;
	}
	stu s[3] = { stu((string)"С��",bool(1),string("2018110000"),Gpa[0],2000,3,21,string("������ѧ"),string("����")),stu(string("����"),bool(0),string("2018110001"),Gpa[1],1999,8,7,string("���ӿƼ���ѧ"),string("�Ĵ�")),stu(string("����"),(bool)1,(string)"2018110003",Gpa[2],1998,12,24,(string)"������",(string)"����") };
	number();

	info(s);

	system("pause");
	getchar();
}