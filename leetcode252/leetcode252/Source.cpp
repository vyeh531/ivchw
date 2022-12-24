#include <iostream>
#include <vector>
#include <map>
using namespace std;

//bool canAttendMeetings(vector<vector<int>>& intervals);
int minMeetingRooms(vector<vector<int>>& intervals);

int main()
{
    vector<vector<int>> matrix1{ { 0, 30 }, { 5, 10 }, { 15, 20} };

    vector<vector<int>> matrix2{ { 7, 10 }, { 2, 4 } };

    /*
    if (canAttendMeetings(matrix1) == true)
        cout << "True!\n\n";
    else
        cout << "False!\n\n";

    if (canAttendMeetings(matrix2) == true)
        cout << "True!\n\n";
    else
        cout << "False!\n\n";
    */

    cout << minMeetingRooms(matrix1) << endl << endl;

    cout << minMeetingRooms(matrix2) << endl;

    return 0;
}

/*bool canAttendMeetings(vector<vector<int>>& intervals) {
       for (int i = 0; i < intervals.size(); ++i) {
           for (int j = i + 1; j < intervals.size(); ++j) {
               if ((intervals[i][0] >= intervals[j][0] && intervals[i][0] < intervals[j][1]) || (intervals[j][0] >= intervals[i][0] && intervals[j][0] < intervals[i][1])) return false;
           }
       }
       return true;
}*/

int minMeetingRooms(vector<vector<int>>& intervals) {
    map<int, int> m;
    for (auto a : intervals) {
        ++m[a[0]];
        --m[a[1]];
    }
    int rooms = 0, res = 0;
    for (auto it : m) {
        res = max(res, rooms += it.second);
    }
    return res;
}