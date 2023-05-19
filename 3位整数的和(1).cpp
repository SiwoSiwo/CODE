#include<iostream>
using namespace std;
class Number{
	public:
		int mt;//数值大小
	    int n;
	int Get(int count)
	{
		return count%10;
	}	
		 
};
int main()
{
	Number m;
	int i=0;

	cin>>m.mt;
	m.n=0;
	for(i=0;i<3;i++){
		m.n=m.n+m.Get(m.mt);
			m.mt=m.mt/10;	
	}
	cout<<m.n<<endl;
	return 0;	
}
