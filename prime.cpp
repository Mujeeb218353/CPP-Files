#include<iostream> // Number Prime or Not
using namespace std;
int main(){
	int n;
	bool flag=0;
	cout<<"Enter a Number:";
	cin>>n;
	for(int i=2;i<n;i++){
		if(n%i==0){
			cout<<"Non-Prime Number!!!";
			flag=1;
			break;
		}
	}
	if(flag==0){
	   cout<<"Prime Number...";	
	}
	return 0;
}
