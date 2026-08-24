class StockSpanner {
public:
    vector<int> prices;   // saari prices yahan store hongi
    stack<int> st;        // sirf indices store honge
    
    StockSpanner() {
        // kuch init nahi karna
    }
    
    int next(int price) {
        prices.push_back(price);
        int i = prices.size() - 1; // current index
        
        // jab tak stack khaali nahi, aur top index ki price <= current price
        while (!st.empty() && prices[st.top()] <= price) {
            st.pop(); // is index ko hata do, ye current ke under aa gaya
        }
        
        int span;
        if (st.empty()) {
            // koi bhi purana bada price nahi mila, matlab shuru se hi span hai
            span = i + 1;
        } else {
            // jitna gap hai top index aur current index ke beech, wahi span hai
            span = i - st.top();
        }
        
        st.push(i); // apna index push kar do
        
        return span;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */