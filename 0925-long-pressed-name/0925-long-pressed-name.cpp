class Solution {
public:
    bool isLongPressedName(string name, string typed) {
        int j = 0;
        if (name[0] != typed[0])
            return false ;

          
        for ( int i = 0; i< typed.length(); i++)
        {
            if (name[j] == typed[i] )
                j++;
          
    
           else if (name[j] != typed[i] && name[j-1] != typed[i])
                 return false;
        }
              if (j == name.length())
           return true;
     else 
            return false;
    }
};