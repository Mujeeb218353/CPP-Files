#include<iostream>
using namespace std;
void square(int a);
void cube(int a);
int main(){
	char name[10];
	int a;
	cout<<"Enter Your Name:";
    cin>>name;
	for(int i=0;i<10;i++){
	    if(i<=5){
	    	cout<<"Your Name:"<<name<<endl;
		}else if(i==6){
			cout<<"Continue...\n";
			continue;
		}else{
	    	break;
		}
	}
	cout<<"1.Day\n2.Square\n3.Cube\n";
	cout<<"Enter a Number:";
	cin>>a;
	switch(a){
		case 1:
			cout<<"Monday"<<endl;
			break;
		case 2:
			square(a);
			break;
		case 3:
			cube(a);
			break;
	    default:
	    cout<<"Invalid Number!!!";	
	}
	return 0;
}
void square(int a){
	cout<<"Square:"<<a*a;
}
void cube(int a){
	cout<<"Cube:"<<a*a*a;
}
