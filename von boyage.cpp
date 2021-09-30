#include<bits/stdc++.h>
using namespace std;
int main()
{
  cout<<"to calculate distance between place A and place B\n";
  vector<string> dist(5)={"paris", "london", "luxembourg", "berlin", "washington DC", "texas"};
  cout<<"available cities are: ";
  for(int i=0;i<dist.size();i++)
    cout<<dist[i]<<" ";
  cout<<'\n';
  string a, b;
  cout<<"enter boarding and destination: ";
  cin>>a>>b;
  int bo, de;
  for(int i=0;i<dist.size();i++)
    if(dist[i]==a){
      bo=i; break;}
  for(int i=0;i<dist.size();i++)
    if(dist[i]==b){
      de=i; break;}
  cout<<"lapses needed: "<<abs(de-bo);
  return 0;
}
  
  
