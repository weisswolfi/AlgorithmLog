#define ll long long int

#include <bits/stdc++.h>

using namespace std;

int main() { 
	ios::sync_with_stdio(0);
	cin.tie(0);
	
    ll n;
    cin >> n;
    
    for(int i=1; i<n; i++) {
        for(int k=0; k<i; k++) {
            cout << "*";
        }
        for(int k=0; k<n-i; k++) {
            cout << " ";
        }
        for(int k=0; k<n-i; k++) {
            cout << " ";
        }
        for(int k=0; k<i; k++) {
            cout << "*";
        }
        cout << "\n";
    }

    for(int i=0; i<n; i++) cout << "**";
    cout << "\n";

    for(int i=1; i<n; i++) {
        for(int k=i; k<n; k++) {
            cout << "*";
        }
        for(int k=0; k<i; k++) {
            cout << " ";
        }
        for(int k=0; k<i; k++) {
            cout << " ";
        }
        for(int k=i; k<n; k++) {
            cout << "*";
        }
        cout << "\n";
    }
}