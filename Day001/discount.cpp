#include<iostream>
using namespace std;
int main()
{
	float amount,discount,disc;
	cout<<"\nEnter Purchasing";
	cin>>amount;
	cout<<"\n Enter discount";
	cin>>disc;
	discount=(amount*disc)/100;
	cout<<"\n Purchasing Amount is"<<amount;
	cout<<"\n Discount is"<<discount;
	cout<<"\n Net Payable is"<<amount-discount;
	return 0;
	
}