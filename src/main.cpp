#include <iostream>
#include <set>
using namespace std;

int main() {

    set<int> markSet;
    markSet = {10, 11, 12, 13, 14, 15};
    int size = markSet.size();
    cout << "Size : " << size << endl; 
    for (int value : markSet) {
        cout << value << " ";
    }

    cout << endl;
    int searchValue = 14;
    set<int>::iterator itr = markSet.find(searchValue);
    if (itr != markSet.end()) {
        cout << "Found : " << distance(markSet.begin(), itr)<< endl;
    } else {
        cout << "Not Found" << endl;
    }

    return 0;
}