#include<bits/stdc++.h>
using namespace std;
int main()
{
 int i, n, j, k, a1, b1, c1, m;
 int inf=999999; 
 cin>>n>>m;
 int a[15][15];
 
 //初始化
 for(int i=1; i<=n; i++)//从城市i到城市j 
 {
  for(int j=1; j<=n; j++)
  {
   if(i==j)
   a[i][j]=0;//若为同一个城市则路程为0 
   else
   a[i][j]=inf;//若不同则置为最大路程 
  }
 }
 
 //输入已知路径
 for(int i=0; i<m; i++)
 {
  cin>>a1>>b1>>c1;
  a[a1][b1]=c1;
 }
 
 for(int i=1; i<5; i++)
 {
  for(int j=1; j<5; j++)
  printf("  a[%d][%d]:%7d",i, j, a[i][j]);
  cout<<endl;
 }
 cout<<endl;
 //将k作为转换因子放在最上面目的：
 //确保把将所有可能经过的城市都比较了一遍
 for(int k=1; k<=n; k++)
 for(int i=1; i<=n; i++)
 for(int j=1; j<=n; j++)
 if(a[i][j]>a[i][k]+a[k][j])
 a[i][j]=a[i][k]+a[k][j];
 //若从i到j的距离比从i到k再到j的距离大
 //就把原来的距离进行更新 
/* for(int i=1; i<5; i++)  //验证代码
 {
  for(int j=1; j<5; j++)
  printf("  a[%d][%d]:%7d",i, j, a[i][j]);
  cout<<endl;
 }*/
 
 for(int i=1; i<=n; i++)
 {
  for(int j=1; j<=n; j++)
  cout<<a[i][j]<<" ";
  cout<<endl;
 }
 return 0;
}
