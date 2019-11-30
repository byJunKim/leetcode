class Solution {
public:
    string frequencySort(string s) {
        
        //hash table
        std::unordered_map<char, int> hash_map;
        
        for(int i = 0; i < s.length(); i++){
            
            if(hash_map.find(s[i]) != hash_map.end()){
                //character repeated
                //increment the counter
                hash_map.find(s[i])->second++;
            }else{
                hash_map.insert({s[i], 1});
            }
        }
        
        //max heap
        priority_queue<std::pair<int, char>> pq;
        for(auto it = hash_map.begin(); it != hash_map.end(); it++){
            pq.push(std::make_pair(it->second, it->first));
        }
        
        string ans;
        std::pair<int, char> element;
        while(!pq.empty()){
            element = pq.top();
            for(int j = 0; j < element.first; j++){
                ans += element.second;
            }
            pq.pop();
        }
        return ans;
    }
};