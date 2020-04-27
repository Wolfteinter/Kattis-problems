#include<bits/stdc++.h>
using namespace std;
struct edge{
    int p1,p2;
    double dist;
};

bool cmp(edge lhs, edge rhs) {
    return lhs.dist < rhs.dist;
}
int find(vector<int>& disjoint, int a) {
    if(disjoint[a] == -1) {
        return a;
    }
    disjoint[a] = find(disjoint, disjoint[a]);
    return disjoint[a];
}

void join(vector<int>& disjoint, int a, int b) {
    a = find(disjoint, a);
    b = find(disjoint, b);
    if(a == b) {
        return;
    }
    disjoint[a] = b;
}
int main(){

    cout << fixed;
    cout.precision(2);
    int n,s,p,x,y;
    double dist;
    cin>>n;
    while(n--){
        cin>>s>>p;
        vector< pair<int,int> > lista;
        for(int i = 0;i<p;i++){
            cin>>x>>y;
            lista.push_back(make_pair(x,y));
        }
        vector<edge> edges;
        for(int i = 0;i<p;i++){
            for(int j = i+1;j<p;j++){
                dist = sqrt(pow(lista[i].first - lista[j].first,2) + pow(lista[i].second - lista[j].second,2));
                edge e = {i, j, dist};
                edges.push_back(e);
            }
        }
        sort(edges.begin(),edges.end(),cmp);
        vector<int> disjoint(p, -1);
        vector<double> good;
        for(auto i : edges) {
            if(find(disjoint, i.p1) != find(disjoint, i.p2)) {
                join(disjoint, i.p1, i.p2);
                good.push_back(i.dist);
            }
        }
        for(int i = 1; i < s; i++) {
            good.pop_back();
        }
        cout << good.back() << endl;
    }
    return 0;
}
