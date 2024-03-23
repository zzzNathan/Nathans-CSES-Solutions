// Beauty in the suffering
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
  
}

int main(){
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  
  ll n;
  cin >> n;
  cout << n << " ";

  while (n != 1){
    if (n % 2 == 0) n /= 2;
    else n = n*3 + 1;
    cout << n << " ";
  }
  
  return 0;
}
