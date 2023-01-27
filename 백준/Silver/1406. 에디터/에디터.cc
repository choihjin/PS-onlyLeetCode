#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    list<char> L;
    string s;

    cin >> s;
    for(auto c : s) L.push_back(c);
    auto cursor = L.end();

    int n;
    cin >> n;
    while(n--) {
        char buffer;
        cin >> buffer;
        if(buffer == 'L' && cursor != L.begin()) cursor--;
        else if(buffer == 'D' && cursor != L.end()) cursor++;
        else if(buffer == 'P') {
            char dat;
            cin >> dat;
            L.insert(cursor, dat);
        } else if(buffer == 'B' && cursor != L.begin()) {
            cursor--;
            cursor = L.erase(cursor);
        }
    }

    for(auto i : L) cout << i;
    cout << "\n";
}