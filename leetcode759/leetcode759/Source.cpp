#include <iostream>
#include <map>
#include <vector>
using namespace std;

vector<Interval> employeeFreeTime(vector<vector<Interval>>& schedule);

class Interval {
public:
    int start;
    int end;

    Interval() {}

    Interval(int _start, int _end) {
        start = _start;
        end = _end;
    }
};
int main()
{
    Interval t1(1, 2);
    
    vector<vector<Interval>> matrix1{ { (1, 2) } };

    // Since I cannot figure out how to declare the variable which is a Interval in a 2-d vector,
    // I only include the code of employeeFreeTime()

    //matrix1.push_back(t1); error
    
    //{ {(1, 2)}, {(5, 6)}, {(1, 3)}, {(4, 10)} };

    vector<vector<int>> matrix2{ { 1, 3 }, { 6, 7 }, { 2, 4 }, { 2, 5 }, { 9, 12 } };
    
    employeeFreeTime(matrix1);


    return 0;
}

vector<Interval> employeeFreeTime(vector<vector<Interval>>& schedule) {
    vector<Interval> res;
    map<int, int> m;
    int count = 0;
    for (auto employee : schedule) {
        for (Interval i : employee) {
            ++m[i.start];
            --m[i.end];
        }
    }
    for (auto a : m) {
        count += a.second;
        if (!count) res.push_back(Interval(a.first, 0));
        if (count && !res.empty() && !res.back().end) res.back().end = a.first;
    }
    if (!res.empty()) res.pop_back();
    return res;
}