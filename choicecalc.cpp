#include<iostream>
using namespace std;
int main()
{
    char choice;
    do
    {
        int a,b, sum=0, sub=0, mul=0, div=0;
        cout<<"\n******************************"<<endl;
        cout<<"1. Addition"<<endl;
        cout<<"2. Subtraction"<<endl;
        cout<<"3. Multiplication"<<endl;
        cout<<"4. Division"<<endl;
        cout<<"Q. Quit"<<endl;
        cout<<"Enter your choice: ";
        cin>>choice;
        

        if(choice =='1')
        {
            cout<<"You chose 1...Addition"<<endl;
            cout<<"Enter two number separated by space: ";
            cin>>a>>b;
            sum=a+b;
            cout<<"Addition is: "<<sum<<endl;
        }
        else if (choice == '2')
        {
            cout<<"You chose 2...Subtraction"<<endl;
            cout<<"Enter two number separated by space: ";
            cin>>a>>b;
            sub=a-b;
            cout<<"Subtraction is: "<<sub<<endl;
        }
        else if (choice == '3')
        {
            cout<<"You chose 3...Multiplication"<<endl;
            cout<<"Enter two number separated by space: ";
            cin>>a>>b;
            mul=a*b;
            cout<<"Multiplication is: "<<mul<<endl;
        }
        else if (choice == '4')
        {
            cout<<"You chose 3...Division"<<endl;
            cout<<"Enter two number separated by space: ";
            cin>>a>>b;
            div=a/b;
            cout<<"Division is: "<<div<<endl;
        }
        else if (choice == 'q' || choice == 'Q')
        {
            cout<<"Good Bye..."<<endl;
        }
        else {
            cout<<"Wrong choice... Try again!!!"<<endl;
        }
        
        
    } while (choice != 'q' && choice != 'Q');

    return 0;

    
}