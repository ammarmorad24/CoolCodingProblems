//Problem Link: https://codeforces.com/problemset/gymProblem/100187/M#:~:text=Heaviside%20function%20is%20defined%20as,where%20s%20i%20%3D%20%C2%B1%201.
#include<bits/stdc++.h>
#define Soda ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); cout.precision(10); cout.setf(ios::fixed);
#define all(x) (x).begin(), (x).end()
#define ll long long
using namespace std;

void solve() {
   int n; cin >> n;
   vector<int> comp;
   vector<int> comp2;

   for (int i = 0; i < n; ++i) {
        int a , b;
        cin >> a >> b;
        if (a == 1){
            comp.push_back(b);
        }
        else{
            comp2.push_back(b);

        }
   }
   sort(all(comp));
   sort(all(comp2));
   int m; cin >> m;
   for (int i = 0; i < m; ++i) {
       int x;
       cin >> x;
       cout << ((upper_bound(all(comp),x)) - comp.begin()) + ((upper_bound(all(comp2),-x)) - comp2.begin()) << '\n';
   }
}

int main() {
    Soda;
    solve();
    return 0;
}