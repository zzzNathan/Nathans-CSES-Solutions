// Beauty in the suffering
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
  int n;
  cin >> n;

  vector<int> a(n-1);
  for (int i=0; i<n-1; i++) cin >> a[i];

  sort(a.begin(), a.end());
  int tracker = 1;

  for (int num : a){
    if (num == tracker) tracker++;
    else{
      cout << tracker;
      return;
    }
  }
  cout << n;
}

int main(){
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  
  solve(); 
  return 0;
}
