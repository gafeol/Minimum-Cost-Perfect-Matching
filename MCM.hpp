#ifndef MCM_H
#define MCM_H

#include<bits/stdc++.h>
using namespace std;

pair<double, vector<pair<int, int>>> MinimumCostPerfectMatching(pair<Graph, vector<double>>);

pair<double, vector<pair<int, int>>> MinimumCostPerfectMatching(int, vector<tuple<int, int, double>>);

pair<int, vector<pair<int, int>>> MaximumMatching(Graph);

pair<int, vector<pair<int, int>>> MaximumMatching(int, vector<pair<int, int>>);

#endif