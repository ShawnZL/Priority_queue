#include <iostream>
#include <cstdio>
#include <queue>
#include <vector>
#include <ctime>
#include <cstdlib>
using namespace std;
//template<class T, class Container, class Compare>
//priority_queue<int> que;
priority_queue<int, vector<int>, greater<int>> que;
int test[1010];
template<typename T>
bool operator<(T& a, T& b) {
    if (a == b) return a < b;
    else return a < b;
}
template<typename T>
struct cmp
{
        bool operator() (T a, T b) {
            if (a == b) return a < b;
            else return a < b;
        }
};
//priority_queue<int, vector<int>, cmp<int>> que;

int main() {

    srand((int)time(0)); // 使用一个简单的随机数
    for (int i = 0; i < 100; ++i) {
        test[i] = rand();
        que.push(test[i]);
    }
    cout << "Before:\n";
    for (int i = 0; i < 100; ++i) {
        cout << test[i] << " ";
    }
    cout << endl;
    while (!que.empty()) {
        cout << que.top() << " ";
        que.pop();
    }
    return 0;
}
