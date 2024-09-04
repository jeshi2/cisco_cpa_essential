#include<iostream>
#include<vector>
using namespace std;
int main() 
{
    vector<pair<int,string>> studentDetails={{1,"Jeshi"},{2,"Payal"}};
    for(int i=0;i<studentDetails.size(); i++)
    {
        cout<<studentDetails[i].first<<" "<<studentDetails[i].second<<endl;
    }
    studentDetails.push_back(make_pair(3,"Jiya"));
    for(int i=0;i<studentDetails.size(); i++)
    {
        cout<<studentDetails[i].first<<" "<<studentDetails[i].second<<endl;
    }
    studentDetails.erase(studentDetails.begin()+2);
    for(int i=0;i<studentDetails.size(); i++)
    {
        cout<<studentDetails[i].first<<" "<<studentDetails[i].second<<endl;
    }
    return 0;
}