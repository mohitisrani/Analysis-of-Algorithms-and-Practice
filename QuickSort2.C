//https://www.hackerrank.com/challenges/quicksort2/problem

void quickSort(vector <int> &arr) {
   partition(arr,0,arr.size()-1);
}

void partition(vector <int> &arr, int start, int end){
if(end>start){
    int pivot=arr[start];
    vector<int> left;
    vector<int> right;
    for(int i=start+1;i<=end;i++){
        if(arr[i]<pivot){
            left.push_back(arr[i]);
        }else{
            right.push_back(arr[i]);
        }
    }
    int i=start;
    
    for(auto it=left.begin();it!=left.end();it++){
        arr[i++]=*it;
    }
    arr[i++]=pivot;
    for(auto it=right.begin();it!=right.end();it++){
        arr[i++]=*it;
    }
    partition(arr,start,start+left.size()-1);
    partition(arr,start+left.size()+1,end);
    for(i=start;i<=end;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
}
    
 
