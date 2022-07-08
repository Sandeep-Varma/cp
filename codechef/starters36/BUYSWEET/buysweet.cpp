#include <iostream>
using namespace std;
void swap(int* a, int* b){
	int t = *a;
    *a = *b;
    *b = t;
}
int partition (int arr1[], int arr2[], int low, int high){
    int pivot = arr1[high]-arr2[high];
    int i = (low - 1);
    for (int j = low; j <= high - 1; j++){
        if (arr1[j]-arr2[j] < pivot){
            i++; // increment index of smaller element
            swap(&arr1[i], &arr1[j]);
			swap(&arr2[i], &arr2[j]);
        }
    }
    swap(&arr1[i + 1], &arr1[high]);
	swap(&arr2[i + 1], &arr2[high]);
    return (i + 1);
}
void quickSort(int arr1[], int arr2[], int low, int high){
    if (low < high){
        int pi = partition(arr1, arr2, low, high);
        quickSort(arr1, arr2, low, pi - 1);
        quickSort(arr1, arr2, pi + 1, high);
    }
}

int buysweets(){
	int N,R;
	cin>>N>>R;
	int A[N],B[N];
	for (int j=0;j<N;j++){ cin>>A[j];}
	for (int j=0;j<N;j++){ cin>>B[j];}
	quickSort(A,B,0,N-1);
	int x=0; // number of sweets to buy
	for (int k=0; k<N; k++){
		if (A[k] > R){
			continue;
		}
		while (A[k] <= R){
			R = R - A[k] + B[k];
			x++;
		}
	}
	return x;
}
int main(){
	int n;
	cin>>n;
	int output[n];
	for (int i=0;i<n;i++){ output[i] = buysweets();}
	for (int i=0;i<n;i++){ cout<<output[i]<<endl;}
}