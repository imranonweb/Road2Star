#include<bits/stdc++.h>
using namespace std;

class Student {
public:
    string name;
    int roll;
    char section;
    int math_marks;
    int cls;

    Student(string name, int roll, char section, int math_marks, int cls) {
        this->name = name;
        this->cls = cls;
        this->math_marks = math_marks;
        this->section = section;
        this->roll = roll;
    }
};

int main() {
    Student rahim("rahim", 3, 'A', 90, 10);
    Student karim("karim", 1, 'B', 88, 10);
    Student joshim("joshim", 2, 'B', 95, 10);

    if(rahim.math_marks > karim.math_marks && rahim.math_marks > joshim.math_marks)
        cout << rahim.name << endl;
    else if(karim.math_marks > rahim.math_marks && karim.math_marks > joshim.math_marks)
        cout << karim.name << endl;
    else
        cout << joshim.name << endl;

    return 0;
}
