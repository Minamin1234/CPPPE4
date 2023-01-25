#include <iostream>
#include <fstream>
#include <algorithm>
#include <vector>

// 教科名を順番に格納した定数配列
const std::vector<std::string> SUBJECTS = {
        "国語",
        "数学",
        "社会",
        "理科",
        "英語",
};

// 氏名とそれぞれの教科を格納するためのクラス。
class Student
{
public:
    std::string name_ = "";  // 氏名
    std::vector<int> scores_;  // 教科毎の点数

    Student(std::string name) : name_(name) { }

    // 合計点数を求める
    int Sum() const {
        int sum_ = 0;
        for (auto s : this->scores_) {
            sum_ += s;
        }
        return sum_;
    }
};

int main(int argc, char* argv[]) {
    std::fstream ifs(argv[1]);  // ファイル入力ストリーム
    std::string name;  // ファイルから取得した氏名
    int at = 70;  // 70点以上の教科をカウントする
    std::vector<Student> students_;  // 生徒それぞれの情報を格納する配列

    // 氏名をファイルストリームから取得して次に順番に教科毎の点数を取得して格納する
    while(ifs >> name) {
        Student st = Student(name);
        for (auto sbj : SUBJECTS) {
            int pt;
            ifs >> pt;
            st.scores_.push_back(pt);
        }
        students_.push_back(st);
    }

    // それぞれの教科について、70点以上の人数をカウントして教科名と人数を出力する。
    for (std::size_t i = 0;i < SUBJECTS.size(); i++) {
        auto sbj_ = SUBJECTS[i];
        int cnt_ = std::count_if(students_.begin(), students_.end(), [=](const Student st) -> bool {
            return st.scores_[i] >= at;
        });
        std::cout << sbj_ << ": " << cnt_ << std::endl;
    }

    std::cout << std::endl;  // 改行

    // 全教科の合計点数の降順でソートする。
    std::sort(students_.begin(), students_.end(), [](const Student l, const Student r) -> bool {
        return l.Sum() > r.Sum();
    });

    // ソート済みの生徒情報から氏名と合計点数を出力する。
    for (auto st : students_) {
        std::cout << st.name_ << ":" << st.Sum() << std::endl;
    }
};