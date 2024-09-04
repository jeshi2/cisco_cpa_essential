#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<pair<int,int>> v={{1,2},{15,10},{5,-4}};
    int sum=0;
    for(auto n:v){
        sum += n.second;
    }

    // for(int i=0;i<v.size();++i)
    // {
    //     sum +=v[i].second;
    // }
    cout<<sum;
    return 0;
}