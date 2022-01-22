//hackerearth
#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){

ll n;

cin>>n;

ll* arr = new ll[n];

for (size_t i = 0; i < n; i++)

{

cin>>arr[i];

}

ll sum = 0, count=0;

for (size_t i = 0; i < n; i++)

{

if(arr[i]>=0) {

sum+=arr[i];

count++;

}

 

}

if(sum==0){

count+=1;

sum+= *max_element(arr, arr+n);

}

count = min(count, n);

cout<<sum<<" "<<count<<endl;

 

}

 