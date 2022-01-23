#include<bits/stdc++.h>
#include<string>
#include <sstream>
using namespace std;
#include<bitset>
#define gc getchar_unlocked
#define ll long long


#define br printf("\n")
#define fo(i, n) for(i=0;i<n;i++)
#define fox(i, a,b) for(i=a;i<=b;i++)
#define reps(i, a,b) for(int i=a;i<=b;i++)
#define repe(i, a,b) for(int i=a;i>=b;i--)
#define ps(x,y) fixed<<setprecision(y)<<x
#define Fo(i, k, n) for(i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
#define deb(x) cout << #x << " = " << x << endl;
#define deb2(x, y) cout << #x << " = " << x << ", " << #y << " = " << y << endl
#define deba(i, a, n) fo(i, n){cout << a[i] << " ";}
#define pb push_back
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define clr(x) memset(x, 0, sizeof(x))
#define sortall(x) sort(all(x))

#define sum_v(v) accumulate(v.begin(), v.end(), 0)
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
typedef pair<ll, ll> pl;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<pl> vpl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
mt19937_64 rang(chrono::high_resolution_clock::now().time_since_epoch().count());
void yes()
{
    cout<<"YES"<<endl;
}


template<typename T> void amin(T& t1, T t2)
{
    t1=min(t1,t2);
}
void readvl(vl &v,ll n)
{
    for(ll i=0; i<n; i++)cin>>v[i];
}
void printvl(vector<ll>arr,ll n)
{
    for(ll i=0; i<n; i++) cout<<arr[i]<<" ";
    cout<<endl;
}



ll LIS(vector<ll>& a)
{
    ll n = a.size();
    vector<ll> dp;
    for(ll i = 0; i < n; i++)
    {
        auto lb = upper_bound(dp.begin(),dp.end(), a[i]);
        if(lb != dp.end())
        {
            *lb = min(*lb, a[i]);
        }
        else
        {
            dp.push_back(a[i]);
        }
    }
    return dp.size();
}

void helper()
{
    ll n,m;
    cin>>n>>m;
    vl a(n),b(m);
    readvl(a,n);
    readvl(b,m);
    ll max1=1,max2=1;
    max1 = LIS(a);
    max2 = LIS(b);
    cout<<max1+max2<<endl;
}




int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());

    ll T = 1;
    cin>>T;


    while(T-- > 0 )
    {
        helper();
    }
    return 0;
}