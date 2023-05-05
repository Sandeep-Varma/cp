#include <bits/stdc++.h>
using namespace std;

struct node{
	int x;
	node* next;
	node(int X){
		x = X;
	}
};

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, k, size; cin>>n>>k;
	size = n;
	node* head = new node(1);
	node* one = head;
	for (int i=2; i<n+1; i++){
		head->next = new node(i);
		head = head->next;
	}
	head->next = one;
	while(head->x != head->next->x){
		for (int i=0; i<k%size; i++) head = head->next;
		cout<<head->next->x<<" ";
		head->next = head->next->next;
		size--;
	}
	cout<<head->x<<endl;
}