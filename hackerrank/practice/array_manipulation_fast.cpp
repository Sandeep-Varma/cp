#include <bits/stdc++.h>
using namespace std;
#define uint unsigned int

struct node{
    unsigned long n;
    uint i,il,ir;
    struct node *l, *r;
    node(uint IL, uint I, uint IR){
        n = 0;
        i = I;
        il = IL;
        ir = IR;
        l = NULL;
        r = NULL;
    }
};

class my_fast_tree{
    struct node* root;
    void create_branch(struct node* &x, uint n, uint b, int h){
        if (n == 0) return;
        x = new node(b,b+int(exp2(h-2)),b+n);
        if (h == 1) return;
        if (n>(uint)exp2(h-2)){
            create_branch(x->l,int(exp2(h-2)),b,h-1);
            create_branch(x->r,n-int(exp2(h-2)),b+int(exp2(h-2)),h-1);
        }
        else create_branch(x->l,n,b,h-1);
    }
    long max_val_of_subtree(struct node* x){
        if (x->l == NULL && x->r == NULL) return x->n;
        if (x->r == NULL) return x->n + max_val_of_subtree(x->l);
        return max(x->n+max_val_of_subtree(x->l), x->n+max_val_of_subtree(x->r));
    }
    void increment_range(struct node* x, uint i1, uint i2, uint k){
        if (x->il == i1){
            if (x->ir == i2) x->n += k;
            else if (x->i >= i2) increment_range(x->l,i1,i2,k);
            else{
                increment_range(x->l,i1,x->i,k);
                increment_range(x->r,x->i,i2,k);
            }
        }
        else if (x->i > i1){
            if (x->i >= i2) increment_range(x->l,i1,i2,k);
            else{
                increment_range(x->l,i1,x->i,k);
                increment_range(x->r,x->i,i2,k);
            }
        }
        else increment_range(x->r,i1,i2,k); 
    }
    public:
    my_fast_tree(int n){
        create_branch(root,n,0,1+ceil(log2(n)));
    }
    void increment(uint i1, uint i2, uint k){
        increment_range(root,i1,i2,k);
    }
    long maximum(){
        return max_val_of_subtree(root);
    }
};

int main(){
    int n,m;
    cin>>n>>m;
    my_fast_tree T(n);
    uint i1,i2,x;
    while(m--){
        cin>>i1>>i2>>x;
        T.increment(i1-1,i2,x);
    }
    cout<<T.maximum()<<endl;
}