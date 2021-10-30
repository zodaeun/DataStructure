#include <iostream>
using namespace std;

void sum(int a, int b, int &ret)
{
    ret = a + b;
}

int main()
{
    // 10과 100을 더한 값을 출력
    int ret = 0;
    sum(10, 100, ret);

    cout << "10과 100을 더한 값은 " << ret << "입니다." << endl;
    
    return 0;
}