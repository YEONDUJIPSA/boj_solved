#include <bits/stdc++.h>

using namespace std;

#define fff ios_base::sync_with_stdio(false); cin.tie(nullptr);cout.tie(nullptr);

int main()
{
    fff;

    int n; cin>>n;
    vector<int> a(n),b(n);

    for (auto &i:a) cin>>i;
    for (auto &i:b) cin>>i;

    sort(a.begin(),a.end()); sort(b.begin(),b.end());

    int ans=0;

    for (int i=0;i<n;i++) {
        ans+=a[i]*b[n-i-1];
    }

    cout<<ans;

    return 0;
}
