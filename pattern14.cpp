#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int n,k;
	cout<<"Enter the number of rows: ";
	cin>>n;
	for(int i=1;i<=n;i++){
		k=1;
		for(int j=1;j<=n-i;j++){
				cout<<" ";
		}
			while(k<=2*i-1){
				cout<<k;
				k++;
			}
		cout<<endl;
	}

	return 0;
	getch();
}