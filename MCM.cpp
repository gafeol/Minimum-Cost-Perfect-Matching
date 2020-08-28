#include "Matching.h"
#include "Graph.h"
#include <bits/stdc++.h>
using namespace std;

pair<double, vector<pair<int, int>>> MinimumCostPerfectMatching(pair<Graph, vector<double>> inp){
    Graph G = inp.first;
    vector<double> cost = inp.second;
    Matching M(G);
    pair< list<int>, double> solution = M.SolveMinimumCostPerfectMatching(cost);
    double mCost = solution.second;
    vector<pair<int, int>> edges;
    list<int> matching = solution.first;
	for(list<int>::iterator it = matching.begin(); it != matching.end(); it++){
		pair<int, int> e = G.GetEdge( *it );
        edges.push_back(e);
	}
    return { mCost, edges };

}

pair<double, vector<pair<int, int>>> MinimumCostPerfectMatching(int n, vector<tuple<int, int, double>> arestas){
    int m = arestas.size();
    Graph G(n);
    vector<double> cost(m);
    for(auto ar: arestas){
        int i, j;
        double c;
        tie(i, j, c) = ar;
        G.AddEdge(i, j);
        cost[G.GetEdgeIndex(i, j)] = c;
    }
    return MinimumCostPerfectMatching(make_pair(G, cost));
}

pair<int, vector<pair<int, int>>> MaximumMatching(Graph G){
    Matching M(G);
    list<int> matching = M.SolveMaximumMatching();
    vector<pair<int, int>> ed;
	for(list<int>::iterator it = matching.begin(); it != matching.end(); it++) {
		pair<int, int> e = G.GetEdge( *it );
        ed.push_back(e);
	}
    return { (int)ed.size(), ed };
}

pair<int, vector<pair<int, int>>> MaximumMatching(int n, vector<pair<int, int>> arestas){
    int m = arestas.size();
    Graph G(n);
    for(pair<int, int> ar: arestas)
        G.AddEdge(ar.first, ar.second);
    return MaximumMatching(G);
}