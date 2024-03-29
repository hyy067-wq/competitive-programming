/*
ID: yiyuanh1
LANG: C++
TASK: milk2
*/
#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  freopen("milk2.in", "r", stdin);
  freopen("milk2.out", "w", stdout);

  int n;
  cin >> n;

  vector<pair<int, int>> intervals;

  for (int i = 0; i < n; i++) {
    pair<int, int> p;
    cin >> p.first >> p.second;
    intervals.push_back(p);
  }

  sort(intervals.begin(), intervals.end());

  vector<pair<int, int>> merged_intervals;
  merged_intervals.push_back(intervals[0]);

  for (int i = 1; i < intervals.size(); i++) {
    auto cur_interval = intervals[i];
    if (cur_interval.first <= merged_intervals.back().second) {
      merged_intervals.back().first = min(merged_intervals.back().first, cur_interval.first);
      merged_intervals.back().second = max(merged_intervals.back().second, cur_interval.second);
    } else {
      merged_intervals.push_back(cur_interval);
    }
  }

  int max_milk_interval = merged_intervals[0].second - merged_intervals[0].first;
  int max_nomilk_interval = 0;
  auto prev_interval = merged_intervals[0];
  
  for (int i = 1; i < merged_intervals.size(); i++) {
    max_milk_interval = max(max_milk_interval, merged_intervals[i].second - merged_intervals[i].first);
    max_nomilk_interval = max(max_nomilk_interval, merged_intervals[i].first - prev_interval.second);
    prev_interval = merged_intervals[i];
  }

  cout << max_milk_interval << " " << max_nomilk_interval << endl;

  return 0;
}
