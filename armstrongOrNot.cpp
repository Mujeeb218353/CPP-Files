#include<iostream> // Number is armstrong or not
#include<math.h>
using namespace std;
int main(){
	int n,lastDigit,armstrong;
	cout<<"Enter a Number:";
	cin>>n;
	int originalN=n;
	while(n>0){
	lastDigit = n%10;
	armstrong = pow(lastDigit,3)+armstrong;
	n/=10;	
	}
	if(armstrong==originalN){
		cout<<"Armstrong Number...";
	}else{
		cout<<"It's not an Armstrong Number!!!";
	}
	return 0;
}
