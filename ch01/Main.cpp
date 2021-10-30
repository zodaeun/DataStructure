#include <iostream>
#include "Card.h"

using namespace std;

int main()
{
    Card MyCard;

    //카드 뒤집기
    MyCard.Flip();

    //카드 숫자 설정하기
    MyCard.SetRank(8);

    //카드 속성 출력하기
    MyCard.Draw();

    return 0;
}