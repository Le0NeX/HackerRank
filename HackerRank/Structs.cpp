#include "Structs.h"

Student::Student()
{
    age = 0;
    first_name = "";
    last_name = "";
    standard = 0;
}

void Student::launchStudent()
{
    Student st;

    std::cin >> st.age >> st.first_name >> st.last_name >> st.standard;
    std::cout << st.age << " " << st.first_name << " " << st.last_name << " " << st.standard;
}