void merge(long long arr1[], long long arr2[], int n, int m) 
        { 
            // left array
           int left = n-1;
          // right array
           int right = 0;
           
           while(left >=0 && right < m){
               if(arr1[left] > arr2[right]){
                   swap(arr1[left],arr2[right]);
                   left--;
                   right++;
               }
               else{
                   break;
               }
           }
          // sort both array
           sort(arr1,arr1+n);
           sort(arr2,arr2+m);
        }
