#include <iostream>
// #include <array>
#include <vector>
// #include <deque>
// #include <list>
// #include <stack>
// #include <queue>
// #include <queue>
// #include <set>

using namespace std;
int main()
{

    //     array<int, 6> x = {1, 4, 5, 6, 3, 8};
    //     cout << "Element at 2nd index : " << x.at(2) << endl;
    //     cout << "First element : " << x.front() << endl;
    //     cout << "last element : " << x.back() << endl;
    //     cout << "empty or not : " << x.empty() << endl;

    vector<int> b;
    vector<int> z(5, 7);

    vector<int> b(z);
    cout << "Print last :\n";
    for (int i = 0; i < b.size(); i++)
    {
        cout << z[i] << " ";
    }
    cout << endl;

    cout << "Capacity : " << b.capacity() << endl;
    cout << "Size : " << b.size() << endl;

    b.push_back(5);
    cout << "Capacity : " << b.capacity() << endl;
    cout << "Size : " << b.size() << endl;

    b.push_back(7);
    cout << "Capacity : " << b.capacity() << endl;
    cout << "Size : " << b.size() << endl;
    b.push_back(8);
    cout << "Capacity : " << b.capacity() << endl;
    cout << "Size : " << b.size() << endl;

    b.push_back(4);
    cout << "Capacity : " << b.capacity() << endl;
    cout << "Size : " << b.size() << endl;

    b.push_back(3);
    cout << "Capacity : " << b.capacity() << endl;
    cout << "Size : " << b.size() << endl;

    b.push_back(0);
    cout << "Capacity : " << b.capacity() << endl;
    cout << "Size : " << b.size() << endl;

    for (int i = 0; i < b.size(); i++)
    {
        cout << b[i] << " ";
    }
    cout << "Element at second index : " << b.at(2) << endl;
    cout << "Element at third index : " << b.at(3) << endl;
    cout << "Element at zeroth index : " << b.at(0) << endl;
    cout << "Element at first index : " << b.at(1) << endl;
    cout << "Element at fourth index : " << b.at(4) << endl;
    cout << "before pop : " << endl;
    for (int i = 0; i < b.size(); i++)
    {
        cout << b[i] << " ";
    }
    cout << endl;
    b.pop_back();
    cout << "after pop : " << endl;
    for (int i = 0; i < b.size(); i++)
    {
        cout << b[i] << " ";
    }
    cout << "Before clear:\n";
    cout << "size : " << b.size() << endl;
    cout << "Capacity : " << b.capacity() << endl;
    cout << endl;
    b.clear();
    cout << "After clear:\n";
    cout << "size : " << b.size() << endl;
    cout << "Capacity : " << b.capacity() << endl;

    // deque<int> a;
    // a.push_back(6);
    // a.push_back(7);
    // a.push_back(0);
    // a.push_back(1);
    // a.push_back(2);
    // a.push_front(9);
    // for (int i : a)
    // {
    //     cout << i << " ";
    // }
    // cout << endl;
    // a.erase(a.begin() + 1, a.begin() + 4);
    // cout << "After erasing\n";
    // for (int i : a)
    // {
    //     cout << i << " ";
    // }
    // cout << endl;

    // list<int> l;
    // l.push_back(1);
    // l.push_back(3);
    // l.push_back(2);
    // l.push_front(0);
    // l.push_front(9);
    // l.push_front(8);
    // l.push_front(7);
    // cout << "front : " << l.front() << endl;
    // cout << "back : " << l.back() << endl;

    // for (int i : l)
    // {
    //     cout << i << " ";
    // }
    // cout << endl;
    // l.erase(l.begin());
    // for (int i : l)
    // {
    //     cout << i << " ";
    // }
    // cout << endl;

    // stack<int> b;
    // b.push(1);
    // b.push(2);
    // b.push(3);
    // b.push(0);

    // cout << "Top element " << b.top() << endl;
    // cout << "Size " << b.size() << endl;
    // b.pop();
    // cout << "Last element " << b.top() << endl;
    // cout << "Size " << b.size() << endl;

    // cout << "New stack\n";

    // stack<int> a(b);
    // cout << "Top element " << a.top() << endl;
    // cout << "Size " << a.size() << endl;
    // a.pop();
    // cout << "Last element " << a.top() << endl;
    // cout << "Size " << a.size() << endl;

    // stack<string> b;
    // b.push("Hello");
    // b.push("World");
    // cout << "Top element " << b.top() << endl;
    // cout << "Size " << b.size() << endl;
    // b.pop();
    // cout << "Top element " << b.top() << endl;
    // cout << "Size " << b.size() << endl;

    // queue<int> b;
    // b.push(5);
    // b.push(6);
    // b.push(1);
    // b.push(0);
    // b.push(9);
    // cout << "Front element : " << b.front() << endl;
    // cout << "last element : " << b.back() << endl;
    // cout << "size : " << b.size() << endl;

    // b.pop();
    // cout << "Front element : " << b.front() << endl;
    // cout << "last element : " << b.back() << endl;
    // cout << "size : " << b.size() << endl;

    // priority_queue<int> max;
    // max.push(1);
    // max.push(0);
    // max.push(9);
    // max.push(5);
    // max.push(3);

    // priority_queue<int, vector<int>, greater<int>> min;
    // min.push(7);
    // min.push(9);
    // min.push(1);
    // min.push(3);
    // min.push(5);
    // min.push(0);
    // int n = max.size();
    // for (int i = 0; i < n; i++)
    // {
    //     cout << max.top() << " ";
    //     max.pop();
    // }
    // cout << endl;
    // int m = min.size();
    // for (int i = 0; i < m; i++)
    // {
    //     cout << min.top() << " ";
    //     min.pop();
    // }
    // cout << endl;

    // set<int> s;
    // s.insert(1);
    // s.insert(9);
    // s.insert(8);
    // s.insert(5);
    // s.insert(1);
    // s.insert(5);
    // s.insert(5);
    // for (int i : s)
    // {
    //     cout << i << " ";
    // }
    // cout << endl;

    return 0;
}
