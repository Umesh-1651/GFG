class Solution {
  public:
    void setMatrixZeroes(vector<vector<int>> &mat) {
        // code here
        vector<bool> r(mat.size(),false);
        vector<bool> c(mat[0].size(),false);
        
        for(int i=0;i<mat.size();i++){
            for(int j=0;j<mat[i].size();j++){
                if(mat[i][j] == 0) {r[i]=true;c[j]=true;}
            }
        }
       
        for(int i=0;i<mat.size();i++){
          
            for(int j=0;j<mat[i].size();j++){
                if(r[i] == true || c[j] == true ){
                   
                    mat[i][j] = 0;
                }
            }
        }
    }
};