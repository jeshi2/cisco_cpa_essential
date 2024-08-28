#include<iostream>
using namespace std;
int main()
{
    /*int arr[15]={0};
    arr[0]=10;
    arr[14]=150;
    for(int i=0;i<15;i++)
    {
        cout<<arr[i]<<endl;

    }
    return 0;*/

    /*int i=0;
    int arr1[5], arr2[5],arr3[5];
    cout<<"enter first array elements: ";
    for(i=0; i<5;i++)
    {
        cin>>arr1[i];
    }
    cout<<"Enter second array elements: ";
    for(i=0; i<5;i++)
    {
        cin>>arr2[i];
    }
    for(i=0;i<5;i++)
    {
        arr3[i]=arr1[i]+arr2[i];
        cout<<"Sum at index "<<i<<" is "<<arr3[i]<<endl;
    }*/

    // Two sum problem
    /*int i=0;
    int nums[4]={2,7,11,15};
    int target=26;
    for(i=0;i<4;i++)
    {
        for(int j=i+1;j<4;j++)
        {
            if(target==(nums[i]+nums[j]))
            {
                cout<<i<<" "<<j<<endl;
            }
        }
    }
    cout<<"No such number exist.";*/

    //Single number in array
    int nums[5]={4,1,2,1,2};
    int ans=0;
    for(int i=0;i<5;i++)
    {
        ans = ans ^ nums[i];
    }
    cout<<ans<<endl;
    return 0;
}