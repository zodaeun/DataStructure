#include <iostream>

using namespace std;

// 'StudentInfo'라는 이름의 구조체를 정의
struct StudentInfo
{
    char bloodType; //혈액형
    int stdNumber;  //학번
    float grade;    //평점
};

int main()
{
    //StudentInfo 구조체 타입의 변수 2개를 정의
    StudentInfo si1 = { 'O', 20031128, 3.5f };
    StudentInfo si2 = { 'A', 19961219, 2.3f };

    //멤버의 값을 출력
    cout << "학번 : " << si1.stdNumber << endl;
    cout << "학점 : " << si1.grade << endl;
    cout << "혈액형 : " << si1.bloodType << endl;
    cout << "학번 : " << si2.stdNumber << endl;
    cout << "학점 : " << si2.grade << endl;
    cout << "혈액형 : " << si2.bloodType << endl;

    return 0;

}