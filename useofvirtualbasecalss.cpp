#include <iostream>
using namespace std;

class Student
{
public:
    int rollNo = 101;

    void display()
    {
        cout << "Roll No: " << rollNo << endl;
    }
};

class Test : virtual public Student
{
public:
    int marks = 90;
};

class Sports : virtual public Student
{
public:
    int score = 80;
};

class Result : public Test, public Sports
{
public:
    void show()
    {
        cout << "Roll No: " << rollNo << endl;
        cout << "Marks: " << marks << endl;
        cout << "Sports Score: " << score << endl;
    }
};

int main()
{
    Result r;
    r.show();

    return 0;
}
