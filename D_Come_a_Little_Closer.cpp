#include<bits/stdc++.h>
using namespace std;

using ll = long long;
using Point = pair<ll, ll>;

ll compute_area(ll x, ll y, multiset<ll>& x_coords, multiset<ll>& y_coords, int n) {   
        if (x_coords.find(x) != x_coords.end()) {
            x_coords.erase(x_coords.find(x));
        }
        if (y_coords.find(y) != y_coords.end()) {
            y_coords.erase(y_coords.find(y));
        }

        if (x_coords.empty() || y_coords.empty()) {
            x_coords.insert(x);
            y_coords.insert(y);
            return 0;
        }

        ll min_x = *x_coords.begin();
        ll max_x = *x_coords.rbegin();
        ll min_y = *y_coords.begin();
        ll max_y = *y_coords.rbegin();

        ll width = max_x - min_x + 1;
        ll height = max_y - min_y + 1;
        ll area = width * height;

        if (area < n) {
            ll warea = (width + 1) * height;
            ll harea = width * (height + 1);
            area = min(warea, harea);
        }
        x_coords.insert(x);
        y_coords.insert(y);
        return area;
    }
void solve() {
    int n;
    cin >> n;
    vector<Point> points(n);
    multiset<ll> x_coords, y_coords;

    for (int i = 0; i < n; ++i) {
        ll x, y;
        cin >> x >> y;
        points[i] = make_pair(x, y);
        x_coords.insert(x);
        y_coords.insert(y);
    }
    if (n == 1) {
        cout << 1 << '\n';
        return;
    }

    ll min_area = numeric_limits<ll>::max();

    for (const auto& point : points) {
        ll area = compute_area(point.first, point.second, x_coords, y_coords, n);
        min_area = min(min_area, area);
    }
    cout << min_area << '\n';
}


int main() {
    int test_cases = 1;
    cin >> test_cases;

    while (test_cases--) {
        solve();
    }
}
