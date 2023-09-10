#include<stack>
#include<limits.h>
#include<vector>
using namespace std;

vector<int> next_smaller_element(vector<int> arr, int n){
    vector<int> ans(n);
    stack<int> st;
    st.push(-1);
    for(int i=n-1; i>=0; i--){
        int cur = arr[i];
        while(st.top()!=-1 && arr[st.top()]>=cur){
            st.pop();
        }
        ans[i] = st.top();
        st.push(i);
    }
    return ans;
}

vector<int> previous_smaller_element(vector<int> arr, int n){
    vector<int> ans(n);
    stack<int> st; 
    st.push(-1);
    for(int i=0; i<n; i++){
        int cur = arr[i];
        while(st.top()!=-1 && arr[st.top()]>=cur){
            st.pop();
        }
        ans[i] = st.top();
        st.push(i);
    }
    return ans;
}

int largest_area_histogram(vector<int> heights, int n){
    int area = INT_MIN;
    vector<int> next(n);
    next = next_smaller_element(heights, n);
    vector<int> previous(n);
    previous = previous_smaller_element(heights, n);
    for(int i=0; i<n; i++){
        int length = heights[i];
        if(next[i]==-1){
            next[i]=n;
        }
        int breadth = next[i] - previous[i] - 1;
        int next_area = length * breadth;
        area = max(area, next_area);
    }
    return area;
}

int maximalAreaOfSubMatrixOfAll1(vector<vector<int>> &mat, int n, int m){
    vector<int> heights(m);
    int area = INT_MIN;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(mat[i][j]==1){
                heights[j]++;
            }
            else{
                heights[j] = 0;
            }
            }
        int next_area = largest_area_histogram(heights, m);
        area = max(area, next_area);
    }
    return area;
}
int main(){
    cout<<"ALL GOOD"<<endl;
    return 0;
}