 int m=matrix.size();                 //rows
 int n=matrix[0].size();             //columns


//.................
int main(){
    vector<vector<int>>test{{1,2},
                            {5,6},
                            {9,10}};   // 3 rows and 2 columns
  
    cout<<"Columns: "<<test[0].size();  // 2
    cout<<"Rows: "<<test.size();  // 3
  
    return 0;
}

//.................




//..........
-->[[1,3]]



-->kaise sorted hai vo dekhana eak barr....
-->row wise 
-->column wise
-->both
-->next row kaise start ho rahi hai...



//...................


class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
      int m=matrix.size();
      int n=matrix[0].size();
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(matrix[i][j]==target)
                {
                    return 1;
                }
                if(matrix[i][j]>target)
                {
                    return 0;
                }
            }
            
        }
        return 0;
    }
};



//..................
//binary search approach
// dont think like 2d...think like 1d long sorted array..

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row=matrix.size();
        int col=matrix[0].size();
        int low=0;
        int high=(row*col)-1;
        int mid;

        while(low<=high)
        {
           mid=low+(high-low)/2;
           if(matrix[mid/col][mid%col]==target)
           {
               return 1;
           }
           else if(matrix[mid/col][mid%col]>target)
           {
               high=mid-1;
           }
           else
           {
               low=mid+1;
           }
        }
        return 0;
    }
};


