#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <algorithm>

int main() {
  std::string str = "Hello, World!!";
  std::cout << "[IN]: " << str << std::endl;
  std::map <char, int> m;
  for(const char& ch: str){
    m[ch]++;
  }
  std::vector<std::pair<int,char>> v;
  //for(const auto& [key, value]: m){ //C++17 EXTENSION
  for(const auto& el: m){
    v.push_back({el.second, el.first});
  }
  std::sort(v.rbegin(), v.rend());
  std::cout << "[OUT]:\n";
  for(const auto& el:v){
    std::cout << el.second << ": " << el.first << std::endl;
  }
}
