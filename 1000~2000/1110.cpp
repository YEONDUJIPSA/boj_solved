#include <bits/stdc++.h>

using namepace std;

#define fff ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);

int main()
{
    fff;

    int n; cin>>n;
    int tmp=n,prev=n;

    for (int i=1;;i++) {
        tmp=prev%10*10+(prev/10+prev%10)%10;

        if (tmp==n) {
            cout<<i<<'\n';
            return 0;
        }

        prev=tmp;
    }

    
    return 0;
}
