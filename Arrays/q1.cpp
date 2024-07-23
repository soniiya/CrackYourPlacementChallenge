#include<bits/stdc++.h>
using namespace std;

class Solution{
    public: 

    void setZeros(vector<vector<int>>&matrix){
        int n=matrix.size();
        int m=matrix[0].size();

        bool firstrow0=false, firstcol0=false;

        for(int i=0;i<n;i++){
            if(matrix[i][0]==0){
                firstcol0=true;
                break;
            }
        }
        for(int j=0;j<m;j++){
            if(matrix[0][j]==0){
                firstrow0=true;
                break;
            }
        }

        for(int i=1;i<n;i++){
            for(int j=1;j<m;j++){
                if(matrix[i][j]==0){
                    matrix[0][j]=0;
                    matrix[i][0]=0;
                }
            }
        }

        for(int i=1;i<n;i++){
            for(int j=1;j<m;j++){
                if(matrix[0][j]==0 || matrix[i][0]==0){
                    matrix[i][j]=0;
                }
            }
        }

        if(firstrow0){
            for(int j=0;j<m;j++){
                matrix[0][j]=0;
            }
        }

        if(firstcol0){
            for(int i=0;i<n;i++){
                matrix[i][0]=0;
            }
        }
    }
};

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;

        vector<vector<int>>matrix(n,vector<int>(m,0));
        cout<<"enter matrix: ";
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>matrix[i][j];
            }
        }

        Solution obj;
        obj.setZeros(matrix);

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cout<<matrix[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}