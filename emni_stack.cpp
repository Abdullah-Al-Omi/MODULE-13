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
        if(v.size()>0){
            return v[v.size()-1];
        }
        return -1;
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
    myStack st;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        st.push(x);
    }
    // cout<<st.top()<<endl;
    while (!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();

    }
    cout<<endl;
    

      


return 0;
}