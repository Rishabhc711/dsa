/******************************************
* AUTHOR : Abhishek Naidu *
* NICK : abhisheknaiidu *
******************************************/
#pragma GCC optimize("Ofast")
#include <algorithm>
#include <bitset>
#include <complex>
#include <deque>
#include <cstdlib> 
#include <exception>
#include <fstream>
#include <functional>
#include <iostream>
#include <istream>
#include <iterator>
#include <limits>
#include <list>
#include <locale>
#include <tuple>
#include <string>
#include <map>
#include <memory>
#include <new>
#include <numeric>
#include <ostream>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#define min(a,b) ((a)<(b)?(a):(b))
#define max(a,b) ((a)>(b)?(a):(b))
#define ll long long 
#define all(n)          n.begin(),n.end()
#define pii             pair<int,int>
#define vi              vector<int>
#define mii             map<int,int>
#define ps(x,y)         fixed<<setprecision(y)<<x
#define w(x)            int x; cin>>x; while(x--)
#define pqb             priority_queue<int>
#define pqs             priority_queue<int,vi,greater<int> >
#define setbits(x)      __builtin_popcountll(x)
#define zrobits(x)      __builtin_ctzll(x)
#define mod             1000000007
#define pb              push_back
#define mp              make_pair
#define lli             long long int
#define inf             1e18
#define w(x)            int x; cin>>x; while(x--)
#define out cout<<
#define in cin>>
using namespace std;

void abhisheknaiidu()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}


int main(int argc, char* argv[]) {
	abhisheknaiidu();

w(x) {
	map <int, vector<int>> m;
	int n, x;
	cin >> n;
	cin >> x;

	if(n<=2) {
		cout << "1" << endl;
	}
	else {
		n = n-2;
		int l = n/x;
		if(n%x != 0) {
			l++;
		}
		cout << l+1 << endl;
	}

// 	m[1].push_back(1);
// 	m[1].push_back(2);

// 	int j=2;
// 	int count=0;
// 	for(int i=3; i<=n; i++) {
// 		if(count == x) {
// 			j++;
// 			count = 0;
// 		}
// 		m[j].push_back(i);
// 		count++;
// 	}

// 	for(auto x: m) {
// 	for(auto y: x.second) {
// 		if(y == n) {
// 			cout << x.first << endl;
// 		}
// 	}
// }

}


   return 0;
}




















