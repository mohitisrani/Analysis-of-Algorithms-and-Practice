https://www.hackerrank.com/challenges/quicksort3/problem



void partition(vector <int> &arr, int start, int end){
if(end>start){
    int pivot=arr[end], j=start, temp;
    
    for(int i=start;i<end;i++){
        if(arr[i]<pivot){
            temp=arr[i];
            arr[i]=arr[j];
            arr[j++]=temp;
        }
    }
    temp=arr[j];
    arr[j++]=arr[end];
    arr[end]=temp;

    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    partition(arr,start,j-2);
    partition(arr,j,end);
    

}
}


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int sz,temp;
    cin>>sz;
    vector<int> arr;
    for(int i=0;i<sz;i++){
        cin>>temp;
        arr.push_back(temp);
    }
    partition(arr,0,sz-1);
    return 0;
}
