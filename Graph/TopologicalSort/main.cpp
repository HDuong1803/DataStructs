#include <QCoreApplication>
#include "TopologicalSort.h"
int main()
{

    cout<<"DFS BELOW " << endl;

    Graph forDFS(6);
    forDFS.addEdge(0, 1, false);
    forDFS.addEdge(0, 2 ,false);
    forDFS.addEdge(2, 4,false);
    forDFS.addEdge(1, 3,false);
    forDFS.addEdge(4, 5,false);


    forDFS.printAdjList();


    forDFS.dfs(0);

    cout<<endl;
    for(int i=0; i<6; i++){
        cout<< "Node: " << i << " Pre number "
                                       << forDFS.pre[i] << " Post number " << forDFS.post[i] << endl;
    }


    forDFS.topologicalSortUtil();
    forDFS.transposeGraph();

    return 0;
}
