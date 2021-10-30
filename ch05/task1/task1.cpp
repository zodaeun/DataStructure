#include <iostream>
#include <cstring>
using namespace std;

struct Order
{
    char name[20];  // �ֹ��ڸ�
    char type[20];  // �Ź� ����
    int size;       // �Ź� ũ��
};

void send(Order *order)
{
    if (order != nullptr && order->size != 0)
    {
        cout << "�ֹ����ּż� �����մϴ�." << endl;
        cout << "�ֹ��Ͻ� " << order->name << " ������ " << order->type << "�Ź�(������ " << order->size << ")�� �ֹ� �Ϸ�Ǿ����ϴ�. \n"<< endl;
    }
}

int main()
{
    //���� ���� ����
    //Order order = {};

    //���� �޸� �Ҵ�
    Order* order = new Order;

    cout << "���� �ȳ��ϼ���." << endl;
    cout << "XYZ ��Ʈ�Դϴ�." << endl;
    cout << endl;
    cout << "���� �ֹ� ������ �Ź� ������ ������� ������ �����ϴ�." << endl;
    cout << endl;
    cout << "����: Ŭ����, ������: 230" <<  endl;
    cout << "����: Ŭ����, ������: 240" << endl;
    cout << "����: ��� Ŭ����, ������: 260" << endl;
    cout << "����: ��� Ŭ����, ������: 270" << endl;
    cout << "����: ����, ������: 240" << endl;
    cout << "����: ����, ������: 260" << endl;
    cout << "����: ����, ������: 280" << endl;
    cout << endl;
    cout << "�Ź��� �ֹ��Ͻ÷��� �ֹ��� �̸��� �Է� �� ���͸� �Է����ּ���. (�ֹ��� ������ �����ø� end�� �Է����ּ���.)" << endl;

    // ���⿡�� �ֹ��� �̸��� �ԷµǾ����� üũ ��
    // �ֹ����� �̸��� end�� ��� ���α׷��� �����Ű��
    // �ֹ����� �̸��� �ԷµǾ����� �������� �ֹ����� ������ �Է¹޵��� ó��

    cin >> order->name;

    char answer[10] = "yes";
    while(strcmp(answer, "yes") == 0)
    {
        if (strcmp(order->name, "end") == 0)
        {
            return 0;
        }
        else
        {
            cout << "�Ź��� ������ �Է� �� ���͸� �Է����ּ���." << endl;
            cin >> order->type;
            cout << "�Ź��� ����� ���ڷ� �Է� �� ���͸� �Է����ּ���." << endl;
            cin >> order->size;
            cout << endl;

            // send() �Լ��� ȣ���� �ֹ� ������ ������ ����
            send(order);
        }
        cout << "�Ź��� �� �ֹ��Ͻ÷��� yes�� �Է����ּ���. (�ٸ� �� �Է� �� ����)" << endl;
        cin >> answer;
    }
    
    // �����޸� ����
    delete[] order;
    order = NULL;
    
    return 0;

}