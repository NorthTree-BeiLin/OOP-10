#include "stu.h"
#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
int stu::num = 0;
school::school()
{
	cout << "����school�Ĺ��캯��" << endl;
}
school::school(string a,string b)

{
	this->sch_name = a;
	this->address = b;
	cout << "����school�Ĺ��캯��" << endl;
}
school::~school()
{
	getchar();
	cout << "����school����������" << endl;

}
void school::display()
{
	cout << sch_name;
}
date::date()
{
	cout << "����date�Ĺ��캯��" << endl;
}
date::date(int a,int b,int c)
{
	this->year = a;
	this->month = b;
	this->day = c;
	cout << "����date�Ĺ��캯��" << endl;
}
date::~date()

{
	getchar();

	cout << "����date����������" << endl;
}
void date::display()
{
	int age = 2019 - year;
	cout  <<age << endl;
}

void stu::display_age()
{
	birthday.display();

}


stu::stu()
{
	num++;
	cout << "����stu�Ĺ��캯��" << endl;
}

stu::stu(string n, bool g, string i, double p,int a, int b, int c, string d,string e):sch(d,e),birthday(a,b,c)
{
	num++;
	this->name = n;
	this->gender = g;
	this->id = i;
	this->GPA = p;
	cout << "����stu�Ĺ��캯��" << endl;

}

stu::~stu()
{
	num--;
	getchar();

	cout << "����stu��������" << endl;
}
void info(stu *s)
{
	for (int i = 0; i < stu::num; i++)
	{
		cout << "ѧ�ţ�" << setw(12)<<left<<
		s[i].id << "������"<<left
			<< setw(15)<<s[i].name <<"����"<<setw(15)<<s[i].GPA
			<< "ѧУ��"<< setw(15);
		s[i].sch.display();
		cout << "���䣺"<<left<< setw(8);
		s[i].display_age();

	}
}
void number()
{
	cout << "��ǰѧ���������ǣ�" << stu::num << endl;
}
