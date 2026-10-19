#include <vector>
using namespace std;

class MyHashMap {
public:
    vector<pair<int, int>> a;

    MyHashMap() {}

    void put(int key, int value) {
        for (auto& it : a) {
            if (it.first == key) {
                it.second = value;
                return;
            }
        }
        a.push_back({key, value});
    }

    int get(int key) {
        for (const auto& it : a) {
            if (it.first == key) {
                return it.second;
            }
        }
        return -1;
    }

    void remove(int key) {
        for (auto it = a.begin(); it != a.end(); ++it) {
            if (it->first == key) {
                a.erase(it);
                return;
            }
        }
    }
};