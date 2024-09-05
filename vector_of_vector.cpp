#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<vector<int>> v;
    v.push_back({12,34});
    v.push_back({1});
    v.push_back({-1,0,67});

    for(int i=0;i<v.size();i++)
    {
        for(auto it=v[i].begin();it!=v[i].end();it++)
        {
            cout<<*it<<" ";
        }
        cout<<endl;
    }
    vector<vector<int>> :: iterator it;
    it=v.begin();
    v.insert(it+1,{5,6,7,8});
    // v.pop_back();
    // cout<<"After popback"<<endl;
    for(int i=0;i<v.size();i++)
    {
        for(auto it=v[i].begin();it!=v[i].end();it++)
        {
            cout<<*it<<" ";
        }
        cout<<endl;
    }
    return 0;
}