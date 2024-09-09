#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str1;
    // cout<<"enter your name: ";
    // // cin>>str1;
    // getline(cin,str1);
    // cout<<str1;
    // str1=("Jacob Ogolla");
    // // cout<<str1[7]<<endl;
    // // cout<<str1.at(17);
    // for(int c: str1)
    // {
    //     cout<<c<<endl;
    // }

    str1=("Antony");
    string str2={"James"};
    string str3 {str2};
    string str4 (10, 'a');
    string str5 {str1,3};
    // string str6 ={"Pradeep",3};
    // cout<<str1+" "+str2+"Lamba";
    // cout<<"length is str1 is:"<<str1.size();
    cout<<(str1<str2)<<endl;
    cout<<(str1==str2);
    // cout<<str1<<endl<<str3<<endl;
    // cout<<str4;
    // cout<<str5<<endl<<str6;
}