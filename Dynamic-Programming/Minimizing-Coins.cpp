// Beauty in the suffering
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
  int n, x;
  cin >> n >> x;

  vector<int> c(n);
  for (int i=0; i<n; i++) cin >> c[i];
  
  // Let dp[i] be the minimal number of coins to produce
  // a sum of money, i.
  vector<int> dp(x+1, 1e8);
  dp[0] = 0; // No coins needed to make a sum of 0

  for (int i=1; i<=x; i++){
    // For each i we can only pick coins that are in c
    for (auto coin : c){
      // Once we choose some coin, we now must simply solve
      // for minimal amount of coins to produce i-coin money
      // then add 1 because we will add "coin" to that
      // solution of i-coin in order to sum to i
      if (i - coin >= 0) dp[i] = min(dp[i], dp[i-coin] + 1);
    }
  }

  cout << (dp[x]!=1e8 ? dp[x] : -1);
}

int main(){
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  
  solve(); 

  return 0;
}
