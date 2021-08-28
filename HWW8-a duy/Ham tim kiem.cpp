//Hàm tìm kiem
#include <iostream>
#include <array>
using namespace std;
int search(int arr[], int key, int n)
{
	for (int i=0; i<n; i++)
	{
		if (arr[i]==key)
		{
			return i;
		}
	}
	return -1;
}

int main()
{
	int arr[]={1, 2, 3, 4};
	int key=3;
	int n=sizeof(arr)/sizeof(arr[0]);
	int result=search(arr, key, n);
	cout<<"Result:"<<result<<endl;
	return 0;
}


