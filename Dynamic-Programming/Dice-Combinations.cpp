// Beauty in the suffering
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
  int n;
  cin >> n;

  const ll MOD = 1e9+7;
  
  // dp[i] represents how many combinations are available
  // if we wish to sum up to i,
  vector<ll> dp(n+1);
  dp[1] = 1;
  dp[0] = 1;

  for (int i=2; i<=n; i++){
    // Each turn we can roll any number j, from 1..6 (inclusive)
    for (int j=1; j<=6; j++){
      // So we add the sub-problem of dp[i - j] to our total for dp[i]
      // For example consider n=3, If we roll a 2 this becomes the sub-problem 
      // to find amount of combinations that sum to (3-2)=>1, which is
      // dp[1] by definition.
      if (i-j >= 0) dp[i] += dp[i-j];
    }
    dp[i] %= MOD;
  }
  cout << dp[n]; 
}

int main(){
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  
  solve(); 
  return 0;
}
