#include<bits/stdc++.h>
using  namespace std;

class LRUCache {
public:
    LRUCache(int capacity) {

    }
    
    int get(int key) {
        
    }
    
    void put(int key, int value) {
        
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */

 int main(){
    LRUCache cache(2);
    cache.put(1, 1);
    cache.put(2, 2);
    cache.put(3, 3);    // evicts key 2
    cache.put(4, 4);    // evicts key 1
    cache.get(3);       // returns 3
    cache.get(4);       // returns 4
 }