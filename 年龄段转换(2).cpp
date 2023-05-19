#include<iostream>
using namespace std;
class Age{
	public:
		int m;
		void Get(int age){
			if(age>=1&&age<=10){
				cout<<"Children"<<endl;
			}else if(age<=20){
				cout<<"Teenagers"<<endl;
			}else if(age<=40){
				cout<<"Youth"<<endl;
			}else if(age<=50){
				cout<<"middle-aged"<<endl;
			}else if(age<=80){
				cout<<"Elderly"<<endl;
			}else if(age<=100){
				cout<<"Old man"<<endl;
			}
		}
};
int main()
{
	Age a;	
	cin>>a.m;
	a.Get(a.m);
	return 0;
}
	
