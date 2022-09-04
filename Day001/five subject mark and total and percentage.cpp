#include<iostream>
using namespace std;
int main()
{
	int a,b,c,d,e,total;
	float percentage;
	cout<<"\n Enter Marks of 5 Subject ";
	cin>>a>>b>>c>>d>>e;
	total=a+b+c+d+e;
	percentage=(total*100)/500;
	cout<<"\n Total Marks="<<total;
	cout<<"\n percentage="<<percentage;
	return 0;
	}