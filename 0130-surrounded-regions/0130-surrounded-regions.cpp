class Solution {
public:
    void solve(vector<vector<char>>& board) {
        if (board.empty() || board[0].empty()) return;
        
        int row = board.size();
        int col = board[0].size();

        for (int i = 0; i < row; ++i) {
            dfs(board, i, 0);
            dfs(board, i, col - 1);
        }
        for (int i = 0; i < col; ++i) {
            dfs(board, 0, i);
            dfs(board, row - 1, i);
        }

        for (int i = 0; i < row; ++i) {
            for (int j = 0; j < col; ++j) {
                if (board[i][j] == '-') {
                    board[i][j] = 'O';
                } else {
                    board[i][j] = 'X';
                }
            }
        }
    }

    void dfs(vector<vector<char>>& board, int i, int j) {
        int row = board.size();
        int col = board[0].size();

        if (i < 0 || i >= row || j < 0 || j >= col || board[i][j] != 'O') {
            return;
        }

        board[i][j] = '-';
        
        dfs(board, i + 1, j);
        dfs(board, i - 1, j);
        dfs(board, i, j + 1);
        dfs(board, i, j - 1);
    }
};
