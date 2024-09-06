#include<iostream>
#include<vector>

using namespace std;
int main()
{
    vector<char> arr = {'a','b','c'};

    for(int i=1; i<arr.size();i++)
    {
        cout<<"*";
        if((arr[i] -arr[i-1]) %2)
        {
            continue;
        }
        cout<<"*";
    }
}
