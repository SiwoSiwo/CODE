#include<bits/stdc++.h>
using namespace std;
int main()
{
 int i, n, j, k, a1, b1, c1, m;
 int inf=999999; 
 cin>>n>>m;
 int a[15][15];
 
 //��ʼ��
 for(int i=1; i<=n; i++)//�ӳ���i������j 
 {
  for(int j=1; j<=n; j++)
  {
   if(i==j)
   a[i][j]=0;//��Ϊͬһ��������·��Ϊ0 
   else
   a[i][j]=inf;//����ͬ����Ϊ���·�� 
  }
 }
 
 //������֪·��
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
 //��k��Ϊת�����ӷ���������Ŀ�ģ�
 //ȷ���ѽ����п��ܾ����ĳ��ж��Ƚ���һ��
 for(int k=1; k<=n; k++)
 for(int i=1; i<=n; i++)
 for(int j=1; j<=n; j++)
 if(a[i][j]>a[i][k]+a[k][j])
 a[i][j]=a[i][k]+a[k][j];
 //����i��j�ľ���ȴ�i��k�ٵ�j�ľ����
 //�Ͱ�ԭ���ľ�����и��� 
/* for(int i=1; i<5; i++)  //��֤����
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
