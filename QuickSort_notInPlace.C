//https://www.hackerrank.com/challenges/quicksort2/problem

void quickSort(vector <int> &arr) {
   if(arr.size()>1){
        int pivot=arr[0];
        vector<int> left;
        vector<int> right;
        for(int i=1;i<arr.size();i++){
            if(arr[i]<pivot){
                left.push_back(arr[i]);
            }else{
                right.push_back(arr[i]);
            }
        }
        quickSort(left);
        quickSort(right);   

        int i=0;

        for(auto it=left.begin();it!=left.end();it++){
            arr[i++]=*it;
        }
        arr[i++]=pivot;
        for(auto it=right.begin();it!=right.end();it++){
            arr[i++]=*it;
        }
        for(i=0;i<arr.size();i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
}
    
 
