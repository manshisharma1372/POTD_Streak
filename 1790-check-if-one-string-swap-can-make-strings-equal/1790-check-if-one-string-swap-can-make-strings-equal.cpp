class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        int n = size(s1), cnt=0, idx1=0, idx2=0;
	for(int i = 0; i < n; i++)
		if(s1[i] != s2[i]){
			cnt++;
			if(!idx1) idx1 = i; else idx2 = i;
		}             
	return (cnt == 0 || cnt == 2) && s1[idx1] == s2[idx2] && s1[idx2] == s2[idx1];
    }
};