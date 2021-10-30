#include <iostream>
using namespace std;

int main()
{
    // 일반적인 변수를 정의
    int a  = 123;

    // 포인터 변수를 정의
    int *p;

    // 포인터 변수 p가 변수  a의 주소를 가리키도록 설정
    p = &a;

    //관련 정보를 출력
    cout << &a << endl;     // a의 주소값
    cout << p << endl;      // a의 주소값 (p가 가리키고 있는 변수의 주소값) 
    cout << &p << endl;     // p의 주소값 (포인터 변수 자체의 주소값)

    return 0;
}