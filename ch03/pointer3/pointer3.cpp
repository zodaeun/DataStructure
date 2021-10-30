#include <iostream>
using namespace std;

int main()
{
    // int 타입의 배열 포인터에 대한 실습
    int iArray[10];
    int *pi = &iArray[3];    // 포인터 pi가 iArray 배열의 3번째 요소를 가리킴

    cout << pi << endl;
    cout << pi + 1 << endl; // iArray[4] 주소값
    cout << pi + 2 << endl; // iArray[5] 주소값
    cout << pi - 1 << "\n" <<  endl; // iArray[2] 주소값

    // short 타입의 배열 포인터에 대한 실습
    short sArray[10];
    short *ps = &sArray[3];
    
    cout << ps << endl;
    cout << ps + 1 << endl; // sArray[4] 주소값
    cout << ps + 2 << endl; // sArray[5] 주소값
    cout << ps - 1 << endl; // sArray[2] 주소값

    return 0;
}