class Solution {
public:
    bool squareIsWhite(string coordinates) {
        char alph1 = coordinates[0];
        int alph2 = (int)coordinates[1] - 48;
        if(alph1 == 'a' || alph1 == 'c' || alph1 == 'e' || alph1 == 'g'){
            if(alph2%2){
                return false;
            }else{
                return true;
            }
        }else{
            if(alph2%2==0){
                return false;
            }else{
                return true;
            }
        }
    }
};