vector<int> countingSort(vector<int> arr) {
    vector<int> vi(100, 0);
    for(int i = 0; i<arr.size();++i){
        vi[arr[i]]++;
    }

    return vi;
}
