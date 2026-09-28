#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<int, string> m;

    // Insert elements
    m[101] = "Alice";
    m[102] = "Bob";
    m[103] = "Charlie";

    cout << "Map elements:\n";

    for (map<int, string>::iterator i = m.begin(); i != m.end(); ++i)
    {
        cout << i->first << " : " << i->second << endl;
    }

    // Access an element
    cout << "\nStudent with key 102: " << m[102] << endl;

    // Insert using insert()
    m.insert(pair<int, string>(104, "David"));

    cout << "\nAfter insertion:\n";

    for (map<int, string>::iterator i = m.begin(); i != m.end(); ++i)
    {
        cout << i->first << " : " << i->second << endl;
    }

    // Find an element
    if (m.find(103) != m.end())
    {
        cout << "\nKey 103 found." << endl;
    }
    else
    {
        cout << "\nKey 103 not found." << endl;
    }

    // Delete an element
    m.erase(102);

    cout << "\nAfter deleting key 102:\n";

    for (map<int, string>::iterator i = m.begin(); i != m.end(); ++i)
    {
        cout << i->first << " : " << i->second << endl;
    }

    return 0;
}
