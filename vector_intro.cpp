#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> numbers={1,2,3,5,45,6};
    vector<int> numbers2(numbers.begin(),numbers.end());
    // fill(numbers.begin(),numbers.end(),5);
    for(int i=0;i<numbers.size();i++)
    {
        cout<<numbers[i]<<endl;
    }
    //insert element in vector
    // int value;
    // for(int i=0; i<3; i++)
    // {
    //     cout<<"enter value: ";
    //     cin>>value;
    //     numbers.push_back(value);
    // }
    // numbers.push_back(2);
    // numbers.push_back(21);
    // numbers.push_back(23);
    // numbers.push_back(34);
    // numbers.push_back(37);
    // numbers.push_back(38);
    // numbers.push_back(40);
    // numbers.push_back(37);

    // cout<<"size of numbers: "<<numbers.size()<<endl;
    // cout<<"capacity of numbers="<<numbers.capacity();

    // cout<<numbers[1];
}