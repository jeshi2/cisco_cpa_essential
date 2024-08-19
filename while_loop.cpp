#include<iostream>
using namespace std;
int main ()
{
    int n;
    bool flag=false;
    while (!flag)
    {
        /* code */
        cout<<"enter a number between 2 and 7: ";
        cin>>n;
        if (n<=2 || n>=7)
        {
            /* code */
            cout<<"not a valid number";

        }else{
            cout<<"thanks !!!";
            flag=true;
        }
        
    }
    
    /**cout<<"enter number between 2 & 7: ";
    cin>>n;

    while (n<=2 || n>=7)
    {
        cout<<"please enter valid number: ";
        cin>>n;
    }**/

    /**cout<<"enter a positive number: start countdown: ";
    cin>>n;
    while (n>0)
    {
        cout<<n<<"\n";
        n--;
    }**/
    
    // cout<<"lets celebrate";
    return 0;
    
}