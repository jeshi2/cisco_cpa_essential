#include<iostream>
using namespace std;
int main()
{
    /**for(int i=1;i<=10;i++)
    {
        
        if(i==7)
        {
            continue;
        }
        cout<<i<<endl;
    }*/

   int  num,i=1,total=0;
   while(i<=10)
   {
        cout<<"enter a number: ";
        cin>>num;
        i++;
        if(num<0)
        {
            continue;
        }
        total += num;
        
   }
   cout<<total;
    return 0;
}