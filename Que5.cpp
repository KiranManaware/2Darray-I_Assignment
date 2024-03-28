// Q5: Write a program to print the row number having the maximum sum in a given matrix.
// Input 1:
// 1 3 5 7
// 3 4 7 8
// 1 4 12 3
// Output 1: 2
// Explanation : The 2nd row has the maximum sum i.e. 1+4+12+3 = 20
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
    int sum =0;
    int idx;
    for(int i=0;i<n;i++){
        sum=0;
        for(int j=0;j<m;j++){
            sum+=arr1[i][j];
        }
        if(max<sum){
            max=sum;
            idx=i;
        } 
    }
    cout<<"max "<<max<<endl;
    cout<<"Row number : "<<idx;
    
    return 0;
}