#include <iostream>
using namespace std;

void swap(int *a,int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
// function which divides array into 2 subarrays such that
// all elements in first array <= all elements in the second array
int partition(int* A,int n,int pivot)
{
	int x = A[pivot];
	int i = -1;
	int j = n;
	while (true)
	{
		j = j-1;
		while (A[j] < x)
		{
			j = j-1;
		}
		i = i+1;
		while (A[i] > x)
		{
			i = i+1;
		}
		if (i<j) swap(&A[i],&A[j]);
		else return j;
	}
}
// quick sort function with pivot always as first element of array
void QuickSort(int* A,int n)
{
	if (n>1)
	{
		int n1 = partition(A,n,0);
		QuickSort(A,n1+1);
		QuickSort(&A[n1+1],n-n1-1);
	}
}

void Algo(int* A,int n)
{
	QuickSort(A,n);
	if (n == 1)
	{
		cout<<"Yes"<<endl;
		return;
	}
	else if (A[n-2] - A[n-1] > 1)
	{
		cout<<"No"<<endl;
		return;
	}
	else
	{
		A[n-2] += A[n-1];
		Algo(A,n-1);
		return;
	}
}

int main()
{
    int N,n;
    cin>>N;
    for (int i=0; i<N; i++)
    {
        cin>>n;
        int A[n];
        for (int j=0; j<n; j++)
        {
            cin>>A[j];
        }
        Algo(A,n);
    }
}