#include <iostream>
using namespace std;
int main()
{
	long n;
	int type, r, i, m=0, s[100];
	cin>>i;
	for(int j=0;j<i;j++)
	{
		for(int q=0;q<m;q++)
		{
			s[q]=0;
		}
		m=0;
		cin>>n;
		cin>>type;
		while(n!=0)
		{
			r=n%type;
			n=n/type;
			m++;
			s[m]=r;
		}
		for(int k=m;k>=1;k--)
		{
			if(s[k]>=10)
				cout<<(char)(s[k]+55);
			else
				cout<<s[k];
		}
		cout<<endl;
	}
}
