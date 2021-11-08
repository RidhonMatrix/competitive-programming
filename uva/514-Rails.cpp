/***
**    Author: Rejaul Karim Ridhon
***/
#include<bits/stdc++.h>
using namespace std;

#define ll           long long
#define pb           push_back
#define pob          pop_back

/**Define memory set function**/
#define mem(x,y) memset(x,y,sizeof(x))
#define CLEAR(x) memset(x,0,sizeof(x))

#define F            first
#define S            second
#define deb(x)       cout << #x << "=" << x << endl
#define deb2(x, y)   cout << #x << "=" << x << "," << #y << "=" << y << endl
#define Fin          freopen("input.txt","r",stdin);
#define Fout         freopen("output.txt","w",stdout);
#define FasterIO     ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ln           '\n'
#define for0(n) for (int i = 0; i < (int)(n); ++i)

template<class T> T MIN3(T a,T b,T c) {return min(a,min(b,c));} /// minimum of 3 number
template<class T> T MAX3(T a,T b,T c) {return max(a,max(b,c));} ///maximum of 3 number
template <typename T> void Print(T ar[] , int n) {for (int i = 0; i + 1 < n; i++)cout << ar[i] << " ";cout << ar[n - 1] << "\n";}
template <typename T> void Print(const vector<T> &v) {for (int i = 0; i + 1 < v.size() ; i++) cout << v[i] << " ";cout << v.back() << "\n";}

typedef pair<int, int> PII;
typedef vector<int> VI;
typedef vector<string> VS;
typedef vector<PII> VII;
typedef vector<VI> VVI;
typedef map<int,int> MPII;
typedef set<int> SETI;

void solve(int n){

    int temp;
    while(cin>>temp && temp!=0){
        stack<int>s;
        queue<int>q;
        q.push(temp);
        for(int i=1;i<n;i++){
            cin>>temp;
            q.push(temp);
        }
        int i=1;
        while(1){

            if(i>n && !q.empty() && !q.empty() && q.front()!=s.top()){
                cout<<"No"<<ln;
                break;
            }
        
            if(q.empty()){
                cout<<"Yes"<<ln;
                break;
            }

            if(i==q.front()){
                ++i;
                q.pop();
            }else if(!s.empty() && q.front()==s.top()){
                q.pop();
                s.pop();
            }else{
                s.push(i);
                ++i;
            }
        }
    }
    

}
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
    #endif
    
    int n;
    while(cin>>n && n!=0){
        solve(n);
        cout<<ln;
        
    }
    return 0;
}
