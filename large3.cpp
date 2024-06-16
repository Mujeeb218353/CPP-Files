#include<iostream>
using namespace std;

void three_largest(int arr[], int arr_size)
  {
   int i, first, second, third;
  
    if (arr_size < 3)
    {
        cout << "Invalid Input";
    }
  /* In C and C++, INT_MIN is a macro that expands to the smallest (most negative) value that can be stored in a variable of type int.

In C and C++, INT_MAX is a macro that expands to the largest (most positive) value that can be stored in an int.

On most processors INT_MIN == -INT_MAX - 1, i.e., there is one more negative number than positive number in the range of legal values. 
INT_MAX defines a value for int above which the values cannot be accepted.

INT_MIN defines a value for int below which the values cannot be accepted.

INT_MIN and INT_MAX both are macros defined in #include <limits.h> in C & C++. The values of both these macros are compiler dependent 
because sizeof(int) is implementation defined in both C & C++. INT_MIN & INT_MAX macro defines minimum & maximum value for an int .
  */
    third = first = second = INT_MIN;
    for (i = 0; i < arr_size ; i ++)
    {
        if (arr[i] > first)
        {
            third = second;
            second = first;
            first = arr[i];
        }
         else if (arr[i] > second)
        {
            third = second;
            second = arr[i];
        }
  
        else if (arr[i] > third)
            third = arr[i];
    }
  
      cout << "\nThree largest elements are: \n" <<first <<"\n"<<second <<"\n"<<third;
      // to display elements in one line with comma
	  // cout << "\nThree largest elements are: " <<first <<", "<< second <<", "<< third;
}
int main()
{
    int nums[] = {7, 12, 9, 15, 19, 32, 56, 70};
    int n = sizeof(nums)/sizeof(nums[0]);
    cout << "Original array: ";
    for (int i=0; i < n; i++) 
    cout << nums[i] <<" ";
   three_largest(nums, n);
    return 0;
}


