#pragma once
#include <iostream>

/* Default modifier to access struct public */

struct Student
{
	Student();

	void launchStudent();
	int age;
	std::string first_name;
	std::string last_name;
	int standard;
};