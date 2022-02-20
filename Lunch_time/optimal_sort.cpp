#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
 
 
int main()
{
    ios::sync_with_stdio(0); cin.tie(0);
 
    int t; 
    cin >> t;//testacases

    while (t--) 
    {
        int n; cin >> n; //  vector or array of size n 
        vector<array<int, 2>> a(n);//basically 2d array whose columns can be increased 
        for (int i = 0; i < n; i++) 
        {
            cin >> a[i][0];
            a[i][1] = i; 
        }
        sort(begin(a), end(a)); //sorting the array 
        
        vector<int> p(n);
        for (int i = 0; i < n; ++i)
            p[a[i][1]] = i;
        
        ll ans = 0;
        set<int> active;
        for (int i = 0; i < n; ++i)
            active.insert(i);
        
        int mn = INT_MAX, mx = INT_MIN;
        for (auto i : p) {
            active.erase(i);
            mn = min(mn, i);
            mx = max(mx, i);
            if (active.empty() or *active.begin() > mx) {
                ans += a[mx][0] - a[mn][0];
                mx = INT_MIN;
                mn = INT_MAX;
            }
        }
        cout << ans << '\n';
    }
}