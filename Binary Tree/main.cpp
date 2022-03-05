#include <iostream>
#include "Tree.h"
using namespace std;


int main()
{
    Tree q;
    cout <<"Pre-order" << endl;
    q.preorder(q.root);
    cout <<"In-order" << endl;
    q.inOrder(q.root);
    cout <<"Post-order" << endl;
    q.postOrder(q.root);

    return 0;
}
