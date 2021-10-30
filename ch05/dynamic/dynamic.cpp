#include <iostream>
using namespace std;

int main()
{
    // 총 몇 개의 정수를 입력 받을지 확인
    int size;
    cout << "총 몇 개의 정수를 입력하시겠습니까?";
    cin >> size;

    // 필요한 만큼의 메모리를 동적으로 할당
    int *arr = new int[size];

    //정수를 입력 받음
    cout << "먼저 입력한 총 개수만큼 정수를 입력한 후 엔터키를 눌러주세요." << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    // 평균을 계산하여 출력
    int sum = 0;
    for ( int i = 0; i < size; i++)
    {
        sum += arr[i];
    }

    float avg = (float)sum / (float)size;

    cout << "정수의 총 합은 " << sum << "이며, 평균은 " << avg << "입니다." << endl;

    // 사용한 메모리를 해제
    delete[] arr;

    return 0;
}