#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;
pair<double, double> calVarStdev(vector<int> vecNums)
{
	pair<double, double> res;
	double sumNum = accumulate(vecNums.begin(),vecNums.end(),0.0);
	double mean = sumNum / vecNums.size();
	double accum = 0.0;
	for_each(vecNums.begin(),vecNums.end(),[&](const double d){
	   accum += (d - mean)*(d - mean);	
	});
	double variance = accum / vecNums.size();
	double stdev = sqrt(variance);
	cout << "��ֵ��"<< mean <<endl<<"���"<<variance<<endl<<"��׼�"<<stdev<<endl;
	res.first = variance;
	res.second = stdev;
	return res; 
}
int main()
{
	pair<double,double> res;
	vector<int> vecNums;
	
	vecNums.push_back(1);
	vecNums.push_back(3);
	vecNums.push_back(5);
	vecNums.push_back(7);
	vecNums.push_back(9);
	cout<<"��������Ϊ��"<<endl;
	for(int i=0;i < vecNums.size();i++)
	{
		if(i!=vecNums.size()-1)
			cout<<vecNums[i]<<","
		else
			cout<<vecNums[i]<<endl;
	}
	cout<<"������Ϊ��"<<endl;
	res = calVarStdev(vecNums);
	return 0; 
}
