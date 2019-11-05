#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int n,k;
	cout<<"Enter the number of rows: ";
	cin>>n;
	for(int i=1;i<=n;i++){
		k=0;
		while(k!=n-i){
			cout<<" ";
			k++;
		}
		for(int j=1;j<=i;j++){
			cout<<"*";
		}
		cout<<endl;
	}
	for(int i=n-1;i>=1;i--){
		k=0;
		while(k!=n-i){
			cout<<" ";
			k++;
		}
		for(int j=1;j<=i;j++){
			cout<<"*";
		}
		cout<<endl;
	}

	return 0;
	getch();
}