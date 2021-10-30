#include <iostream>
using namespace std;

// 학생 정보를 갖는 구조체
struct StudentInfo
{
    char name[20];  //이름
    int stdNumber;  //학번
    float grade[2]; //최근 2학기 평점
};

int main()
{
    // 5명의 학생 정보를 담을 배열을 만들고
    // 학생 정보를 초기화
    StudentInfo stdInfos[5] = {
        {"Cha eun-woo", 20200101, {4.3f, 4.2f}},
        {"Kim eun-woo", 20200102, {3.2f, 4.1f}},
        {"Park eun-woo", 20200103, {4.0f, 3.1f}},
        {"Lee eun-woo", 20200104, {3.3f, 4.1f}},
        {"Jo eun-woo", 20200105, {4.2f, 4.4f}}
    };

    // 학생 정보를 출력
    for (int i = 0; i < 5; i++){
        cout << stdInfos[i].name << " : ";
        cout << stdInfos[i].stdNumber << " : ";
        cout << stdInfos[i].grade[0] << ", " << stdInfos[i].grade[1] << endl;
    }

    return 0;
}