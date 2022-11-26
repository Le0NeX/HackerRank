#pragma once
#include <iostream>
#include <sstream>

using std::cin;
using std::cout;
using std::string;
using std::stringstream;

class Student_Two
{
public:
	Student_Two();
	void launchStudent();

	void set_age(const int age)
	{
		this->age = age;
	}

	void set_standard(const int standard)
	{
		this->standard = standard;
	}

	void set_first_name(const string first_name)
	{
		this->first_name = first_name;
	}

	void set_last_name(const string last_name)
	{
		this->last_name = last_name;
	}

	int get_age()
	{
		return this->age;
	}

	int get_standard()
	{
		return this->standard;
	}

	string get_first_name()
	{
		return this->first_name;
	}

	string get_last_name()
	{
		return this->last_name;
	}
	string to_string()
	{
		stringstream ss;
		ss << age << "," << first_name << "," << last_name << "," << standard;
		ss >> ss_return;
		return ss_return;
	}

private:
	int age;
	int standard;
	string first_name;
	string last_name;
	string ss_return;
};