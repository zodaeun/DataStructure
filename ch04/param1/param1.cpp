#include <iostream>
using namespace std;

int max (int a, int b)
{
    return a > b ? a : b;   // ���׿�����
}

int main()
{
    // 10�� 100 �� ū ���� ���
    int ret = max(10, 100);

    cout << "10�� 100 �� �� ū ���� " << ret << "�Դϴ�." << endl;

    return 0 ;
}