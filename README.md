# Algorithms

Experiences About Algorithms Learning of Shijie Li.

## Data Structures

### Linear List

A list Like a array

### Array

initializations

``` C++
int n = 10;
int a[n];
memset(a, 0, n * sizeof(int));
```

``` C++
int a = {0,0,0,0,0};    //int a[5] = {0};
```

``` C++
vector<int> a(10,0);
vector<int> b(3,9);
a.push_back(1);
a.size();                                   //11
a.assign(2,4);
a.size();                                   //2
a.back();                                   //4
a.front();                                  //4
a.empty();                                  //false
a.reserve(100);                             //a.size() == 100
a.clear();                                  //a.size() == 0
a.insert(a.begin(), b.begin(), b.end());    //a.size() == 3
a.erase(a.begin(), a.begin() + 1);          //a.size() == 2
a.resize(10, 2);                            //a.size() == 10
a.capacity();
a.swap(b);                                  //a.size() == 3
```

### Node List

node structure

``` C++
struct Node {
    int val;
    Node* next;
    Node(int _val) : val(_val), next(NULL) {}
    Node(int _val = 0, Node* _node = NULL) {
        val = _val;
        next = _node;
    }
};
```

### Stack

``` C++
stack <int> stk;
stk.empty();        //true
stk.push(10);       //false
stk.empty();        //false
stk.size();         //1
stk.top();          //10
stk.pop();          //void
stk.empty();        //true;
```

### Queue

``` C++
queue<int> q;
q.empty();          //true
q.push(1);
q.push(2);
q.front();          //1
q.back();           //2
q.size();           //2
q.pop();
q.size();           //1
```
