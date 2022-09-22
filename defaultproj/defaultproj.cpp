#include "class1.h"
void swap_o(data&, data&);
int main()
{
    string f_name, l_name;
    string sex;
    int age;
    //profile1
    data profile1;
    cout << "insert data for profile1:" << endl;
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
        else {
            cout << "ERROR : wrong sex,data won't be saved\nretry:";
            cin >> sex;
        }
    }
    cout << "Data \"profile1\"saved." << endl;
    //profile2
    data profile2;
    cout << "insert data for profile2:" << endl;
    cin >> f_name >> l_name >> sex >> age;
    while (true)
    {
        if (sex == "female") {
            profile2.modify(f_name, l_name, age, false);
            break;
        }
        else if (sex == "male") {
            profile2.modify(f_name, l_name, age, true);
            break;
        }
        else {
            cout << "ERROR : wrong sex,data won't be saved\nretry:";
            cin >> sex;
        }
        
    }
    cout << "Data \"profile2\"saved." << endl << endl;
    //print original
    cout << "printing \"pofile1\"" << endl;
    profile1.print();
    cout << endl;
    cout << "printing \"pofile2\"" << endl;
    profile2.print();
    //swap profile1&profile2
    cout << endl << "swap!" << endl;
    swap_o(profile1, profile2);
    //print swapped
    cout << "printing \"pofile1\"" << endl;
    profile1.print();
    cout << endl;
    cout << "printing \"pofile2\"" << endl;
    profile2.print();
    //swap again
    cout << "swap!";
    profile1.swap(profile1,profile2);
    cout << endl;

    //enum
    string typ;
    cout << "pls insert typ(firstname,lastname,sex,age) to modify profile1:";
    cin >> typ;
    profile1.modify_typ(convert_to_enum(typ));
    cout << endl;
    cout << "printing \"pofile1\"" << endl;
    profile1.print();
    cout << "printing \"pofile2\"" << endl;
    profile2.print();
    return 0;
}