#include <iostream>
#include <fstream>
#include <algorithm>
#include <vector>
#include <map>

int main(int argc, char* argv[]) {
    std::fstream ifs(argv[1]);
    std::string name;
    std::vector<std::pair<int, std::string>> points;
    int no = 0;
    while(ifs >> name) {
        points.push_back(std::make_pair(0, name));
        for (int i = 0;i < 5;i++) {
            int pt;
            ifs >> pt;
            points[no].first += pt;
        }
        no++;
    }

    std::sort(points.begin(), points.end());
    std::reverse(points.begin(), points.end());
    
    for (auto p : points) {
        std::cout << p.second << ":" << p.first << std::endl;
    }

};