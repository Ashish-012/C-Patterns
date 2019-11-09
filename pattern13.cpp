#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int n,k;
	cout<<"Enter the number of rows: ";
	cin>>n;
	for(int i=0;i<=n/2;i++){
		for(int j=0;j<n;j++){
			if((j>=n/2-i)&&(j<=n/2+i)){
				cout<<" ";	
			}
			else{
				cout<<"*";
			}
		}
		cout<<endl;
	}
	for(int i=0;i<n/2;i++){
		for(int j=0;j<n;j++){
			if(j<=i||j>=n-i-1){
				cout<<"*";
			}
			else
				cout<<" ";
		}
		cout<<endl;
	}

	return 0;
	getch();
}