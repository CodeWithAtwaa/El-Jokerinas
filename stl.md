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
- the vector has many built in  functions.
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


