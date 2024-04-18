#include <iostream>
#include <vector>
#include <algorithm>
#include <ctime>
using namespace std;

struct Activity {
    int start, finish, index;
};

bool compareActivities(const Activity& a, const Activity& b) {
    return a.finish < b.finish;
}

void activitySelection(const vector<Activity>& activities) {
    cout << "Selected Activities:\n";

    vector<Activity> sortedActivities = activities;
    sort(sortedActivities.begin(), sortedActivities.end(), compareActivities);

    
    cout << "(" << sortedActivities[0].start << ", " << sortedActivities[0].finish << ") ";

    int lastSelected = 0;

    
    for (int i = 1; i < sortedActivities.size(); ++i) {
        if (sortedActivities[i].start >= sortedActivities[lastSelected].finish) {
            cout << "(" << sortedActivities[i].start << ", " << sortedActivities[i].finish << ") ";
            lastSelected = i;
        }
    }

    cout << "\n";
}


