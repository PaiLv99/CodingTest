#include<iostream>

int solution(int x, int y);

int main()
{
    solution(10, 3);
}

int solution(int number, int multiful)
{
    int answer = 0;

    for (int i = 1; i < number; i++)
        if (i % multiful == 0) answer += i;

    std::cout << answer;
    return answer;
}