#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> numbers(5);
    cout<<"Enter element of vector: "<<endl;
    for(int i=0;i<numbers.size();i++)
    {
        cin>>numbers[i];
    }
    cout<<"Element of vector are: "<<endl;
    for(int i=0;i<numbers.size();i++)
    {
        cout<<numbers.at(i)<<endl;
    }
    // cout<<"Element at index 0 is: "<<numbers[0]<<endl;
    // cout<<"Element at index 0 is: "<<numbers.at(10);
    // cout<<"Last element at index 0 is: "<<numbers.back();
    // cout<<"First element at index 0 is: "<<numbers.front();
    numbers.at(1)=10;
    cout<<"Element at index 1 is: "<<numbers.at(1)<<endl;
    return 0;
}