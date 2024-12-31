#include<bits/stdc++.h>
using namespace std;
class myStack{
    public:
    vector<int> v;
    void push(int x){
        v.push_back(x);
    }
    void pop(){
        if(v.size()>0){
            v.pop_back();
        }
    }
    int top(){
        return v.back();
    }
    int size(){
        return v.size();
    }
    bool empty(){
        if (v.size() == 0) {
            return true;
        }
        else{
            return false;
        }
    }
};
int main()
{
    int n;
    myStack st;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        st.push(x);
    }
    while( !st.empty() ){
        cout<<st.top()<<endl;
        st.pop();
    }


return 0;
}