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
	int n; cin>>n;
	node* head = new node(1);
	node* one = head;
	for (int i=2; i<n+1; i++){
		head->next = new node(i);
		head = head->next;
	}
	head->next = one;
	head = head->next;
	while(head->x != head->next->x){
		cout<<head->next->x<<" ";
		head->next = head->next->next;
		head = head->next;
	}
	cout<<head->x<<endl;
}