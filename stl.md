# Data Structure

> ## `To Learn Data structure`

- When ? Why?
- How to use ?
- how does it work ?

<hr style="height:4px; border:none; color:#333; background-color:#333;">

### Struct

- A struct is like array and class.
- like array he can store multi data in one variable and diffrent datatype.
- like class you can take object form him , the variable public.

#### `Difinetion`

```cpp
 struct name {
     datatype varnamr;
 };

 struct pair  {
    int x;
    int y
 };

int main() {
    pair z = {10, 20};

    cout << z.x << " " << z.y << "\n";
}
```

<hr style="height:4px; border:none; color:#333; background-color:#333;">

### pair

- like coordinate point in math (x,y).
- can take any datatype in params.
- he built using `struct`.

* he sorted by first param, if two equal use the second.

#### `Difinetion`

```cpp
#include <iostream>
#include<utility>
using namespace std;

int main () {

    // make pair and insert data by diff way.
    pair<int, int> p = {10, 20};
    cout << p.first << " " << p.second << "\n";

    p = make_pair(30,20);
    cout << p.first << " " << p.second << "\n";

    p = {30 , 50};
    cout << p.first << " " << p.second << "\n";

    p.first = 10;
    p.second = 20;
    cout << p.first << " " << p.second << endl;

    // to make array of pair
    vector<pair<int, int>> arr(n), arr1(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i].first >> arr[i].second;

    }

    // to male muti pair
    pair<int, pair<int, int>> point = {10 , {30,40}};
    cout << point.first << " " << point.second.first << " " << point.second.second << "\n";
    point.first = 20;
    point.second = {50,60};
    cout << point.first << " " << point.second.first << " " << point.second.second << "\n";
}
```

<hr style="height:4px; border:none; color:#333; background-color:#333;">

### Vector

- like array, can store mltui value have same datatype.
- he built by using pointer.

#### `Difinetion`

```cpp
#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n ; cin >> n;
    vector<int> arr(n, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "\n";
    }
}
```

#### `Built in functions`

- the vector has many built in functions.

```cpp
#include <iostream>
#include <vector>
using namespace std;
int main() {

    int n ; cin >> n;
    vector<int> arr(n, 0);

    arr.push_back(20); // insert in last array
    arr.emplace_back(100); // insrt in last array
    arr.emplace(arr.begin() + 1, 100); // insert from any where, fast
    arr.insert(arr.begin() + 5 , 10); // insert from any where

    arr.pop_back(); // delete first element
    arr.erase(arr.begin() + 1); // delete from any where
    arr.erase(arr.begin() + 1, arr.begin() + 3);
    arr.clear(); // delete all elements

    arr.assign(100, 0); // add init value
    arr.back(); // print last element
    arr.front(); // print first element
    arr.capacity(); // the size
    arr.size(); // the size
    arr.max_size(); // the max size
    arr.empty(); // check if empty

    arr.reserve(arr.size()); // to reverse
    arr.begin() ; // iterator
    arr.end() - 1; // iterator
    arr.at(5); // to access from any where
}
```

<hr style="height:4px; border:none; color:#333; background-color:#333;">

## Deque

- double ended queue.
- like vector and has some property not found in in vector.
- can add from begin, delete form begin

#### `Difinetion`

```cpp
#include <iostream>
#include <deque>

using namespace std;

int main() {
    deque<int> dq;
    dq.push_back(20); // add from back
    dq.emplace_back(30);
    dq.pop_back(); // remove from back

    dq.push_front(50); // add from begin
    dq.emplace_front(60);
    dq.pop_front(); // remove form begin
}
```

<hr style="height:4px; border:none; color:#333; background-color:#333;">

### Queue

- First in First out (FIFO)

## --------> in (add from end)

## 1 | 2 | 3 | 4 | 5 | 6

<------- out (delete from begin)

#### `Difinetion`

```cpp
#include <iostream>
#include <queue>

using namespace std;

int main() {
    queue<int> q;
    q.push(10);      // add from end
    q.push(20);      // add from end
    q.push(30);      // add from end
    q.push(40);      // add from end
    q.emplace(50); // add from end

    cout << q.size() << "\n"; // size
    q.pop(); //delete from begin

    while (!q.empty()) // loop to print
    {
        cout << q.front() << "\n"; // print first element
        q.pop();
    }
}
```

<hr style="height:4px; border:none; color:#333; background-color:#333;">

### Stack

- Last in First out (LIFO)
- push from top and delete from top

|  60  | <br>
|  50  | <br>
|  40  | <br>
|  30  | <br>
|  20  | <br>
|  10  | <br>
|------| <br>

#### `Difinetion`

```cpp
#include <iostream>
#include <queue>

using namespace std;

int main() {
    stack<int> s;
    s.push(10);    // add from start
    s.push(20);    // add from start
    s.push(30);    // add from start
    s.push(40);    // add from start
    s.push(50);    // add from start
    s.emplace(60); // add from start

    s.pop();                 // delete from top
    cout << s.top() << "\n"; // print first element
    cout << s.size() << "\n"; // size

    while (!s.empty())
    {
        cout << s.top() << "\n"; // print first element
        s.pop();
    }
}
```

<hr style="height:4px; border:none; color:#333; background-color:#333;">
