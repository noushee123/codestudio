int findDuplicate(vector<int>&arr){
   int ans = 0;

   for(int i=0;i<n;i++){
     ans = ans*arr[i];
   }
   for(int i=1i<n;i++){
     ans = ans*i;
   }
  return ans;
}