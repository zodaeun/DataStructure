#include <iostream>

using namespace std;

int main()
{
    
    unsigned int scores[10] = {10,100,94,36,72,88,60,60,80,24};

    //배열의 개수
    int size = sizeof(scores)/sizeof(scores[0]);

    //배열의 합
    int sum = 0;

    for (int i = 0; i < size; i++)
    {
        sum = sum + scores[i];

    };

    //배열의 평균
    float avg = sum / size;

    cout << "10명의 평균 점수는 " <<  avg << "점";

    return 0;
}