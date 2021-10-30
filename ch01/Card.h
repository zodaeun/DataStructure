#pragma once

enum suits { diamond, clover, heart, spade };
enum colors { red, black };

//eunm타입을 string타입으로 변환
static const char *str_suits[] = {"diamond","clover","heart","spade"};
static const char *str_colors[] = {"red", "black"};

class Card
{
public:
    Card(void);     //생성자 함수
    ~Card(void);    //소멸자 함수

    colors Color();         //현재 카드의 색상을 반환하는 함수
    bool IsFaceUp();        //앞면이 위인지 아래인지 반환하는 함수
    int Rank();             //카드의 숫자를 반환하는 함수
    void SetRank(int x);    //카드의 숫자를 x로 설정하는 함수
    void Draw();            //카드를 콘솔에 출력하는 함수
    void Flip();            //카드를 뒤집는 함수
    
private:
    bool bFaceup;       //그림이 위로 향하고 있는지 여부를 저장하는 변수
    int nRval;          //카드 숫자를 저장하는 변수
    suits eSval;        //카드 종류를 저장하는 변수
    colors eCval;       //카드 색을 저장하는 변수
};