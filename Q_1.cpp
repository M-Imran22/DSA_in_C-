// Find the sum of digits of a number

// What it means:
// Suppose the number is 1234. The digits are 1, 2, 3, 4. The sum is 1+2+3+4 = 10.

#include <iostream>
using namespace std;

int main()
{

    int num;
    cout << "Enter a number: ";
    cin >> num;
    int sum = 0;

    while (num > 0)
    {
        int rem = num % 10;
        sum += rem;
        num /= 10;
    }

    cout << sum;

    return 0;
}