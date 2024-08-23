#include<iostream>
using namespace std;
int main()
{
    int data[]={1,10,-1,5,6,-1,7,-99,8,10};
    for(auto n : data)
    {
        if(n==-99)
        {
            break;
        }
        else if (n==-1)
        {
            continue;
        }
        cout<<n<<endl;
    }
}