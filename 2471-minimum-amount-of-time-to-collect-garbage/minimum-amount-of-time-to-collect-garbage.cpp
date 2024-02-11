class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        int finalAns = 0;
        vector<int> countGV;
        int countG = 0;
        vector<int> countPV;
        int countP = 0;
        vector<int> countMV;
        int countM = 0;
        for(int i = 0; i < garbage.size(); i++){
            for(int j = 0; j < garbage[i].length(); j++){
                if(garbage[i][j] == 'G'){
                    countG++;
                }else if(garbage[i][j] == 'P'){
                    countP++;
                }else{
                    countM++;
                }
            }
            countGV.push_back(countG);
            countPV.push_back(countP);
            countMV.push_back(countM);
            countG = 0;
            countP = 0;
            countM = 0;
        }
        for(int i = countPV.size()-1; i>-1; i--){
            if(countPV[i]==0){
                countPV.pop_back();
            }else{
                break;
            }
        }
        for(int i = countGV.size()-1; i>-1; i--){
            if(countGV[i]==0){
                countGV.pop_back();
            }else{
                break;
            }
        }
        for(int i = countMV.size()-1; i>-1; i--){
            if(countMV[i]==0){
                countMV.pop_back();
            }else{
                break;
            }
        }
        for(int i = 1; i < countPV.size(); i++){
            // if(countPV[i]!=0){
                countP = countP + countPV[i] + travel[i-1];
            // }
        }
        countP = countP+countPV[0];
        for(int i = 1; i < countGV.size(); i++){
            // if(countGV[i]!=0){
                countG = countG + countGV[i] + travel[i-1];
            // }
        }
        countG = countG+countGV[0];
        for(int i = 1; i < countMV.size(); i++){
            // if(countMV[i]!=0){
                countM = countM + countMV[i] + travel[i-1];
            // }
        }
        countM = countM+countMV[0];
        cout << countG <<endl;
        cout << countP <<endl;
        cout << countM <<endl;
        finalAns = countG + countP + countM;
        return finalAns;
    }
};