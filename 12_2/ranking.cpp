#include <iostream>
#include <fstream>
#include <map>
#include <vector>
#include <algorithm>

int main(int argc,char* argv[]) {
    std::ifstream ifs(argv[1]);
    std::string word;
    std::map<char, int> cnts;
    std::vector<std::pair<int, char>> ranks;    

    for(char c = 'a';c <= 'z';c++) {
        cnts[c] = 0;
    }
    while(ifs >> word) {
        for(auto s : word) {
            if(cnts.count(s)) cnts[s]++;
        }
    } 
    for(const auto &s : cnts) {
        ranks.push_back(std::make_pair(s.second,s.first));
    }
    std::sort(ranks.begin(),ranks.end());
    std::reverse(ranks.begin(),ranks.end());
    for(auto p : ranks) {
        std::cout << p.second << ": " << p.first << std::endl;
    }
}