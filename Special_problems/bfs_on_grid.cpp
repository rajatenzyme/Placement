#include<bits/stdc++.h>
using namespace std;
int vis[1001][1001];
int dist[1001][1001];
int n,m;
bool isValid(int x, int y){
    if(x<1 || x>n || y<1 || y>m) return false;
    if(vis[x][y] == 1) return false;
    return true;
}

int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, 1, 0, -1};

void bfs(int srcX, int srcY){
    queue<pair<int, int>> q;
    dist[srcX][srcY] = 0;
    vis[srcX][srcY] = 1;
    q.push({srcX, srcY});

    while (!q.empty())
    {
        int currX = q.front().first;
        int currY = q.front().second;
        q.pop();
        for(int i=0;i<4;i++){
            if(isValid(currX+dx[i], currY+dy[i])){
                int newX = currX + dx[i];
                int newY = currY + dy[i];
                q.push({newX, newY});
                dist[newX][newY] = dist[currX][currY] + 1;
                vis[newX][newY] = 1;
            }
        }
    }
    cout<<"Distance Array is :"<<endl;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cout<<dist[i][j]<<" ";
        }
        cout<<endl;
    }

    
}


int main(){

    cin>>n>>m;
    int x,y;
    //for(int i=0;i<m;i++){
        cin>>x>>y;
    //}
    bfs(x,y);
}


/*

/*
test case:
4 4
1 1

Distance Array is :
0 1 2 3 
1 2 3 4 
2 3 4 5 
3 4 5 6


*/