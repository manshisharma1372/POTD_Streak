class SeatManager {
public:
    
    set<int> st;
    SeatManager(int n) {
        for(int i=1;i<=n;i++){
            st.insert(i);
        }
    }
    
    int reserve() {
        
        int remove= *st.lower_bound(0);
        st.erase(remove);
        return remove;
        
        
    }
    
    void unreserve(int seatNumber) {
        st.insert(seatNumber);
    }
};

/**
 * Your SeatManager object will be instantiated and called as such:
 * SeatManager* obj = new SeatManager(n);
 * int param_1 = obj->reserve();
 * obj->unreserve(seatNumber);
 */