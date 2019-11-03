#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int n;
	cout<<"Enter the number of rows: ";
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=5;j++){
			if(j<=n-i){
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