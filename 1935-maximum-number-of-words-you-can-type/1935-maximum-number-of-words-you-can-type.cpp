class Solution {
public:
    int canBeTypedWords(string text, string bl) {
    bool isBadWord = 0; 
	int res =0;
	for (int i=0; i<text.length(); i++) 
	{   for (int j=0; j<bl.length(); j++) 
			if (text[i]==bl[j])  
                isBadWord = 1;
			if (text[i]==' ' || i==text.length()-1)
		   { 
            if (isBadWord==0) res++; 
			else isBadWord=0; 
		}
	}
	return res;    
    }
};
