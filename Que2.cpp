// Write a program to add two matrices and save the result in one of the given matrices.
#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cout<<"Enter n:";
    cin>>n;
    cout<<"Enter m:";
    cin>>m;
    cout<<"Enter element of the array 1"<<endl;
    int arr1[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr1[i][j];
        }
    }
    cout<<"Enter element of the array 1"<<endl;
    int arr2[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
           cin>>arr2[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            arr1[i][j]+=arr2[i][j];
        }
        
    }
    cout<<"Array 1"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr1[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}