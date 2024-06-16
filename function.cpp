#include<bits/stdc++.h> //function Questions
using namespace std;
int factorial(int n);
bool isPrime(int n);
void fibonacci(int n);
void pascalTriangle(int n);
int sumOfFirstNthNaturalNumbers(int n);
bool pythagorianTriplet(int x,int y,int z);
int octalToDecimal(int n);
void hexadecimalToDecimal(char n[1000]);
int main(){
	int find,n,num[n],n1,n2;
	char n3[1000];
	cout<<"1.Factorial\n2.Number is Prime or Not\n3.Fibonacci\n4.nCr\n5.Pascal Triangle\n6.Sum of N Natural Numbers\n";
	cout<<"7.Pythagorian Triplet\n8.Octal To Decimal\n9.Hexadecimal To Decimal\n";
	cout<<"What do you want to find?\nEnter:";
	cin>>find;
	switch(find){
		case 1:
			cout<<"How many numbers factorial you want to find?\nEnter:";
			cin>>n;
			for(int i=0;i<n;i++){
	            cout<<"Enter Number "<<i+1<<":";
	            cin>>num[i];
            }
    		for(int j=0;j<n;j++){
    		    cout<<num[j]<<"!="<<factorial(num[j])<<endl;
    		}
            break;
        case 2:
        	cout<<"From:";
			cin>>n;
			cout<<"To:";
			cin>>n1;
    		for(int j=n;j<n1;j++){
    		    if(isPrime(j)==true){
    		       cout<<j<<endl;
    		   }
            }
        	break;
        case 3:
        	cout<<"How many Fibonacci numbers you want to print?\nEnter:";
        	cin>>n;
        	fibonacci(n);
        	break;
        case 4:
        	cout<<"Enter n:";
        	cin>>n;
        	cout<<"Enter r:";
        	cin>>n1;
        	cout<<n<<"C"<<n1<<"="<<factorial(n)/(factorial(n1)*factorial(n-n1));
        	break;
        case 5:
        	cout<<"Enter Columns:";
        	cin>>n;
        	pascalTriangle(n);
        	break;
        case 6:
			cout<<"How many numbers sum you want?\nEnter Number:";
			cin>>n;
			cout<<sumOfFirstNthNaturalNumbers(n); 
			break;
		case 7:
			cout<<"Enter Numbers:";
			cin>>n>>n1>>n2;
			if(pythagorianTriplet(n,n1,n2)){
				cout<<"It's a Pythagorian Triplet";
			}else{
				cout<<"It's not a Pythagorian Triplet";
			}
			break;
		case 8:
			cout<<"Enter Octal Number:";
			cin>>n;
			cout<<n<<"=>"<<octalToDecimal(n);
			break;
		case 9:
			cout<<"Enter Hexadecimal Number:";
			cin>>n3;
			hexadecimalToDecimal(n3);
			break;
        default:
        cout<<"Invalid Number!";
        break;
    }
	return 0;
}
int factorial(int n){
	int result=1;
	for(int j=1;j<=n;j++){
		if(n>1)
		  result = result*j;
		else
		  return 1;
	}
	return result;
}
bool isPrime(int n){
	for(int i=2;i<n;i++){
	   if(n%i==0){
	      return false;
	    }
    }
	return true;
}
void fibonacci(int n){
	int t1=0,t2=1,result;
	if(n==1){
	       cout<<t1<<endl;
	    }else if(n==2){
	    	cout<<t1<<endl;
	        cout<<t2<<endl;
	    }else if(n>2){
	    	cout<<t1<<endl;
	        cout<<t2<<endl;
	        for(int i=0;i<n-2;i++){
	    	   result = t1 + t2;
	    	   t1 = t2;
	           t2 = result;
	           cout<<result<<endl;
	        }	
	}
}
void pascalTriangle(int n){
	for(int i=0;i<=n;i++){
		for(int j=0;j<=i;j++){
			cout<<factorial(i)/(factorial(j)*factorial(i-j))<<" ";//i=n and j=r
		}
		cout<<endl;
	}
}
int sumOfFirstNthNaturalNumbers(int n){
	int ans=0;
	for(int i=1;i<n;i++){
		ans+=i;
	}
	return ans;
}
bool pythagorianTriplet(int x,int y,int z){
	int a,b,c; // max (x,y); to find the max number also we can use it as max(x,max(y,z));
	a=max(x,max(y,z));
	if(a==x){
		b=y;
		c=z;
	}else if(a==y){
		b=x;
		c=z;
	}else{
		b=x;
		c=y;
	}
	int d = a*a;
	d = b*b + c*c;
	if(d){
		return true;
	}else{
		return false;
	}
}
int octalToDecimal(int n){
	int lastDigit,decimal,i=0;
	while(n>0){
		lastDigit = n%10;
		decimal += pow(8,i)*lastDigit;
		n/=10;
		i++;
	}
	return decimal;
}
void hexadecimalToDecimal( n[1000]){
	char decimal[1000];
	for(int i=0;i<'\0';i++){
		if(n[i]>='A' && n[i]<='F'){
			n[i]-=55;
		}else if(n[i]>='a' && n[i]<='f'){ 
			n[i]-=87;
		}
	} 
	for(int i=sizeof(n)-1;i>=0;i--){
		decimal[i] = pow(16,i)*n[sizeof(n)-i];
	}
	cout<<decimal;
}
