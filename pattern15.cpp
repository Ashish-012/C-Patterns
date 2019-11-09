#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int n;
	cout<<"Enter the number of rows: ";
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n-i;j++){
			cout<<" ";
		}
		for(int k=1;k<=2*i-1;k++){
			if(k==1||k==2*i-1)
				cout<<i;
			else
				cout<<"0";
		}
		cout<<endl;
	}
	return 0;
	getch();
}