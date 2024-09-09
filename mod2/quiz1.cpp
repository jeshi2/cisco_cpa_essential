#include<iostream>
#include<vector>

using namespace std;
struct  Str {
    int in;
    char ch;
};
int main()
{
    vector<Str> t={{1,'a'},{2,'b'}};

    for(int i=0; i<2;i++)
    {
        t[i].in += (t[1-i].ch - t[i].ch);
    }   
    cout<<t[0].in<<t[1].in;
};
