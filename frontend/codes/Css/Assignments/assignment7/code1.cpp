
#include<iostream>
using namespace std;

struct Student {
    int id;
    string name;
    float cgpa;
};

int main() {
    Student *s = new Student[5];

    for (int i = 0; i < 5; i++) {
        cout << "Enter ID, Name, CGPA: ";
        cin >> s[i].id >> s[i].name >> s[i].cgpa;
    }

    cout << "\nStudent Records:\n";
    for (int i = 0; i < 5; i++) {
        cout << s[i].id << " "
             << s[i].name << " "
             << s[i].cgpa << endl;
    }

    int key, found = 0;
    cout << "Enter ID to search: ";
    cin >> key;

    for (int i = 0; i < 5; i++) {
        if (s[i].id == key) {
            cout << "Student Found: "
                 << s[i].name << " "
                 << s[i].cgpa << endl;
            found = 1;
            break;
        }
    }

    if (!found)
        cout << "Student Not Found";

    delete[] s;
    return 0;
}
