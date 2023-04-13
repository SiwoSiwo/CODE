#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        int p=1;
        cout<<setw(3*(n-i)+1)<<p;
        for(int j=1;j<i;j++){
            p=p*(i-j)/j;
            cout<<setw(6)<<p;
        }
        cout<<endl;
    }
    return 0;
}