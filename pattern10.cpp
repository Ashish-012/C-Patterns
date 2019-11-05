#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int n,k;
	cout<<"Enter the number of rows: ";
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		k=1;
			while(k!=2*i){
				cout<<" ";
				k++;
			}
		for(int j=1;j<=n-i+1;j++){
			cout<<"*";
		}
		cout<<endl;
	}
	return 0;
	getch();
}