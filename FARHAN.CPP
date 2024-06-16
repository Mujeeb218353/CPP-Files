#include<iostream>
using namespace std;
int main(){
	int num,arr[num];
	cout<<"Enter Number:";
	cin>>num;
	for(int i=0;i<num;i++){
	    cin>>arr[i];
	}
	for(int i=0;i<num-1;i++){
		for(int j=i+1;j<num;j++){
		    if(arr[i]>arr[j]){
			   int temp=arr[i];
			   arr[i]=arr[j];
			   arr[j]=temp;
		    }
	    }
	}
	cout<<"Elements"<<endl;
	for(int k=0;k<
	num;k++){
	    cout<<arr[k]<<endl;
	}
	return 0;
}
