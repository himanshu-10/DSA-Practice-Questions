class Solution {
public:
    bool winnerOfGame(string colors) {
        int aliceCnt = 0;
        int bobCnt = 0;
        
        for(int i = 1;i<colors.size()-1;i++){
            char curr = colors[i];
            char next = colors[i+1];
            char prev = colors[i-1];
            
            if(curr == 'A' && next == 'A' && prev == 'A'){
                aliceCnt++;
            }else if(curr == 'B' && next == 'B' && prev == 'B'){
                bobCnt++;
            }
        }
        
        // return aliceCnt > bobCnt;
        if(aliceCnt > bobCnt)
            return true;
        else return false;
    }
};