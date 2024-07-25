class Solution {
public:
    string reorganizeString(string s) {

        string ans="";
        //maxheap
        priority_queue<pair<int,char>>pq;//(freq,charcter)

        //map is used as the medium for pushing characters with their freq in maxheap
        unordered_map<char,int> mp;

        //pushing in the map
        for(int i=0;i<s.size();i++){
                mp[s[i]]++;
        }

        //pushing in the heap
        for(auto x:mp){
            pq.push({x.second,x.first});
        }

        
        while(pq.size()){
            //fetching character with maximum frequency
            pair<int,char> p1=pq.top();

            //pop the character with maximum frequency
            pq.pop();

            //case of last character with freq greater than 1 , means ans is not possible
            //so, return empty string
            if(!pq.size() && p1.first>1) return "";

            //case of last character with freq equal to 1 
            //so, return (ans + last character)
            else if(!pq.size() && p1.first==1){
                ans+=p1.second;
                return ans;
            }

            //pq is not empty till now
            else{
                //fetching character with 2nd most frequency 
                pair<int,char> p2=pq.top();

                //pop the character with 2nd most frequency 
                pq.pop();

                //add both characters to the ans
                ans+=p1.second;
                ans+=p2.second;

                //decrease the frequencies of both character by 1 and push them again into the heap
                if(p1.first-1) pq.push({p1.first-1,p1.second});
                if(p2.first-1) pq.push({p2.first-1,p2.second});
            }
        }
        return ans;
    }
};
