#include <iostream>
using namespace std;

/* countdown 예제 */
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
    cout << "카운트다운을 시작합니다..." << endl;

    countdown(10);

    return 0;
}