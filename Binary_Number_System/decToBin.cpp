#include <iostream>
using namespace std;

void decToBin(int decNum)
{
    int binNum = 0;
    int power = 1;

    while (decNum > 0)
    {

        int rem = decNum % 2;
        binNum += rem * power;
        power *= 10;
        decNum = decNum / 2;
    }

    cout << "The number in binary is : " << binNum;
}

int main()
{
    int n;
    cout << "Enter a decimal number to convert in binary: ";
    cin >> n;
    decToBin(n);
    return 0;
}