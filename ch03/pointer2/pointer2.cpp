#include <iostream>
using namespace std;

int main()
{
    // 포인터 변수 p가 변수 a의 주소를 가리키도록 설정
    int a = 123;
    int *p = &a;

    // 포인터 변수 p가 가리키는 변수의 값을 출력
    cout << "*p = " << *p << endl;

    // 포인터 변수 p가 가리키는 변수의 값을 변경
    *p = 789;

    // 관련 정보를 출력
    cout << "a = " << a << endl;
    cout << "*p = " << *p << endl;

    return 0;
}