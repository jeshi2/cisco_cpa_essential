#include<iostream>
#include<utility>
using namespace std;
int main()
{
    pair<int,string> p1(23,"Pyal");
    pair<int,string> p2;
    p2=make_pair(12,"Jeshi");
    
    cout<<(p1 == p2)<<endl;

    // auto p3=make_pair("Jacob", 'R');

    // initialize  pair with pair
    // pair<int,float> p4(p1);
    // pair<bool,float> p5;
    // p5.first=true;
    // p5.second="Ankit";
    // cout<<"before swapping: "<<endl;
    // cout<<p1.first<<" "<<p1.second<<endl;
    // cout<<p2.first<<" "<<p2.second<<endl;
    // p1.swap(p2);
    // cout<<"after swapping: "<<endl;
    // cout<<p1.first<<" "<<p1.second<<endl;
    // cout<<p2.first<<" "<<p2.second<<endl;
    // cout<<p3.first<<" "<<p3.second<<endl;
    // cout<<p4.first<<" "<<p4.second<<endl;
    // cout<<p5.first<<" "<<p5.second<<endl;
    return 0;

}