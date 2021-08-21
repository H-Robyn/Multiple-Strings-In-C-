// Multiple Strings

#include <iostream>
using namespace std;

int main()
{
    char name[5][20];
    cout << "Enter Name" << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << i + 1 << ". ";
        cin.getline(name[i], 20);
    }
    cout << "Here's your List" << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << i + 1 << ". " << name[i] << endl;
    }

    return 0;
}
