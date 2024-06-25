#include<iostream>
using namespace std;
int main()
{
    //bool b=false;

   // cout<<b<<endl;
   void *ptr;
   int x=10;

   bool p=45;
    ptr=&x;
    cout<<*(int*)ptr<<endl; // type casting
    cout<<p<<endl;

   /*float y=12.5;
   float z=true+x+false+y;

   cout<<z<<endl;
   cout<<sizeof(bool);
   if((x<y) ==true)
   {
    cout<<"x is lesser"<<endl;
   }
   else{
    cout<<"y is lesser"<<endl;
   }*/


    return 0;

}