// Q3: Given a matrix ‘A’ of dimension n x m and 2 coordinates (l1, r1) and (l2, r2). Return the sum of the
// rectangle from (l1,r1) to (l2, r2).
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
    int l1,r1,l2,r2;
    cout<<"Enter l1,r1 : ";
    cin>>l1>>r1;
    cout<<"Enter l2,r2 : ";
    cin>>l2>>r2;
    int sum =0;
    for(int i=l1;i<=l2;i++){
        for(int j=r1;j<=r2;j++){
            sum+=arr1[i][j];
        }
    }
    cout<<"Sum : "<<sum;
    return 0;
}