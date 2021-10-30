#include <iostream>
#include <cstring>
using namespace std;

struct Order
{
    char name[20];  // 주문자명
    char type[20];  // 신발 종류
    int size;       // 신발 크기
};

void send(Order *order)
{
    if (order != nullptr && order->size != 0)
    {
        cout << "주문해주셔서 감사합니다." << endl;
        cout << "주문하신 " << order->name << " 고객님의 " << order->type << "신발(사이즈 " << order->size << ")이 주문 완료되었습니다. \n"<< endl;
    }
}

int main()
{
    //정적 변수 선언
    //Order order = {};

    //동적 메모리 할당
    Order* order = new Order;

    cout << "고객님 안녕하세요." << endl;
    cout << "XYZ 마트입니다." << endl;
    cout << endl;
    cout << "현재 주문 가능한 신발 종류와 사이즈는 다음과 같습니다." << endl;
    cout << endl;
    cout << "종류: 클래식, 사이즈: 230" <<  endl;
    cout << "종류: 클래식, 사이즈: 240" << endl;
    cout << "종류: 모던 클래식, 사이즈: 260" << endl;
    cout << "종류: 모던 클래식, 사이즈: 270" << endl;
    cout << "종류: 뉴젠, 사이즈: 240" << endl;
    cout << "종류: 뉴젠, 사이즈: 260" << endl;
    cout << "종류: 뉴젠, 사이즈: 280" << endl;
    cout << endl;
    cout << "신발을 주문하시려면 주문자 이름을 입력 후 엔터를 입력해주세요. (주문을 원하지 않으시면 end를 입력해주세요.)" << endl;

    // 여기에서 주문자 이름이 입력되었는지 체크 후
    // 주문자의 이름이 end일 경우 프로그램을 종료시키고
    // 주문자의 이름이 입력되었으면 동적으로 주문서를 생성해 입력받도록 처리

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
            cout << "신발의 종류를 입력 후 엔터를 입력해주세요." << endl;
            cin >> order->type;
            cout << "신발의 사이즈를 숫자로 입력 후 엔터를 입력해주세요." << endl;
            cin >> order->size;
            cout << endl;

            // send() 함수를 호출해 주문 내용을 서버로 전송
            send(order);
        }
        cout << "신발을 더 주문하시려면 yes를 입력해주세요. (다른 값 입력 시 종료)" << endl;
        cin >> answer;
    }
    
    // 동적메모리 해제
    delete[] order;
    order = NULL;
    
    return 0;

}