#include <iostream>
using namespace std;
int trans(int n)
{
	if(n<8)
	return n;
	else return n%8+10*(trans(n/8));
}
int main(){
	int n;
	cin>>n;
	cout<<trans(n)<<endl;
	return 0;
}
