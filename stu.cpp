#include "stu.h"
#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
int stu::num = 0;
school::school()
{
	cout << "调用school的构造函数" << endl;
}
school::school(string a,string b)

{
	this->sch_name = a;
	this->address = b;
	cout << "调用school的构造函数" << endl;
}
school::~school()
{
	getchar();
	cout << "调用school的析构函数" << endl;

}
void school::display()
{
	cout << sch_name;
}
date::date()
{
	cout << "调用date的构造函数" << endl;
}
date::date(int a,int b,int c)
{
	this->year = a;
	this->month = b;
	this->day = c;
	cout << "调用date的构造函数" << endl;
}
date::~date()

{
	getchar();

	cout << "调用date的析构函数" << endl;
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
	cout << "调用stu的构造函数" << endl;
}

stu::stu(string n, bool g, string i, double p,int a, int b, int c, string d,string e):sch(d,e),birthday(a,b,c)
{
	num++;
	this->name = n;
	this->gender = g;
	this->id = i;
	this->GPA = p;
	cout << "调用stu的构造函数" << endl;

}

stu::~stu()
{
	num--;
	getchar();

	cout << "调用stu析构函数" << endl;
}
void info(stu *s)
{
	for (int i = 0; i < stu::num; i++)
	{
		cout << "学号：" << setw(12)<<left<<
		s[i].id << "姓名："<<left
			<< setw(15)<<s[i].name <<"绩点"<<setw(15)<<s[i].GPA
			<< "学校："<< setw(15);
		s[i].sch.display();
		cout << "年龄："<<left<< setw(8);
		s[i].display_age();

	}
}
void number()
{
	cout << "当前学生的人数是：" << stu::num << endl;
}
