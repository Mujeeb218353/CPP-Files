#include<iostream>
using namespace std;
int main(){
    int n,Data[n],item,Loc,start=0,end=n-1,mid=(start+end)/2;
    cout<<"Enter Number of Items:";
	cin>>n;
	for(int i=0;i<=n-1;i++){
		cin>>Data[i];
	}
	cout<<"Enter Items:";
	cin>>item;
	int j=0;
    while(item!=Data[mid]){
        mid=(start+end)/2;
	    if(item == Data[mid]){
	       cout<<"Search is Successfull..."<<endl;
	       cout<<"Location of "<<item<<" is:"<<Loc;
	       Loc=mid;
		}else if(j>n){
			Loc = '\0';
			cout<<"Search is Successful\nItem isn't Found!!!"<<endl;
			cout<<"Location of "<<item<<" isn't null...";
			break;
		}else if(item < Data[mid]){
		   end = mid - 1;
		}else if(item > Data[mid]){
		   start = mid + 1;
		}
        j++;
	}
	return 0;
}
