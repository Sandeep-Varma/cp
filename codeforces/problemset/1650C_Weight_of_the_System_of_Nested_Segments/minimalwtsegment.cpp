#include <bits/stdc++.h>
using namespace std;

void swap(int *a,int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
// function which divides array into 2 subarrays such that
// all elements in first array <= all elements in the second array
int partition(int** A,int n,int pivot)
{
	int x = A[pivot][0];
	int i = -1;
	int j = n;
	while (true)
	{
		j = j-1;
		while (A[j][0] < x)
		{
			j = j-1;
		}
		i = i+1;
		while (A[i][0] > x)
		{
			i = i+1;
		}
		if (i<j) swap(&A[i][0],&A[j][0]);
		else return j;
	}
}
// quick sort function with pivot always as first element of array
void QuickSort(int** A,int n)
{
	if (n>1)
	{
		int n1 = partition(A,n,0);
		QuickSort(A,n1+1);
		QuickSort(&A[n1+1],n-n1-1);
	}
}

int main()
{
    int N,n,m;
    cin>>N; // number of testcases
    for (int i=0; i<N; i++)
    {
        cin>>n>>m;
        int A[m][2];
        for (int j=0; j<m; j++)
        {
            cin>>A[j][0]>>A[j][1];
        }
        QuickSort(A,m);
    }
}