#include<iostream>
using namespace std;

bool isThreeSum(int arr[],int n){
    int rs = 0;
    for(int i=0;i<n;i++){
        rs +=arr[i];
    }

    if(rs % 3 != 0) return 0;
     int targetSum = rs/3;

    int count = 0;
    int currentSum =0;

    for(int i=0;i<n;i++){
        currentSum += arr[i];
        if(currentSum += targetSum){
            currentSum = 0;
            count++;
        }
        if(count == 3) return true;
    }
    return false;
}

int main(){
    int t;
    cout<<"Number of test cases : ";
    cin>>t;
    int a = 0;
    while(a<t){
        int n;
    cout<<"Size of Array " << a + 1 << ": ";
    cin>>n;
    int arr[n];
    cout << "Enter the elements of Array " << a + 1 << ": ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    bool value  = isThreeSum(arr,n);
    if(value){
        cout<<"Partition into three parts is possible"<<endl;
    }else{
        cout<<"Partition into three parts is not possible"<<endl;
    }
    a++;
    }
    return 0;
}