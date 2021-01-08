#include<iostream>

using namespace std;

void solution(const char *serial_number);

int main()
{
    const char *serial_number = "910104-1853412";
    solution(serial_number);
}

void solution( const char *serial_number)
{
    const int thisYear = 2020;
    int both;
    char sex;
    int age;

    both = 1900 + (serial_number[0] - 48) * 10 + serial_number[1] - 48;
    age = thisYear - both;
    int idx = 0;
    
    while(true)
    {
        if (serial_number[idx] == '\n')
            break;
        if (serial_number[idx] == '-')
            sex = serial_number[idx + 1] % 2 == 0 ? 'W' : 'M';
        idx++;
    }
    std::cout << "나이 " << age << "성별 " << sex;
}