#include<iostream>
using namespace std;
int main(){
	int f(int x,int y);
	int x,y,xdeycifang;
	cout<<"Please input x :"<<endl;
	cin>>x;
	cout<<"Please input y :"<<endl;
	cin>>y;
	xdeycifang=f(x,y);
	cout<<"xdeycifang is : "<<xdeycifang;

}
int f(int x,int y ){
	int n;
	if(1==y)
		n=x;
	else n=x*f(x,y-1);
	return (n);
}

