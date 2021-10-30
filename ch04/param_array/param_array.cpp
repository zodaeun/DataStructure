#include <iostream>
using namespace std;

//void UsingArray(char *arr)
void UsingArray(char arr[])
{
    // 넘겨 받은 배열을 출력
    cout << "In UsingArray() : " << arr << endl;

    // 배열의 원소 하나를 수정
    arr[12] = '?';
}

int main()
{
    // 배열을 만들고 초기화
    // char array[20] = "Hello, World!";
    char array[] = "Hello, World!";

    // 함수에 배열을 넘겨줌
    UsingArray(array);

    cout << "In Main() : " << array << " : " << sizeof(array) << endl;

    return 0;
}