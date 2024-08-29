#include<iostream>
using namespace std;
int main()
{
    float marks[2][3]={45.56,56.67,78.89,90.99,89.90,67};
    int arr[2][4];//{{1,2,3,4},{6,7,8,9},{2,3}};
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<4;j++)
        {
            cin>>arr[i][j];
        }
    }
    // char name[15];
    // cout<<"size of array1(marks): "<<sizeof(marks)<<"bytes"<<endl;
    // cout<<"size of array2(marks): "<<sizeof(arr)<<"bytes"<<endl;
    // cout<<"size of array3(marks): "<<sizeof(name)<<"bytes"<<endl;
    return 0;
}