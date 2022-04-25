#include<bits/stdc++.h>
using namespace std;
void fun(int i,vector<int> &vc,int target,vector<vector<int>> &ans,vector<int> &ds)
{

    if(target==0)
    {
        ans.push_back(ds);
        return;
    }

for(int x=i;x<vc.size();x++)
{
if(x>i && vc[x]==vc[x-1])
    continue;
if(vc[x]>target)
{
    break;
}
ds.push_back(vc[x]);
fun(x+1,vc,target-vc[x],ans,ds);
ds.pop_back();
}
}
int main()
{
    int target=8;
    vector<int> vc {10,1,2,7,6,1,5};
    vector<vector<int>> ans;
    vector<int>ds;
    fun(0,vc,target,ans,ds);
   for (int i = 0; i < ans.size(); i++) {
    for (int j = 0; j < ans[i].size(); j++)
      cout << ans[i][j] << " ";
    cout<<"\n";
    }
    return 0;
}

