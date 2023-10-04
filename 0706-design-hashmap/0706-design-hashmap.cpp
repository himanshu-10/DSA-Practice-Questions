class MyHashMap {
public:
    // initialize a array of max size
    int m[1000001];
    
    MyHashMap() {
        // make all element to -1
        for(int i = 0;i<1000001;i++){
            m[i] = -1;
        }
    }
    
    void put(int key, int value) {
        // put in map 
        m[key] = value;
    }
    
    int get(int key) {
        // return m.key
        return m[key];
        
    }
    
    void remove(int key) {
        // after removal mark the array m with key value as -1
        m[key] = -1;
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */