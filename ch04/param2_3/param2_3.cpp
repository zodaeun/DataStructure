#include <iostream>
using namespace std;

void sum(int a, int b, int &ret)
{
    ret = a + b;
}

int main()
{
    // 10�� 100�� ���� ���� ���
    int ret = 0;
    sum(10, 100, ret);

    cout << "10�� 100�� ���� ���� " << ret << "�Դϴ�." << endl;
    
    return 0;
}