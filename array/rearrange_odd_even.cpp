#include <iostream>

using namespace std;

void rearrange( int A[], int sz)
{
	int B[sz];
	int even = sz/2;
	int odd = sz - even;

	for(int i = 0; i < sz ; i++)
	{
		B[i] = A[i];
	}
	
	sort(B, B+sz);
	
	int b = odd - 1;
	
	for(int i = 0; i < n; i = i+2)
	{
		A[i] = B[b];
		j--;
	}

	b = odd;

	for(int i = 1;  i < n; i = i+2)
	{
		A[i] = B[b];
		j++;
	}
	
	for (int i = 0; i < n; i++) 
        	cout << arr[i] << " "; 
}


int main() 
{ 
    int arr[] = { 1, 2, 3, 4, 5, 6, 7 }; 
    int size = sizeof(arr) / sizeof(arr[0]); 
    rearrangeArr(arr, size); 
    return 0; 
} 

