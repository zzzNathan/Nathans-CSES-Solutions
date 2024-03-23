// Beauty in the suffering
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
  int n;
  cin >> n;

  vector<int> a(n);
  for (int i=0; i<n; i++) cin >> a[i];
  
  ll ans=0;
  for (int i=1; i<n; i++){
    if (a[i] < a[i-1]){
      ans += a[i-1] - a[i];
      a[i] = a[i-1];
    }
  }

  cout << ans;
}

int main(){
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  
  solve(); 
  return 0;
}
