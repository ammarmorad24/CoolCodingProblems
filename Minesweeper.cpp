// Problem: Minesweeper UVA - 10189 (https://vjudge.net/problem/UVA-10189)
#include <bits/stdc++.h>
using namespace std;

int t = 1;

void solve(int n , int m) {
    int Minesweeper[n + 2][m + 2] = {0};
    for(int i = 1 ; i <= n ; i ++){
        for(int j = 1 ; j <= m ; j ++){
            char c; cin >> c;
            if (c == '*'){
                Minesweeper[i][j] = INT_MIN;
                Minesweeper[i - 1][j - 1]++;
                Minesweeper[i - 1][j]++;
                Minesweeper[i - 1][j + 1]++;
                Minesweeper[i][j - 1]++;
                Minesweeper[i][j + 1]++;
                Minesweeper[i + 1][j - 1]++;
                Minesweeper[i + 1][j]++;
                Minesweeper[i + 1][j + 1]++;
            }

        }
    }
    cout << "Field #" << t << ":" << endl;
    for(int i = 1 ; i <= n ; i ++){
        for(int j = 1 ; j <= m ; j ++){
            if (Minesweeper[i][j] < 0){
                cout << "*";
            }
            else {
                cout << Minesweeper[i][j];
            }

        }
        cout << endl;
    }

};

int main() {
    int n,m;
    while(cin >> n >> m && n){
        if (t > 1) cout << endl;
        if (n > 0 && m > 0) solve(n,m);
        t++;

    }
    return 0;
}