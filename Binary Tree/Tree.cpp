#include "Tree.h"
Tree::Tree(){

}
Tree::Tree(int size)
{
    this->size = size;
    this->rear = 0;
    this->front = 0;
    this->Q = new Node*[size];
}


void Tree::createTree(){
    Node *p, *t;
    int x;
    Tree q(100);
    cout<<"Enter root value"<<endl;
    cin>>x;
    root = new Node;
    root->data = x;
    root->lchild = root->lchild = NULL;
    q.enqueue(root);

    while(!q.isEmpty()){
        p = q.dequeue();
        cout <<"enter left child of: "<<p->data<<endl;
        cin>>x;
        if(x!=-1){
            t = new Node;
            t->data = x;
            t->lchild = t->rchild = NULL;
            p->lchild = t;
            q.enqueue(t);
        }

        cout <<"enter right child of:  "<<p->data<<endl;
        cin>>x;
        if(x!=-1){
            t = new Node;
            t->data = x;
            t->lchild = t->rchild = NULL;
            p->rchild = t;
            q.enqueue(t);
        }

    }
}
