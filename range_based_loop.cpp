#include<iostream>
#include<vector>
using namespace std;
int main() 
{
    //int a[]={1,2,3};
    //vector<int> num={1,2,3,5,6};

    for(auto c: "James Veans")
    {
        if(c != ' ')
            cout<<c;
    }
    return 0;
}