	
 //Hàm insertion sort
#include <stdio.h>
#include <math.h>
using namespace std;

void mechanism_sort(int arr[], int n)
{
	int i, key, j;
	for (int i=1; i<n; i++)
	{
		key=arr[i];
		j=i-1;
		while (j>=0 && arr[j]>key)
		{
			arr[j+1]=arr[j];
			j-=1;
		}
		arr[j+1]=key;
	}
}
void print_array(int arr[], int n)
{
   int i;
   for (i=0; i < n; i++)
       printf("%d ", arr[i]);
   printf("\n");
	
	
        
	

}
int main()
{
	int arr[]={12, 5, 4, 8, 9};
    int n=sizeof(arr)/sizeof(arr[0]);
    mechanism_sort(arr, n);
    print_array(arr, n);
    return 0;
}	



//Hàm tim kiem




//Xóa mot phan tu


	
		
	
