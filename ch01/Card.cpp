#include <iostream>
#include "Card.h"

Card::Card(void)
{
    eSval = diamond;
    eCval = red;
    nRval = 7;
    bFaceup = true;
}


Card::~Card(void) {}

//현재 카드의 색상을 반환하는 함수
colors Card::Color()
{
    return eCval;
}

//앞 면이 위인지 아래인지 반환하는 함수
bool Card::IsFaceUp()
{
    return bFaceup;
}

//카드의 숫자를 반환하는 함수
int Card::Rank()
{
    return nRval;
}

//카드의 숫자를 x로 설정하는 함수
void Card::SetRank(int x)
{
    nRval = x;
}

//카드를 콘솔에 출력하는 함수
void Card::Draw()
{   
    std::cout << "카드의 종류: " << str_suits[eSval] << std::endl;
    std::cout << "카드의 색상: " << str_colors[eCval] << std::endl;
    std::cout << "앞뒷면 구분: " << bFaceup << std::endl;
    std::cout << "카드의 숫자: " << nRval << std::endl;
}

//카드를 뒤집는 함수
void Card::Flip()
{
    bFaceup = !bFaceup;
}