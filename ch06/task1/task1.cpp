#include <iostream>
using namespace std;

/* countdown ���� */
void countdown(int n)
{
    if(n <= 0)
    {
        cout << "Launch~";
        return;
    }
    
    cout << n << endl;
    countdown(n-1);
}

int main()
{
    cout << "ī��Ʈ�ٿ��� �����մϴ�..." << endl;

    countdown(10);

    return 0;
}