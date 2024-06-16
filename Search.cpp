#include<iostream>
using namespace std;
int main(){
	int *ptr,n[]={1,2,3,4,5,6,7},i=1,loc=1;
	ptr = &n[0];
	cout<<ptr<<endl;
	while(i<=10){
	ptr = &n[i+1];
	cout<<i<<"."<<ptr<<endl;
	i++;	
	}
	cout<<i<<"."<<ptr;
	return 0;
}
