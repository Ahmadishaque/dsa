#include <time.h>
#include<sys/time.h>
#include <iostream>
using namespace std;

long gettime(){
    struct timeval start;
    gettimeofday(&start,NULL);
    return start.tv_sec*1000000+start.tv_usec;
}

int partition(int arr[], int low, int high)
{
	
	int pivot = arr[high];
	int i = (low - 1);

	for (int j = low; j <= high - 1; j++)
	{
		if (arr[j] <= pivot) {
			i++;
			swap(arr[i], arr[j]);
		}
	}
	swap(arr[i + 1], arr[high]);
	return (i + 1);
}

int randomPartition(int arr[], int low, int high)
{

	srand(time(NULL));
	int random = low + rand() % (high - low);
	swap(arr[random], arr[high]);
	return partition(arr, low, high);
}

void quickSort(int arr[], int low, int high)
{
	if (low < high) {
		int pi = randomPartition(arr, low, high);
		quickSort(arr, low, pi - 1);
		quickSort(arr, pi + 1, high);
	}
}

int main()
{   
    int n;
    cout<<"Enter the size of the array"<<endl;    
    cin>> n;
    
    int* arr = new int[n];
    
    for(int i=0; i<n; i++){
        arr[i]=rand()%10000;
    }
    long int t1,t2;
    t1=gettime();

	quickSort(arr, 0, n - 1);

    t2=gettime();
    cout<<"Time taken by the CPU: ";
    cout<<t2-t1;    
}
	
