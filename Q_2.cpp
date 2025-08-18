// Print a square pattern using *

#include <iostream>

using namespace std;

int main()
{

    int num;
    cout << "Enter a number for rows of Square pattern: ";
    cin >> num;

    for (int i = 1; i <= num; i++)
    {
        for (int j = 1; j <= num; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}