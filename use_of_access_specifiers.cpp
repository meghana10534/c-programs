#include <iostream>
using namespace std;

class Student
{
private:
    int marks = 90;       // Private member

protected:
    int age = 20;         // Protected member

public:
    string name = "Meghana";  // Public member

    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks << endl;
        cout << "Age: " << age << endl;
    }
};

int main()
{
    Student s;

    // Public member can be accessed outside the class
    cout << "Name: " << s.name << endl;

    // Private and protected members cannot be accessed directly
    // cout << s.marks;   // Error
    // cout << s.age;     // Error

    s.display();          // Public function accesses them

    return 0;
}
