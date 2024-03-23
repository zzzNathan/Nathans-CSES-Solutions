// Beauty in the suffering
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
  string s;
  cin >> s;
  
  int curr=1, best=0;
  if (s.size() == 1){
    cout << 1;
    return;
  }

  for (int i=0; i<s.size()-1; i++){
    if (s[i] == s[i+1]) curr++;
    else curr = 1;
    best = max(best, curr);
  }
  best = max(best, curr);

  cout << best;
}

int main(){
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  
  solve(); 
  return 0;
}
