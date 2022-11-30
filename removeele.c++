#include <iostream>
using namespace std;
int main(){
int n;
 cin>>n;
    int nums[n];
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
int val;
int temp=0;
cin>>val;
for(int i=0;i<n-1;i++){
    if(nums[i]==val){
        temp=nums[i];
        for(int j=i;j<n;j++){
            nums[j]=nums[j+1];
        }
        nums[n-1]=temp;
    }
}
for(int i=0;i<n;i++){
    cout<<nums[i];
}
}