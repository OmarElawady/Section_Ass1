#include <iostream>
#include <vector>
#include <stack>

using namespace std;

void DFS(int v,vector<vector<int>> & adj_list)
{
    // print it
    cout << v << " ";

    for (auto i = adj_list[v].begin(); i != adj_list[v].end(); ++i)
        DFS(*i, adj_list);
}


int main()
{
    /*
     * Example:
     *  6
     *  0 1
     *  1 2
     *  0 3
     *  3 4
     *  3 5
     */
    int v,e,t1,t2;
    //Enter no. of Vertices
    cin>>v;
    vector<vector<int>> adj_list(v);
    for(int i =0;i < v - 1;i++)
    {
        cin>> t1;
        cin>> t2;
        adj_list[t1].push_back(t2);
    }
    DFS(0,adj_list);
}
