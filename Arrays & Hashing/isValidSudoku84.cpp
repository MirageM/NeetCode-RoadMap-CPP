class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_map<char, unordered_set<int>> cols;
        unordered_map<char, unordered_set<int>> rows;
        unordered_map<char, unordered_set<int>> squares;
        for(int r = 0; r < 9; r++){
            for(int c = 0; c < 9; c++){
                char cell = board[c][r];
                if(cell == '.'){
                    continue;
                }
                if(cols[c].count(cell) || rows[r].count(cell) || squares[(r / 3) * 3 + c / 3].count(cell)){
                return false;
            }
                cols[c].insert(cell);
                rows[r].insert(cell);
                squares[(r / 3) * 3 + c / 3].insert(cell);
            }
        }
        return true;
    }
};
