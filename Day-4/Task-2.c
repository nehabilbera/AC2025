//For rotation of matrix : 


class Solution {
public:
int i,j,temp,mat;
int n;
    void rotate(vector<vector<int>>& matrix) {
       
        n = matrix.size();

        for(i=0;i<n;i++){
        for(j=0;j<=i;j++){
            temp=matrix[i][j];                  //for transpose
            matrix[i][j]=matrix[j][i];
            matrix[j][i]=temp;            
            }
        }
        for(j=0;j<n/2;j++){
        for(i=0;i<n;i++){
            mat=matrix[i][j];
            matrix[i][j]=matrix[i][n-1-j];
            matrix[i][n-1-j]=mat;             //for rotation of matrix
            }
        }

    }
};
