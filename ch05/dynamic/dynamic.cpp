#include <iostream>
using namespace std;

int main()
{
    // �� �� ���� ������ �Է� ������ Ȯ��
    int size;
    cout << "�� �� ���� ������ �Է��Ͻðڽ��ϱ�?";
    cin >> size;

    // �ʿ��� ��ŭ�� �޸𸮸� �������� �Ҵ�
    int *arr = new int[size];

    //������ �Է� ����
    cout << "���� �Է��� �� ������ŭ ������ �Է��� �� ����Ű�� �����ּ���." << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    // ����� ����Ͽ� ���
    int sum = 0;
    for ( int i = 0; i < size; i++)
    {
        sum += arr[i];
    }

    float avg = (float)sum / (float)size;

    cout << "������ �� ���� " << sum << "�̸�, ����� " << avg << "�Դϴ�." << endl;

    // ����� �޸𸮸� ����
    delete[] arr;

    return 0;
}