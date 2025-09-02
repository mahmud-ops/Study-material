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