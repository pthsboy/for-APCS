#include<iostream>
using namespace std;
#define cant_move 1000000
int main(){
    int n,m;
    cin>>n>>m;
    int arr[n][m];
    int Minimum=cant_move;
    int x,y;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
            if(arr[i][j]<Minimum){
                Minimum=arr[i][j];
                x=i;
                y=j;
            }
        }
    }
    int total=Minimum;
    while(true){
        int minn=cant_move;
        int temp_x,temp_y;
        //up
        if(x-1>=0){
            if(arr[x-1][y]<minn){
                temp_x=x-1;
                temp_y=y;
                minn=arr[x-1][y];
            }
        }
        //down
        if(x+1<n){
            if(arr[x+1][y]<minn){
                temp_x=x+1;
                temp_y=y;
                minn=arr[x+1][y];
            }   
        }
        //left
        if(y-1>=0){
            if(arr[x][y-1]<minn){
                temp_x=x;
                temp_y=y-1;
                minn=arr[x][y-1];
            }
        }
        //right
        if(y+1<m){
            if(arr[x][y+1]<minn){
                temp_x=x;
                temp_y=y+1;
                minn=arr[x][y+1];
            }
        }
        if(minn==cant_move){
            break;
        }else{
            arr[x][y]=cant_move;
            x=temp_x;
            y=temp_y;
            total+=minn;
        }
    }
    cout<<total;
     
     
    return 0;   
}
