#include<bits/stdc++.h>
using namespace std;
 
int main(){
  int n,m;
  cin>>n>>m;
  vector<int>a(n);
  int c=0;
  long long sum=0;
  
  for(int i=0;i<n;i++){
    cin >> a.at(i);
    sum += a.at(i);
  }
  
  for(int i=0;i<n;i++){
    if(a.at(i)>=sum/(4.0*m)){
      c++;
    }
  }
  if(c>=m)
    cout <<"Yes"<<endl;
  else
    cout <<"No"<<endl;
}
