#include <iostream>
using namespace std;

int main()
{
    struct Friends
    {
        char name[20];
        char gender;
        unsigned int num_of_met[3];
        unsigned int num_of_call[3];
    };

    Friends myFriends[3]
    {
        {"Kim si-eun", 'f', {1,2,1}, {2,0,1}},
        {"Kwon sujin", 'f', {1,2,0}, {1,1,1}},
        {"Ko ga-yeon", 'f', {3,1,2}, {2,1,0}}
    };

    for (int i = 0; i < 3; i++)
    {
        cout << "�� ģ���� �̸��� " << myFriends[i].name << "�̰� " << endl;
        cout << "������ " << myFriends[i].gender << "�Դϴ�." << endl;

        cout << "�ֱ� 3�� ���� ";
        for (int j = 0; j < 3; j++)
        {
            cout << myFriends[i].num_of_met[j] << "�� ";
        }
        cout << "������" << endl;

        cout << "�ֱ� 3�� ���� ";
        for (int j = 0; j < 3; j++)
        {
            cout << myFriends[i].num_of_call[j] << "�� ";
        }
        cout << "��ȭ�߽��ϴ�." << endl << endl;
    }
    
    return 0;
}