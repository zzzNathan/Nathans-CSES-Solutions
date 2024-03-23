// Beauty in the suffering
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
  int n;
  cin >> n;

  vector<int> a;

  ll i=2;
  while (i <= n){
    a.push_back(i);
    i+=2;
  }

  i=1;
  while (i <= n){
    a.push_back(i);
    i+=2;
  }

  for (int i=0; i<n-1; i++){
    if (abs(a[i+1] - a[i]) == 1){
      cout << "NO SOLUTION";
      return;
    }
  }

  for (auto num : a) cout << num << " ";
}

int main(){
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  
  solve(); 
  return 0;
}
