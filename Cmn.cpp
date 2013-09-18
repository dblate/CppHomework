#include<iostream>
	using namespace std;
	int main(){
		int fac(int x);
		int m,n,Amn=1;
		float Cmn;
		cout<<"Please input m :"<<endl;
		cin>>m;
		cout<<"Please input n :"<<endl;
		cin>>n;
		for(int i=m;i>=m-n+1;i--){
			Amn=Amn*i;
}
		Cmn=Amn/fac(n);
		cout<<"The Cmn is: "<<Cmn<<endl;
	return 0;
}
	int fac(int x){
		int facN=1;
		for(int j=1;j<=x;j++){
			facN=facN*j;
}	
	return (facN);
}
