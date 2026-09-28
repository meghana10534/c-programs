#include <iostream>
using namespace std;

int x = 10;   // Global variable

namespace First
{
    int x = 20;
}

namespace Second
{
    int x = 30;
}

int main()
{
    int x = 40;   // Local variable

    cout << "Local x = " << x << endl;
    cout << "Global x = " << ::x << endl;
    cout << "First namespace x = " << First::x << endl;
    cout << "Second namespace x = " << Second::x << endl;

    return 0;
}
