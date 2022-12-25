#include <iostream>
#include <fstream>
#include <algorithm>
#include <vector>
#include <map>

const std::vector<std::string> SUBJECTS = {
    "国語",
    "数学",
    "社会",
    "理科",
    "英語",
};

int main(int argc, char* argv[]) {
    std::fstream ifs(argv[1]);
    std::string word;
    const int at = 70;
    std::map<std::string, std::vector<int>> pts;
    while(ifs >> word) {
        for (auto sbj : SUBJECTS) {
            int point;
            ifs >> point;
            pts[sbj].push_back(point);
        }
    }
    /*
    for (auto sbj : pts) {
        int cnt = std::count_if(sbj.second.begin(), sbj.second.end(),[](const int &pt) -> bool {
            return pt >= 70;
        });
        std::cout << sbj.first << ":" << cnt << std::endl;
    }
    */
    for (auto sbj : SUBJECTS) {
        auto ptv = pts[sbj];
        int cnt = std::count_if(ptv.begin(), ptv.end(), [](const int pt) -> bool {
            return pt >= at;
        });
        std::cout << sbj << ":" << cnt << std::endl;
    }
    return 0;
}