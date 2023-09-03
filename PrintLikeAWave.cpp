#include <bits/stdc++.h> 
vector<int> wavePrint(vector<vector<int>> arr, int nRows, int mCols)
{
     vector<int> ans;

     for(int col =0;col<mCols;col++){

         if(col&1){
              // if col is odd - Bottom to Top
              for (int row = nRows-1; row >= 0; row--) {
                ans.push_back(arr[row][col]);
              }

         }

         else {
              // if col is even - Top to Bottom
              for (int row = 0; row < nRows; row++) {
                ans.push_back(arr[row][col]);
              }
         }
     }
     return ans;
}
