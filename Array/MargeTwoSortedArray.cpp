void merge(long long arr1[], long long arr2[], int n, int m) 
        { 
            // Create a arry of length n+m -> where n is a arr1 length  and m is a arr2 length
            long long arr[m+n];
          // arr1 ->
            int left = 0;
          // arr2 ->
            int right = 0;
          // new array ->
            int index = 0;

          // compair tham and store in new array
            while(left < n && right < m ){
                if(arr1[left] < arr2[right]){
                   arr[index++] = arr1[left++];
               } 
               else {
                   arr[index++] = arr2[right++];
               }
            }
           // for rest of the  arr1 
            while(left < n){
                arr[index++] = arr1[left++];
            }
            // for rest of arr2
            while(right < m){
                arr[index++] = arr2[right++];
            }
            //palce it back in sorted order
            for(int i=0;i<n+m;i++){
                if(i<n){
                    arr1[i] = arr[i];
                }
                
                else {
                    arr2[i-n] = arr[i];
                }
                
            }
        } 
