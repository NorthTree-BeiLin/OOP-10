#pragma once
#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

class school
{
	
public:
	school();
	school(string,string);
	~school();
	void display();
private:
	string address;
	string sch_name;
};
class date
{
public:
	date();
	date(int, int, int);
	~date();
	void display();
	
private:
	int day, month, year;

};
class stu
{
public:
	stu();
	stu(string, bool, string,double,int a ,int b ,int c,string d,string e);
	~stu();
	void display_age();
	friend void info(stu *stu);
	static int num;

private:
	string name;
	bool gender;
	string id;
	double GPA;
	school sch;
	date birthday;

};
void number();

