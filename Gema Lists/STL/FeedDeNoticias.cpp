#include <bits/stdc++.h>
using namespace std;

#define DEBUG if(0)

struct Friend
{
  int id;
  double deg;
  void read() { cin >> id >> deg; }
  bool operator<(const Friend &other) const{ return deg > other.deg; }
};

struct Update
{
  int id;
  double time;
  bool can;
  string str;
  void read() 
  { 
    cin >> id >> time;
    cin.ignore();
    getline(cin, str);
    can = true;
  }
};

int bSearch(Update u[], int n, int element) {
	int start = 0;
	int end = n - 1;
	int mid;
	while(start != end) {
		mid = (start + end) / 2;
		if(u[mid].id < element) { //go right
			start = mid + 1;
		} else if(u[mid].id > element) { //go left
			end = mid - 1;
		} else { //we found the element
			if(u[mid-1].id == element)
      {
        return (u[mid-1].time > u[mid].time) ? mid-1 : mid; 
      }
      else if(u[mid+1].id == element)
      {
        return (u[mid+1].time > u[mid].time) ? mid+1 : mid;
      }
      else 
      {
        return mid;
      }
		}
	}
}

int apply(Friend a, Friend b) { return a.deg < b.deg; }

int apply2(Update a, Update b) { return a.id < b.id; }

int main()
{
  ios_base::sync_with_stdio(false); cin.tie(NULL);
  long long n, m, x;
  cin >> n >> m;
  Friend f[m];
  for(long long i = 0; i < m; i++)
    f[i].read();
  cin >> x;
  Update u[x];
  for(long long i = 0; i < x; i++)
    u[i].read();
  sort(f, f + m, apply);
  sort(u, u + x, apply2);
  /*for(int i = 0; i < m; i++)
    cout << f[i].id << " " << f[i].deg << endl;
  for(int i = 0; i < x; i++)
    cout << u[i].id << " " << u[i].time << endl;
  */
  while(n--)
  {
    int aux, ans;
    string ans_s;
    double mx = DBL_MIN;
    for(long long i = m - 1; i >= 0; i--)
    {
      DEBUG cout << f[i].id << endl;
      int index = bSearch(u, x, f[i].id);
      if(index > -1)
      {
        if((0.2 * u[index].time) + (0.8 * f[i].deg) > mx && u[index].can)
        {
          DEBUG cout << f[i].id << endl;
          mx = (0.2 * u[index].time) + (0.8 * f[i].deg); 
          ans = f[i].id;
          ans_s = u[index].str;
          aux = index;
          DEBUG cout << u[aux].str << endl;
        }
      } 
    }
    cout << ans << " " << ans_s << endl;
    u[aux].can = false;
    u[aux].time = DBL_MIN;
  }
  return 0;
}