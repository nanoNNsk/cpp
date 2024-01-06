#include <iostream>
using namespace std;

void printArray(int arr[], int size){
	for (int i=0; i < size; i++)
	{
	cout << arr[i] << " ";
	}
}

void selectionSort(int arr[], int n){
	for (int i = 0; i < n-1; i++)
	{
		int min_idx = i;
		for (int j = i+1; j < n; j++)
		{
		if (arr[j] < arr[min_idx])
			min_idx = j;
		}
		if (min_idx!=i)
			swap(arr[min_idx],arr[i]);
        printArray(arr, n);
        cout<<endl;
	}
}


int main(){
	int arr[5];
	int n = 5;
    for(int i= 0; i < n ; i++)cin>>arr[i];
	selectionSort(arr, n);
	cout << "Sorted array: ";
	printArray(arr, n);
	return 0;
}