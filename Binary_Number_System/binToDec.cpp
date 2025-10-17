#include <iostream>
using namespace std;

void binToDec(int binNum)
{
    int decNum = 0;
    int power = 1;

    while (binNum > 0)
    {

        int lastDig = binNum % 10;
        decNum += lastDig * power;
        power *= 2;

        binNum = binNum / 10;
    }
    cout << "The decimal Number is : " << decNum;
}
int main()
{
    int n;
    cout << "Enter a Number in Binary: \n";
    cin >> n;

    binToDec(n);
    return 0;
}