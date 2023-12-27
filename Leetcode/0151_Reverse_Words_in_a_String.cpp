
class Solution {
public:
    string reverseWords(string s) {
        string sentence = "";
        string word = "";
        int n = s.size();
        int i = 0, j;
        stack<string> st;
        for(int i = 0; i<n; ++i){
            if(s[i] != ' '){
                int j = i;
                word = "";
                while( s[j] != ' ' && j < n)
                {
                    word += s[j];
                    j++;
                }
                st.push(word);
                i = j;
            }
        }
        int k = st.size();
        while(k)
        {
            string wrd = st.top();
            st.pop();
            sentence += wrd;
            k--;
            if( k > 0)
                sentence += " ";
        }
        return sentence;
    }
};
