#include <iostream>
#include <string>

class Solution {
public:
  int strStr(std::string haystack, std::string needle) {
    for(int i = 0, needLen = needle.length(); i <= haystack.length(); ++i) {
      if(haystack.substr(i, needLen) == needle) return i;
    } return -1;
  }
};

int main(int argc, char** argv) {
  int t, n;
  Solution sol;

  std::cin >> t;

  while(t--) {
    std::cin >> n;
    sol.strStr(n);
  }
}
