#include <iostream>
using namespace std;

int main() 
{
    // long 타입의 배열 정의
    long lArray[20] = {};

    // 포인터 변수 p가 배열 변수 lArray의 주소를 가리키도록 설정
    long (*p)[20] = &lArray;

    // 포인터 변수를 통해서 배열의 값을 변경
    (*p)[3] = 300;
    
    // 배열의 모든 원소 출력
    for ( int i = 0; i < 20; i++ )
    {
        cout << "lArray[" << i << "] = " << (*p)[i] << endl;
    }

    return 0;
}