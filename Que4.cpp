// Q4: Write a C++ program to find the largest element of a given 2D array of integers.
#include<iostream>
#include<climits>
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
    int max = INT_MIN;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
           if(max<arr1[i][j]) max=arr1[i][j];
        }
        
    }
    cout<<"Maximum element is : "<<max<<endl;
    
    return 0;
}