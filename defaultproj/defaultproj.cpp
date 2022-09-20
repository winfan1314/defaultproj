
#include "class1.h"

int main()
{
    string f_name, l_name;
    string sex;
    int age;
    data profile1;
    cin >> f_name >> l_name >> sex >> age;
    while (true)
    {
        if (sex == "female") {
            profile1.modify(f_name, l_name, age, false);
            break;
        }
        else if (sex == "male") {
            profile1.modify(f_name, l_name, age, true);
            break;
        }
        else cout << "ERROR : wrong sex,data won't be saved\nretry" << endl;
    }
    cout << "Data saved,printing......" << endl;
    profile1.print();
    return 0;
}