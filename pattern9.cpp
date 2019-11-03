#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int n;
	cout<<"Enter the number of rows: ";
	cin>>n;
	for(int i=n;i>=1;i--)
	{
		for(int j=0;j<n;j++){
			if(j<n-i){
				cout<<" ";
			}
			else{
				cout<<"*";
			}
		}
		cout<<endl;
	}
	return 0;
	getch();
}