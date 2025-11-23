#include <bits/stdc++.h>

using namespace std;

#define fff ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

struct point {
    int x;
    int y;
};

double minimum(int idx, int cnt, point cur, vector<point> &points)
{
    if (points.size()==idx) {
        if (cnt==points.size()/2) return sqrt(1.0*cur.x*cur.x+1.0*cur.y*cur.y);
        return LLONG_MAX;
    }

    point tmp=points[idx];

    double a=minimum(idx+1,cnt,{cur.x-tmp.x,cur.y-tmp.y},points);
    
    if (points.size()/2==cnt) return a;

    double b=minimum(idx+1,cnt+1,{cur.x+tmp.x,cur.y+tmp.y},points);

    return a<b?a:b;
}
void solve()
{
    int n; cin>>n;

    vector<point> points(n);

    for (auto &i:points) {
        cin>>i.x>>i.y;
    }

    cout<<std::fixed;
    cout.precision(12);
    cout<<minimum(0,0,{0,0},points)<<'\n';
}

int main()
{
    fff;

    int t; cin>>t;

    while (t--) solve();
    return 0;
}
