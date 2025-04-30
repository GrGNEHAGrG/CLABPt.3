#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int age;
    char grade;
    string group = "2025 group";

public:
    void setName(string n) { name = n; }
    void setAge(int a) { age = a; }
    void setGrade(char g) { grade = g; }

    string getName() { return name; }
    int getAge() { return age; }
    char getGrade() { return grade; }

    void displayInfo() {
        cout << "Name: " << getName() << endl;
        cout << "Age: " << getAge() << endl;
        cout << "Grade: " << getGrade() << endl;
        cout << "Group: " << group << endl;
    }
};

int main() {
    Student student;
    string name;
    int age;
    char grade;
    cout << "Enter student name: ";
    cin >> name;
    cout << "Enter student age: ";
    cin >> age;
    cout << "Enter student grade: ";
    cin >> grade;
    student.setName(name);
    student.setAge(age);
    student.setGrade(grade);
    student.displayInfo();
    return 0;
}   