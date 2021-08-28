#include <iostream>
using namespace std;
void thaotac(int arr[], int n)
{
	int sum_even =0;
	int sum_odd=0;
	int count_even=0;
	int count_odd=0;
	int arr_n[100];
	for(int i=0; i<n; i++)
	{
		if (arr[i]%2==0)
		{
			sum_even+=arr[i];
			count_even++;
		}
		if(int i=0; i<n; i++)
		{
			sum_odd+=arr[i];
			count_odd++;
			
		}	
	}
	for(int i=0; i<n; i++)
	{
		if(arr[i]%n==0)
		{
			for (int j=0; j<n; j++)
			{
				arr_n[j]=arr[i];
			}
			
		}
	}
	int a=sizeof(arr_n)/sizeof(arr_n[0]);
	for(int i=0; i<a;i++)
	{
		cout<<"so so chia het cho n:"<<arr_n[i]<<endl;
	}
	cout<<"tong mang so chan"<<sum_even<<endl;
	cout<<"so so chan"<<count_even<<endl;
	cout<<"tong mang so le"<<sum_odd<<endl;
	cout<<"so so le"<<count_odd<<endl;
}
int main()
{
	int arr[]={1, 2, 3, 4, 5, 6};
	int n=sizeof(arr)/sizeof(arr[0]);
	thaotac(arr, n);
	return 0;
}
