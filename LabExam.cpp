#include<iostream>
using namespace std;
int main(){
	int n,a[n];
	cout<<"Enter Number of Elements You Want to Sort:";
	cin>>n;
	for(int i=0;i<n;i++){
		cout<<"Enter Elements:";
	    cin>>a[i];
	}
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
		    if(a[i]>a[j]){
			   int temp=a[i];
			   a[i]=a[j];
			   a[j]=temp;
		    }
	    }
	}
	cout<<"Sorted Elements:";
	for(int k=0;k<n;k++){
	    cout<<a[k]<<" ";
	}
	return 0;
}
