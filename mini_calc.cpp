#include<iostream>
using namespace std;


int get_sum(int n1, int n2){
	return n1+n2;
	
}
int get_diff(int n1, int n2){
	return n1-n2;
}
int get_prod(int n1, int n2){
	return n1*n2;
}
int get_quo(int n1, int n2){
	return n1/n2;
}

int main()
{
	int n1,n2;
	cout<<"Enter 1st number: ";
	cin>>n1;
	cout<<"Enter 2nd number: ";
	cin>>n2;
	

	cout<<" Sum is :"<< get_sum(n1, n2)<<endl;
	cout<<" Difference is :" <<get_diff(n1, n2)<<endl;
	cout<<" Product is :" << get_prod(n1, n2)<<endl;
	cout<<" Quotient is :" <<get_quo(n1, n2)<<endl;
	return 0;
}
