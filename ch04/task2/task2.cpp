#include <iostream>
using namespace std;

int main()
{
    struct Point
    {
        int x, y;
    };

    Point pt[3] = {{10,20}, {30,40}, {50,60}};
    Point *p[5] = {&pt[0], &pt[1], &pt[2], &pt[0], &pt[1]}; // ������ �迭
    Point(*P)[3] = &pt;                                     // �迭 ������

    for (int i = 0; i < 3; i++)
    {
        cout << "pt�� " << i << "��° x = " << pt[i].x << ", ";
        cout << "pt�� " << i << "��° y = " << pt[i].y << endl;

        cout << "*p�� " << i << "��° x = " << (*p)[i].x << ", ";
        cout << "*p�� " << i << "��° y = " << (*p)[i].y << endl;

        cout << "(*P)�� " << i << "��° x = " << (*P)[i].x << ", ";
        cout << "(*P)�� " << i << "��° y = " << (*P)[i].y << endl;
        cout << endl;
    }
}