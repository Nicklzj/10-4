#include<iostream>
#include<algorithm>
#include<vector>
#include<set>
using namespace std;
typedef long long ll;
ll N;
vector<ll>v;
set <ll>s;
int nums[] = { -1,0,1 };
ll dfs(ll x,ll sum)
{
	if (x==N)
	{
		//cout << sum << endl;
		return 1;
	}
 
	for (int i = 0; i < 3; i++)
	{
		//cout << "sum:   " << sum << endl;
		//sum += v[x] * nums[i];
		//sum = abs(sum);
		
		//cout << i << "   "<< v[x] * nums[i]<<"     ";
		dfs(x + 1, sum+ v[x] * nums[i]);
		s.insert(abs(sum+v[x] * nums[i]));
	}


}



int main()
{

	cin >> N;

	for (auto i = 0; i < N; i++)
	{
		ll temp;
		cin >> temp;
		v.push_back(temp);
	}
  

	dfs(0, 0);
	for (auto i = s.begin(); i != s.end(); i++)
	{
		cout << (*i) << endl;
	}
	cout<<s.size()-1<<endl;
	return 0;
}
//do
//{
//	for (ll i = 0; i < v.size(); i++)
//	{
//		//cout << v[i] << " ";
//		s.insert(dfs());
//	
//	
//	}
//	cout << endl;
//} while (next_permutation(v.begin(), v.end()));