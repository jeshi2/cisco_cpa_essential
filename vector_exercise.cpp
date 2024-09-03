#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector<int> vect1={10,2,-1,4,79,60};
    //sort
    sort(vect1.begin(),vect1.end());
    for(auto n:vect1)
    {
        cout<<n<<" ";
    }

    // vector<int> vect1={1,2,3,4,5};
    // vector<int> vect2={11,12,13,14,15};
    // // swap
    // vect1.swap(vect2);
    // cout<<"vector 1 after swap is: ";
    // for(auto n:vect1)
    // {
    //     cout<<n<<" ";
    // }
    // cout<<"\nvector 2 after swap is: ";
    // for(auto n:vect2)
    // {
    //     cout<<n<<" ";
    // }
    // return 0;


    // vector<int> v={1,2,3,4,5,6,7,8,9,10};
    // // erase vector
    // vector<int> :: iterator it;
    // it=v.begin();
    // while (it != v.end())
    // {
    //     if(*it % 2 == 0)
    //     {
    //         v.erase(it);
    //     }
    //     else{
    //         it++;
    //     }
    // }
    // for(auto n: v)
    // {
    //     cout<<n<<" ";
    // }
    // return 0;
    
}