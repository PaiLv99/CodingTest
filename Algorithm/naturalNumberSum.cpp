#include<iostream>

int solution(int n);

int main()
{
    std:: cout << solution(10);
}

int solution(int n)
{
    int answer = 0;

    for (int i = 1; i <= n; i++)
        answer += i;

    return answer;
}