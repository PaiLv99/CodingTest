#include<iostream>
#include<vector>

using namespace std;
void solution(vector<int> arr);

int main()
{
    vector<int> a = {90,85,95,92,90};

    solution(a);
}

void solution(const vector<int> arr)
{
    vector<int> answer(arr.size(), 1);

    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < answer.size(); j++)
        {
            if (arr[i] < arr[j]) answer[i] += 1;
        }
    }

    for (auto iter : answer)
        cout << iter << " ";
}