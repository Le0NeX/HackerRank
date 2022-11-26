#include "Class.h" 

Student_Two::Student_Two()
{
    age = 0;
    standard = 0;
    first_name = "";
    last_name = "";
    ss_return = "";
}

void Student_Two::launchStudent()
{
    int age, standard;
    string first_name, last_name;

    cin >> age >> first_name >> last_name >> standard;

    Student_Two st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);

    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();
}