#include <string>
#include <vector>
using namespace std;

// Time Complexity: O(n)
// Space Complexity: O(1)
int firstUniqChar(string s) {
  int n = s.size();
  vector<int> freq(26, 0);
  for (int i = 0; i < n; i++) {
    freq[s[i] - 'a']++;
  }
  for (int i = 0; i < n; i++) {
    if (freq[s[i] - 'a'] == 1) {
      return i;
    }
  }
  return -1;
}