#include <iostream>
using namespace std;

int max (int a, int b)
{
    return a > b ? a : b;   // 삼항연산자
}

int main()
{
    // 10과 100 중 큰 값을 출력
    int ret = max(10, 100);

    cout << "10과 100 중 더 큰 값은 " << ret << "입니다." << endl;

    return 0 ;
}