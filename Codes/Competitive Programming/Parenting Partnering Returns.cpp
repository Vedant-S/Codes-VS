#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define int ll
#define endl '\n'

struct event {
	char type;
	int time;
	int ind;

	event(char type, int time, int ind) : type(type), time(time), ind(ind) {}
};

bool cmp(const event &a, const event &b) {
		if(a.time==b.time)
			return a.type < b.type;
    return (a.time < b.time);
}

void print(event e) {
	cout << "[" << e.type << " " << e.time << " " <<e.ind << "] ";
}

int32_t main() {
  clock_t begin = clock();

  ios_base::sync_with_stdio(0);
  cin.tie(0);


  int t;
  cin >> t;
  for(int cas=1; cas<=t; cas++) {
    int n, x, y;
    cin >> n;

    cout << "Case #" << cas <<": ";

    vector<event> v;
    vector<int> res(n);
    string ans="";
    for(int i=0; i<n; i++) {
    	cin >> x >> y;
    	v.push_back({'s', x, i});
    	v.push_back({'e', y, i});
    }

    sort(v.begin(), v.end(), cmp);

    int cur_job=0;
    bool imp=false;

    int c=-1, j=-1;
    for(int i=0; i<v.size(); i++) {
    	event cur=v[i];

    	if(cur.type=='s') {
    		cur_job++;
    		if(cur_job==3) {
    			cout << "IMPOSSIBLE" << endl;
    			imp=true;
    			break;
    		}
    		else if(c==-1) {
    			c=cur.ind;
    			res[c]='C';
    			ans+='C';
    		}
    		else {
    			j=cur.ind;
    			res[c]='J';
    			ans+='J';
    		}
    	}
    	else {
    		cur_job--;
    		if(c==cur.ind) {
    			c=-1;
    		}
    		else {
    			j=-1;
    		}
    	}
    }


    if(!imp) {
    	// cout << ans << endl;
    	for(int c:res) {
    		if(c==0) cout << "C";
    		else cout << "J";
    	}
    	cout << endl;
    }
  }

  return 0;
}


