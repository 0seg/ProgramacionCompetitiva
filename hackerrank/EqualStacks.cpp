int equalStacks(vector<int> h1, vector<int> h2, vector<int> h3) {
    stack<int> sh1,sh2,sh3;
    int sum1=0,sum2=0,sum3=0;
    for(int i=h1.size()-1; i>=0;i--){
        sh1.push(h1[i]);
        sum1+=h1[i];
    }
    for(int i=h2.size()-1; i>=0;i--){
        sh2.push(h2[i]);
        sum2+=h2[i] ;
    }
    
    for(int i=h3.size()-1; i>=0; i--){
        sh3.push(h3[i]);
        sum3+=h3[i];
    }
    while (sum1!= sum2 or sum1!= sum3 or sum2!=sum3) {
        if (sum1>=sum2 and sum1>=sum3){
            if(!sh1.empty()){
                sum1 -= sh1.top(); 
                sh1.pop();}
        }
        else if (sum2>=sum1 and sum2>= sum3 ){
            if(!sh2.empty()){
                sum2 -= sh2.top();
                sh2.pop();}
        }
        else if(sum3>=sum1 and sum3>= sum2){
            if(!sh3.empty()){
                sum3 -= sh3.top();
                sh3.pop();}
        }
    }

    return sum1;
}