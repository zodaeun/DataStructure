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

//���� ī���� ������ ��ȯ�ϴ� �Լ�
colors Card::Color()
{
    return eCval;
}

//�� ���� ������ �Ʒ����� ��ȯ�ϴ� �Լ�
bool Card::IsFaceUp()
{
    return bFaceup;
}

//ī���� ���ڸ� ��ȯ�ϴ� �Լ�
int Card::Rank()
{
    return nRval;
}

//ī���� ���ڸ� x�� �����ϴ� �Լ�
void Card::SetRank(int x)
{
    nRval = x;
}

//ī�带 �ֿܼ� ����ϴ� �Լ�
void Card::Draw()
{   
    std::cout << "ī���� ����: " << str_suits[eSval] << std::endl;
    std::cout << "ī���� ����: " << str_colors[eCval] << std::endl;
    std::cout << "�յ޸� ����: " << bFaceup << std::endl;
    std::cout << "ī���� ����: " << nRval << std::endl;
}

//ī�带 ������ �Լ�
void Card::Flip()
{
    bFaceup = !bFaceup;
}