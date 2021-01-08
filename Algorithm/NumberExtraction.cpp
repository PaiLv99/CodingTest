#include <iostream>

void solution(const char *ch);

int main()
{
    const char *ch = "0adlfhe1k4nl0ni1";
    // 01401 -> 1401;
    solution(ch);
}


void solution(const char *ch)
{
    int answer = 0;
    int count = 0;
    int digit = 1;

    for (int i= 0; i < ch[i] != '\0'; i++)
    {   
        if (ch[i] >= 48 && ch[i] <= 57)
            answer = answer * 10  +  ( ch[i] - 48 );
    }

    for (int i=1; i <= answer / 2; i++)
        if (answer % i == 0) count++;

    std::cout << answer << " " << count;
}

