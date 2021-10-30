#include <iostream>
using namespace std;

int Factorial(int n)
{
    if (n == 1)
        return 1;
    else 
        return (n * Factorial(n-1));
}

int main()
{
    // 4!를 구한 후 출력
    cout << Factorial(4);

    cout << endl;

    return 0;
}