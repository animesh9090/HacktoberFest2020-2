#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;cin >> n;
	vector<int>arr(n);
	for(int i=0;i<n;i++)
		cin >> arr[i];
	int cnt = 0;
	for(int i=0;i<n;i++)
		cnt += (arr[i]%2 == 1);
	cout << "Odd count in array = " << cnt << endl;
}

