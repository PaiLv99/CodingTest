#include<iostream>
#include<vector>

using namespace std;

void solution(const vector<int> &arr, int &max, int & min);

int main()
{
    int max = INT32_MIN;
    int min = INT32_MAX;

    vector<int> arr = {23, 5, 234, 45};
    solution(arr, max, min);

    cout << max << " " << min;
}

void solution(const vector<int> &arr, int &max, int &min)
{
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] < min) min = arr[i];
        if (arr[i] > max) max = arr[i];
    }
}

