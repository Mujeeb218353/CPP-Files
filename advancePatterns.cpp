#include<iostream>
using namespace std;
void invertedPattern();
void pattern0_1();
void rhombusPattern();
void numberPattern();
void palindromicPattern();
void starPattern();
void zigZagPattern();
void zigZagPattern1();
int main(){
	int a;
	cout<<"Which Pattern do want to Print?"<<endl;
	cout<<"1.Inverted Pattern\n2.Pattern 0-1\n3.Rhombus Pattern\n4.Number Pattern\n5.Palindromic Pattern\n6.Star Pattern\n7.Zig Zag Pattern\n8.Zig Zag Pattern 1\n";
	cout<<"Enter Number:";
	cin>>a;
	switch(a){
		case 1:
		    invertedPattern();
			break;
		case 2:
			pattern0_1();
			break;
		case 3:
			rhombusPattern();
			break;
		case 4:
		    numberPattern();
			break;
		case 5:
			palindromicPattern();
			break;
		case 6:
			starPattern();
			break;
		case 7:
			zigZagPattern();
			break;
        case 8:
			zigZagPattern1();
			break;			
		default:
		cout<<"Invalid Number!!!";
	}
	return 0;
}
void invertedPattern(){
	int row;
	cout<<"Enter Rows:";
	cin>>row;
	for(int i=1;i<=row;i++){
		for(int j=1;j<=row+1-i;j++){
			cout<<j<<" ";
		}
		cout<<endl;
	}
}
void pattern0_1(){
	int n;
	cout<<"Enter Columns:";
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			if((i+j)%2==0){
				cout<<"1";
			}else{
				cout<<"0";
			}
		}
		cout<<endl;
	}
}
void rhombusPattern(){
	int row;
	cout<<"Enter Rows:";
	cin>>row;
	for(int i=1;i<=row;i++){
		for(int j=1;j<=row-i;j++){
			cout<<" ";
		}
		for(int k=1;k<=row;k++){
			cout<<"* ";
		}
		cout<<endl;
	}
}
void numberPattern(){
	int row;
	cout<<"Enter Rows:";
	cin>>row;
		for(int i=1;i<=row;i++){
		for(int j=1;j<=row-i;j++){
			cout<<" ";
		}
		for(int k=1;k<=i;k++){
			cout<<k<<" ";
		}
		cout<<endl;
	}
}
void palindromicPattern(){
	int row;
	cout<<"Enter Rows:";
	cin>>row;
		for(int i=1;i<=row;i++){
		for(int j=1;j<=row*2-i*2;j++){
			cout<<" ";
		}
		for(int l=i;l>=2;l--){
			cout<<l<<" ";
		}
		for(int k=1;k<=i;k++){
			cout<<k<<" ";
		}
		cout<<endl;
	}
}
//anothter logic of Palindromic Pattern
//void palindromicPattern(){
//	int row;
//	cout<<"Enter Rows:";
//	cin>>row;
//		for(int i=1;i<=row;i++){
//			int j;
//		    for(j=1;j<=row-i;j++){
//		    	cout<<"  ";
//		    }
//		    int k=i;
//		    for(;j<=row;j++){
//			    cout<<k--<<" ";
//		    }
//		    k=2;
//		    for(;j<=row+i-1;j++){
//			    cout<<k++<<" ";
//		    }
//		    cout<<endl;
//	}
//}
void starPattern(){
	int n;
	cout<<"Enter Number:";
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int k=1;k<=n-i;k++){
			cout<<"  ";
		}
		for(int j=1;j<=2*i-1;j++){
			cout<<"* ";
		}
		cout<<endl;
	}
	for(int i=n-1;i>=1;i--){
		for(int k=1;k<=n-i;k++){
			cout<<"  ";
		}
		for(int j=1;j<=2*i-1;j++){
			cout<<"* ";
		}
		cout<<endl;
	}
}
void zigZagPattern(){
	int n;
	cout<<"Enter Number:";
	cin>>n;
	for(int i=1;i<=3;i++){
		for(int j=1;j<=n;j++){
			if((i+j)%4==0 || i==2 && j%4==0){
				cout<<"*";
		    }else{
			    cout<<" ";
		    }
		}
		cout<<endl;
	}
}
void zigZagPattern1(){
	int row,col,space;
	cout<<"Enter Rows:";
	cin>>row;
	cout<<"Enter Columns:";
	cin>>col;
	space=row-1;
	for(int i=1;i<=col;i++){
		for(int j=1;j<=i;j++)
	    space--;
		cout<<endl;
	}
}
