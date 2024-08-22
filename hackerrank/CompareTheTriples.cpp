vector<int> compareTriplets(vector<int> a, vector<int> b) {
    vector<int> vi(2,0);
    for(int i = 0;i<a.size();i++){
        if(a[i]>b[i]) vi[0]++;
        else if(a[i]<b[i]) vi[1]++;
    }
    return vi;
}