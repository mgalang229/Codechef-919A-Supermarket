#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n, m;
	cin >> n >> m;
	double a[n], b[n];
	for(int i=0; i<n; ++i)
		cin >> a[i] >> b[i];
	double tmp=DBL_MAX;
	for(int i=0; i<n; ++i)
		if(a[i]/b[i]<tmp)
			tmp=a[i]/b[i];
	cout << fixed << setprecision(8) << m*tmp << "\n";
}
