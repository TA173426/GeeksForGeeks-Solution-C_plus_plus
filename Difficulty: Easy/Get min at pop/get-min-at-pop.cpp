stack<int> _push(int arr[], int n) {
    
    stack<int> st;
    int maxi ;
    for(int i =0;i<n;i++){
        if(st.empty()){
            st.push(arr[i]);
            maxi = arr[i];
            continue;
        }
        maxi = min(arr[i],maxi);
        st.push(maxi);
    }
    return st;
}

// Function to print minimum value in stack each time while popping.
void _getMinAtPop(stack<int> s) {

    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    // code here
}