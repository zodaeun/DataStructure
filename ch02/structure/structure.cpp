#include <iostream>

using namespace std;

// 'StudentInfo'��� �̸��� ����ü�� ����
struct StudentInfo
{
    char bloodType; //������
    int stdNumber;  //�й�
    float grade;    //����
};

int main()
{
    //StudentInfo ����ü Ÿ���� ���� 2���� ����
    StudentInfo si1 = { 'O', 20031128, 3.5f };
    StudentInfo si2 = { 'A', 19961219, 2.3f };

    //����� ���� ���
    cout << "�й� : " << si1.stdNumber << endl;
    cout << "���� : " << si1.grade << endl;
    cout << "������ : " << si1.bloodType << endl;
    cout << "�й� : " << si2.stdNumber << endl;
    cout << "���� : " << si2.grade << endl;
    cout << "������ : " << si2.bloodType << endl;

    return 0;

}