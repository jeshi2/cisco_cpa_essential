#include<iostream>
using namespace std;
int main()
{
    /*int n=5;
    while(n++<=10)
    {
        int roll_no[n];
        cout<<"Array size is: "<<n<<endl;
    }*/

    /*extern int a[]; // declaration
    int roll_no[]={1,4,8,0,-5};*/
    
    int roll_no[5];
    cout<<"enter the roll no: ";
    for(int i=0;i<5;i++)
    {
        cin>>roll_no[i];
    }

    return 0;
    

}