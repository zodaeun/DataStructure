#include <iostream>
using namespace std;

void Convert2Binary(int decimal)
{
    // 10진수가 0보다 작거나 같으면 종료한다.
    if (decimal <= 0)
        return;

    // 인자를 2로 나눈 값을 인자로 다시 호출한다.
    Convert2Binary(decimal / 2);

    //인자를 2로 나눈 나머지를 출력한다.
    cout << decimal % 2;
}

int main()
{
    //3을 이진수(0x11)로 변환한다.
    Convert2Binary(3);

    cout << endl;

    return 0;
}