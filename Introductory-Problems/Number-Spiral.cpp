// Beauty in the suffering
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
  ll y,x;
  cin >> y >> x;
  
  ll ans;
  // First try to deduce using y coord ..
  if (y >= x){
    // If y is even it decreases by 1 each x coord
    if (y%2 == 0){
      ans  = y*y;
      ans -= (x-1); 
    }
    // Otherwise it increases by 1 each x coord
    else{
      ans  = (y-1)*(y-1) + 1;
      ans += (x-1);
    }
    cout << ans << "\n";
  }
  
  // Otherwise try to deduce using x coord
  else{
    // If x is even it increases by 1 each y coord
    if (x%2 == 0){
      ans  = (x-1)*(x-1) + 1;
      ans += (y-1);
    } 
    // Otherwise it decreases by 1 each y coord
    else{
      ans  = x*x;
      ans -= (y-1);
    }
    cout << ans << "\n";
  }
}

int main(){
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  
  int tt;
  cin >> tt;
  while(tt--) solve(); 

  return 0;
}
