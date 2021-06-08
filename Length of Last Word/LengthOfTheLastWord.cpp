class Solution {
public:
    int lengthOfLastWord(string s) {
        if (s.length()==0){
            return 0;
        }
        else{
            int cont=0;
            int len = s.length()-1;
            int maxSize = len-deleteSpaceFromString(s,len);
            for (int i = maxSize; i>=0; i--){
                if (s[i]==' '){
                    break;
                }
                cont++;
            }
            return cont;
        }
    }
    
    /* Delete n spaces from the last position, beacause in some
    cases the function could fail, so we need to validate these cases.*/
    int deleteSpaceFromString(string s,int len){
        int cont=0;
        for (int i=len;i>=0;i--){
            if (s[i]!=' '){
                break;
            }
            cont++;
        }
        return cont;
    }
};