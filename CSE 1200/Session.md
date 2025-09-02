# Analytical programming (session 1)

## Basic STL ( Vector , Set , Multiset , Map , Stack , Queue )**

### Vector 
- Dynamic array
```cpp
#include<iostream>
#include<vector> // Gotta have this header file

using namespace std;
int main(){

    vector<int> arr; // vector<data_type> variable

    return 0;
}
```
**Adding or removing elements**
```cpp
#include<iostream>
#include<vector>

using namespace std;
int main(){

    vector<int> arr;

    arr.push_back(1); // Added 1 at the end
    arr.push_back(2); 
    arr.push_back(4); 

    for(int i = 0 ; i < arr.size() ; i++){
        cout << arr[i] << " ";
    }

    return 0;
}
```
> 1 2 4