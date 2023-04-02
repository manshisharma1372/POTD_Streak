class Solution {
public:
     map<int, bool> mp_d1; 
    map<int, bool> mp_d2; 
    map<int, bool> mp_row;
    map<int, bool> mp_col;
    int ans = 0;

    bool can_be_placed(int row, int col) {
        if (mp_row[row] == false && 
            mp_col[col] == false && 
            mp_d1[row + col] == false && 
            mp_d2[row - col] == false
           ) {

            return true;
        }
        else {
            return false;
        }
    }

    void mark(int row, int col) {
        mp_row[row] = true;
        mp_col[col] = true;
        mp_d1[row + col] = true;
        mp_d2[row - col] = true;
    }

    void unmark(int row, int col) {
        mp_row[row] = false;
        mp_col[col] = false;
        mp_d1[row + col] = false;
        mp_d2[row - col] = false;
    }

    void fun(int row, int n) {
        if (row == n) {
            ans ++;
            return;
        }

        for (int col = 0; col < n; col++) {
            if (can_be_placed(row, col)) {

                mark(row, col);
                
                fun(row + 1, n);
                
                unmark(row, col);
            }
        }
    }


    int totalNQueens(int n) {
        ans = 0;
        fun(0, n);
        return ans;

    }
};