#include <iostream>
using namespace std;

void Convert2Binary(int decimal)
{
    // 10������ 0���� �۰ų� ������ �����Ѵ�.
    if (decimal <= 0)
        return;

    // ���ڸ� 2�� ���� ���� ���ڷ� �ٽ� ȣ���Ѵ�.
    Convert2Binary(decimal / 2);

    //���ڸ� 2�� ���� �������� ����Ѵ�.
    cout << decimal % 2;
}

int main()
{
    //3�� ������(0x11)�� ��ȯ�Ѵ�.
    Convert2Binary(3);

    cout << endl;

    return 0;
}