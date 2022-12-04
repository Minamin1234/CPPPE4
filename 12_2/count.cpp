#include <iostream>
#include <fstream>
#include <map>

int main(int argc,char* argv[]) {
    std::ifstream ifs(argv[1]);
    std::string word;
    std::map<char, int> cnts;
    for(char c = 'a';c <= 'z';c++) {
        cnts[c] = 0;
    }
    while(ifs >> word) {
        for(auto s : word) {
            if(cnts.count(s)) cnts[s]++;
        }
    } 
    for(const auto &s : cnts) {
        std::cout << s.first << ": " << s.second << std::endl;
    }
}