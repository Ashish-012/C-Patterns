#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int n,x=1;
	cout<<"Enter the number of rows: ";
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=i;j++){
			cout<<x;
		}
		cout<<endl;
		x++;
	}
	return 0;
	getch();
}