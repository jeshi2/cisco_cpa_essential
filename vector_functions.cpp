#include<iostream>
#include<vector>
using namespace std;
int main()
{
    // vector<int> v={1,2,3,4,0,78,8,9};
    // vector<int>:: iterator it;
    // for(it=v.begin()+1; it != v.end(); it++)
    // {
    //     cout<<*it<<" ";
    // }
    // vector<int>:: reverse_iterator rit;
    // for(rit=v.rbegin(); rit != v.rend(); rit++)
    // {
    //     cout<<*rit<<" ";
    // }
    // size() max_size() capacity()
    // vector<char>  vowels={'a','e','i','o'};
    // vector<int> v;

    // v.resize(10,50);
    // v.reserve(100);
    // if(v.empty())
    // {
    //     cout<<"no element in vector v."<<endl;
    // }
    // for(int i=0;i<v.size();i++)
    // {
    //     cout<<v.at(i)<<" ";
    // }
    // cout<<"\nsize of vector v is: "<<v.size();
    // cout<<"\ncapacity of vector v is: "<<v.capacity();
    // v.shrink_to_fit();
    // cout<<"\ncapacity of vector v is: "<<v.capacity();

    // cout<<"size of vector vowels is: "<<vowels.size()<<endl;
    // cout<<"max size of vector vowels is: "<<vowels.max_size()<<endl;
    // cout<<"capacity of vector vowels is: "<<vowels.capacity()<<endl;
    // vowels.push_back('u');
    // cout<<"size of vector vowels is: "<<vowels.size()<<endl;
    // cout<<"max size of vector vowels is: "<<vowels.max_size()<<endl;
    // cout<<"capacity of vector vowels is: "<<vowels.capacity()<<endl;
    // vowels.resize(3);
    // for(int i=0;i<vowels.size();i++)
    // {
    //     cout<<vowels.at(i)<<" ";
    // }

    // Modifiers
    // vector<int> v;
    // int val;
    // do{
    //     cout<<"enter element(0 to exit): ";
    //     cin>>val;
    //     v.push_back(val);
    // }while (val);
    // cout<<"vector elements before pop back are: "<<endl;
    // for(int i=0;i<v.size();i++)
    // {
    //     cout<<v[i]<<" "<<endl;
    // }
    // v.pop_back();
    // v.pop_back();
    // cout<<"vector elements after pop back are: "<<endl;
    // for(int i=0;i<v.size();i++)
    // {
    //     cout<<v[i]<<" "<<endl;
    // }

    vector<int> v={1,2,4,5,6,0,98};
    // v.erase(v.begin()+3);
    v.erase(v.begin()+1,v.begin()+4);
    cout<<"vector elements after clear are: "<<endl;
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    // vector<int> :: iterator it;
    // it=v.begin()+2;
    // v.insert(it,10,80);
    // cout<<"vector elements after insertion are: "<<endl;
    // for(int i=0;i<v.size();i++)
    // {
    //     cout<<v[i]<<" "<<endl;
    // }
    // v.clear();
    // cout<<"vector elements after clear are: "<<endl;
    // for(int i=0;i<v.size();i++)
    // {
    //     cout<<v[i]<<" "<<endl;
    // }

   
    


    return 0;
}