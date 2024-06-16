#include <iostream>
using namespace std;

int main(){
	int count=10, i, num=8, first, last, middle;
	int  arr[30] = {5,7,9,13,32,33,42,54,56,88};
//	cout<<"how many elements would you like to enter?:"; 
//  cin>>count;
//	for (i=0; i<count; i++){
//		cout<<"Enter number "<<(i+1)<<": "; 
//      cin>>arr[i];
//	}
//	cout<<"Enter the number that you want to search:"; 
//   cin>>num;
	first = 0;
	last = count-1;
	middle = (first+last)/2;
	while (first <= last){
	   if(arr[middle] < num){
			first = middle + 1;
		}else if(arr[middle] == num){
			cout<<"Search successfully done... \n"<<num<<" found in the array at the location "<<middle+1<<"\n"; 
        	break; 
        }else{ 
            last = middle - 1; 
        } 
        middle = (first + last)/2; 
    } 
    if(first > last){
	   cout<<num<<" not found in the array\nSearch is unsuccessfull...";
	}
	return 0;
}


