#include <iostream>

using namespace std;

int main()
{
    
    unsigned int scores[10] = {10,100,94,36,72,88,60,60,80,24};

    //�迭�� ����
    int size = sizeof(scores)/sizeof(scores[0]);

    //�迭�� ��
    int sum = 0;

    for (int i = 0; i < size; i++)
    {
        sum = sum + scores[i];

    };

    //�迭�� ���
    float avg = sum / size;

    cout << "10���� ��� ������ " <<  avg << "��";

    return 0;
}