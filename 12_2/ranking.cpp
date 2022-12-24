#include <iostream>
#include <fstream>
#include <map>
#include <vector>
#include <algorithm>

int main(int argc,char* argv[]) {
    std::ifstream ifs(argv[1]);  // ファイル読み込み
    std::string word;  // 単語を格納する変数
    std::map<char, int> cnts;  // 文字ごとの出現数を格納する連想配列
    std::vector<std::pair<int, char>> ranks;  // (出現数, 文字)のペア配列

    // a~zをそれぞれ0として格納する
    for(char c = 'a';c <= 'z';c++) {
        cnts[c] = 0;
    }

    // ファイルから単語単位で取得する
    while(ifs >> word) {
        for(auto s : word) {
            if(cnts.count(std::tolower(s))) cnts[s]++;  // 存在する文字であれば
        }
    }

    // 文字と出現数を反転させてペア配列に格納する
    for(const auto &s : cnts) {
        ranks.push_back(std::make_pair(s.second,s.first));
    }

    // 出現数でソート
    std::sort(ranks.begin(),ranks.end());

    // 昇順から降順に
    std::reverse(ranks.begin(),ranks.end());

    // 出力
    for(auto p : ranks) {
        std::cout << p.second << ": " << p.first << std::endl;
    }
}