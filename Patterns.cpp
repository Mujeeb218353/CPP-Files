#include<iostream>
using namespace std;
void hRect();
void Rect();
void invertedHalfPyramid();
void HalfPyramidAfter180Rotation();
void HalfPyramidUsingNumber();
void ButterflyPattern();
int main(){
	int a;
	cout<<"Which Pattern do want to Print?"<<endl;
	cout<<"1.Rectangle\n2.Hollow Rectangle\n3.Inverted Half Pyramid\n4.Half Pyramid After 180 Rotation\n5.Half Pyramid Using Number\n6.Butterfly Pattern\n";
	cout<<"Enter Number:";
	cin>>a;
	switch(a){
		case 1:
		    Rect();
			break;
		case 2:
			hRect();
			break;
		case 3:
			invertedHalfPyramid();
			break;
		case 4:
			HalfPyramidAfter180Rotation();
			break;
		case 5:
			HalfPyramidUsingNumber();
			break;
		case 6:
			ButterflyPattern();
			break;
		default:
		cout<<"Invalid Number!!!";
	}
	return 0;
}
void Rect(){
	int row,col;
	cout<<"Enter Rows:";
	cin>>row;
	cout<<"Enter Columns:";
	cin>>col;
	for(int i=0;i<=col;i++){
		for(int j=0;j<=row;j++){
			cout<<"*";
		}
		cout<<endl;
	}
}
void hRect(){
	int row,col;
	cout<<"Enter Rows:";
	cin>>row;
	cout<<"Enter Columns:";
	cin>>col;
	for(int i=1;i<=col;i++){
		for(int j=1;j<=row;j++){
			if(i==1 || i==col || j==1 || j==row){
			   cout<<"*";
		    }else{
		    	cout<<" ";
			}
		}
		cout<<endl;
	}	
}
void invertedHalfPyramid(){
	int row,col;
	cout<<"Enter Rows:";
	cin>>row;
	for(int i=row;i>=1;i--){
		for(int j=i;j>=1;j--){
			cout<<"*";
		}
		cout<<endl;
	}
}
void HalfPyramidAfter180Rotation(){
	int row,col,decrement;
	cout<<"Enter Rows:";
	cin>>row;
	decrement=row;
	for(int i=1;i<=row;i++){
		for(int j=1;j<=row;j++){
			if(j<=row-i){
			   cout<<" ";
		    }else{
		    	cout<<"*"; 
			}
		}
		cout<<endl;
	}
}
void HalfPyramidUsingNumber(){
	int col,count=1;
	cout<<"Enter Columns:";
	cin>>col;
	for(int i=1;i<=col;i++){
		for(int j=1;j<=i;j++){
			cout<<" "<<count;
			count++;
		}
		cout<<endl;
	}
}
void ButterflyPattern(){
	int n;
	cout<<"Enter Number:";
	cin>>n;
	for(int i=1;i<=n;i++){
		   for(int j=1;j<=i;j++){
			   cout<<"*";
		    }
           int space=n*2-i*2;
           for(int k=1;k<=space;k++){
        	   cout<<" ";
		    }
		   for(int l=1;l<=i;l++){
			   cout<<"*";
		    }
		cout<<endl;
    }
    for(int i=n-1;i>=1;i--){
		   for(int j=i;j>=1;j--){
			   cout<<"*";
		    }
           int space=n*2-i*2;
           for(int k=space;k>=1;k--){
        	   cout<<" ";
		    }
		   for(int l=i;l>=1;l--){
			   cout<<"*";
		    }
		cout<<endl;
    }
}
