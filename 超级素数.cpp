#include <bits/stdc++.h>
using namespace std;
queue<int>q;
vector<int>a;
int x;
bool pzs(int n){
	if(n<2) 
	return 0;
	for(int i=2;i*i<=n;i++)
	{
		if(n%i==0)
		return 0;
	}
	return 1;
}
int main()
{
	cin>>x;
	q.push(2);
	q.push(3);
	q.push(5);
	q.push(7);
	while(!q.empty())
	{
		int t=q.front();
		if(t>x)
		break;
		a.push_back(t);
		q.pop();
		for(int i=1;i<=9;i+=2)
			if(pzs(t*10+i))
			q.push(t*10+i);
	}
	for(int i=0;i<a.size();i++)
		cout<<a[i]<<' ';
	return 0;
}
