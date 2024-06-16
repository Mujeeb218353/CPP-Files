#include<iostream>
using namespace std;
template <class T>
class vector{
	public:
		T *arr;
		int size;
		vector(T m){
		size = m;
		arr = new T[size];	
		}
		T dotProduct(vector &v){
			T dot=0;
			for(int i=0;i<size;i++){
				dot+=this->arr[i]*v.arr[i];
			}
			return dot;
		}
};
int main(){
	vector <float>v1(2);
	v1.arr[0]=5.5;
	v1.arr[1]=3.2;
	vector <float>v2(2);
	v2.arr[0]=4.3;
	v2.arr[1]=2.9;
	float a=v1.dotProduct(v2);
	cout<<a<<endl; 
	return 0;
}
