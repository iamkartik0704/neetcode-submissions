class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        // we will be assigning each cell a unique identifier(0-80)
        // alsdo assign the big squares a unique number
        
        unordered_set<char>rows[9];
        unordered_set<char>cols[9];
        unordered_set<char>box[9];

        for(int r=0;r<9;r++){
            for(int c=0;c<9;c++){
                char ch = board[r][c];
                if(ch=='.') continue;
                int boxNo = 3*(r/3)+(c/3);
                if(rows[r].count(ch)||cols[c].count(ch)||box[boxNo].count(ch)){
                    return false;
                }
                // if does not exist in the set
                rows[r].insert(ch);
                cols[c].insert(ch);
                box[boxNo].insert(ch);
            }
        }
        return true;
    }
};
