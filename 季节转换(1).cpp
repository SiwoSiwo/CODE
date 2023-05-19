#include<iostream>
#include<string.h>
using namespace std;
class Season{
	public:
		int m;
	
		string Getseason(int number){
			if(number==1){
				cout<<"Spring"<<endl;
			}
			if(number==2){
				cout<<"Summer"<<endl;
			}
			if(number==3){
				cout<<"Fall"<<endl;
			}
			if(number==4){
				cout<<"Winter"<<endl;
			}
		}
		
};
int main()
{
	Season s;
	cin>>s.m;
	s.Getseason(s.m);
	
	return 0;
}
