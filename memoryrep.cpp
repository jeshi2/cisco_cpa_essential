#include<iostream>
using namespace std;
int main()
{
    
    int roll_no[5];
    cout<<"enter the roll no: ";
    for(int i=0;i<5;i++)
    {
        cin>>roll_no[i];
    }
    //cout<<roll_no;
    //access element
    cout<<"The roll no are:"<<roll_no[6];
    /*for(int i=0;i<5;i++)
    {
        cout<<roll_no[i]<<endl;
    }*/
    

    return 0;
    

}