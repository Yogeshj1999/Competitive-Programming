#include<bits/stdc++.h>
using namespace std;
#define all(x) (x).begin(), (x).end()
#define fo(i,n) for(i=0;i<n;i++)
#define Fo(i,x,y) for(i=x;i<y;i++)
#define srt(v)  sort(v.begin(),v.end())         // sort
#define mxe(v)  *max_element(v.begin(),v.end())     // find max element in vector
#define mne(v)  *min_element(v.begin(),v.end())     // find min element in vector
#define vi vector<int>
#define sz(v) (int)(v.size())
#define ll long long
#define li long int
#define vii vector<vector<int>>
#define pi pair<int,int>
#define pb push_back
#define F first
#define S second
const int MOD = 1e9 + 7;
void modadd(int &a , int b) {a=((a%MOD)+(b%MOD))%MOD;}
void modsub(int &a , int b) {a=((a%MOD)-(b%MOD)+MOD)%MOD;}
void modmul(int &a , int b) {a=((a%MOD)*(b%MOD))%MOD;}
// ================================== take ip/op like vector,pairs directly!==================================
template<typename typC,typename typD> istream &operator>>(istream &cin,pair<typC,typD> &a) { return cin>>a.first>>a.second; }
template<typename typC> istream &operator>>(istream &cin,vector<typC> &a) { for (auto &x:a) cin>>x; return cin; }
template<typename typC,typename typD> ostream &operator<<(ostream &cout,const pair<typC,typD> &a) { return cout<<a.first<<' '<<a.second; }
template<typename typC,typename typD> ostream &operator<<(ostream &cout,const vector<pair<typC,typD>> &a) { for (auto &x:a) cout<<x<<'\n'; return cout; }
template<typename typC> ostream &operator<<(ostream &cout,const vector<typC> &a) { int n=a.size(); if (!n) return cout; cout<<a[0]; for (int i=1; i<n; i++) cout<<' '<<a[i]; return cout; }
// ===================================END Of the input module ==========================================
// ===================================Debugging Code ==========================================

void dbg_out(){cerr<<endl;}
template<typename Head,typename... Tail >
void dbg_out(Head H,Tail... T){
    cerr<<' '<<H;dbg_out(T...);
}
#define dbg(...) cerr <<"(" <<#__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)
// ===================================END Of the degub module ==========================================


int const N =1000;
int t[N][N];

void solve(){
	int n;
	cin>>n;
	int arr[n];
	for (int i =0;i<n ; i++)
	{
		cin>>arr[i];
	}
}
int main()
{
	memset(t,-1,sizeof(t));
	int n;
	cin>>n;
	while(n--){
		solve();
	}
	int arr[n];
	for (int i =0;i<n ; i++)
	{
		cin>>arr[i];
	}

}
