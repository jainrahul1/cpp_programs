/*
 *
 *
 *
 *
 */

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int n, q;
	vector <vector<int> > v;

	cin >> n >> q;
	
	int l;
	for (int i = 0; i < n; i++) {
		cin >> l;
		int item;
		vector<int> u;
		for (int j = 0; j < l; j++) {
			cin >> item;            
			u.push_back(item);
		}
		v.push_back(u);
	}

	int a, b;        
	for (int i = 0; i < q; i++) {
		cin >> a >> b;
		cout << v[a][b] << endl;
	} 

	return 0;
}
