#include <iostream>
using namespace std;

class Person {
protected:
    string name;
    int age;

public:
    void Input() {
        cin >> name >> age;
    }

    void Output() const {
        cout << name << " " << age << endl;
    }

    void getOccupation() const {
        cout << "Unknown" << endl;
    }
};

class Student :
    public Person {
private:
    string academy;

public:
    void Input() {
        Person::Input();
        cin >> academy;
    }

    void Output() const {
        Person::Output();
        cout << academy << endl;
    }

    void getOccupation() const {
        cout << "Student" << endl;
    }
};

class Teacher :
    public Person {
private:
    string school, subject;

public:
    void Input() {
        Person::Input();
        cin >> school >> subject;
    }

    void Output() const {
        Person::Output();
        cout << school << " " << subject << endl;
    }

    void getOccupation() const {
        cout << "Teacher" << endl;
    }
};

class Doctor : 
    public Person {
private:
    string hospital;
    double salary;

public:
    void Input() {
        Person::Input();
        cin >> hospital >> salary;
    }

    void Output() const {
        Person::Output();
        cout << hospital << " " << salary << endl;
    }

    void getOccupation() const {
        cout << "Doctor" << endl;
    }
};

class Director :
    
    public Person {
private:
    string school;
    double salary;

public:
    void Input() {
        Person::Input();
        cin >> school >> salary;
    }

    void Output() const {
        Person::Output();
        cout << school << " " << salary << endl;
    }

    void getOccupation() const {
        cout << "Director" << endl;
    }
};

int main() {
    Student student;
    Teacher teacher;
    Doctor doctor;
    Director director;

    student.Input();
    teacher.Input();
    doctor.Input();
    director.Input();

    student.Output();
    student.getOccupation();

    teacher.Output();
    teacher.getOccupation();

    doctor.Output();
    doctor.getOccupation();

    director.Output();
    director.getOccupation();
}
