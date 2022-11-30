#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,fivecoin,tencoin,sum=0;
        cin>>n;
        tencoin=n/10;
        fivecoin=(n%10)/5;
        sum=sum+tencoin+fivecoin;
        if(sum>0){
             cout<<sum<<endl;
        }
        else{
            cout<<-1<<endl;
        }
       
    }
}