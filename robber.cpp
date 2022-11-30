#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int nums[n];
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    int sum=0;
    int sum2=0;
    for(int i=0;i<n;i++){
        if(nums[i]>sum){
                sum=sum+nums[i];
            }
        }
        for(int j=1;j<n;j+=2){
            if(nums[j]>sum2){
                sum2=sum2+nums[j];
            }
        }
        cout<<sum<<" "<<sum2;
        
    }