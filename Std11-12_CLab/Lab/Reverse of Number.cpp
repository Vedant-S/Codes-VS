#include <iostream>
using namespace std;

int main()
{
    int M, reversedNumber = 0, remainder,t;

    cout << "Enter an integer: ";
    cin >> M;
    t=M;
    while(M != 0)
    {
        remainder = M%10;
        reversedNumber = reversedNumber*10 + remainder;
        M =M/ 10;
    }

    cout << "Reversed Number = " << reversedNumber;
    cout << "\nOriginal Number = " << t;
    return 0;
}
