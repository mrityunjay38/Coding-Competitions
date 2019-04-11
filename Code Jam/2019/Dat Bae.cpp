#include<bits/stdc++.h>
using namespace std;

int V,T,N,B,F;
int res[10][1024];
vector<long> bits;


void read(){
    
    string s;
    
    for(int i=0;i<5;i++){
        cin>>s;
        for(int j=0;j<N-B;j++){
            res[i][j]=s[j]-'0';
        }
    }
    
    for (int i = 0; i < N-B; i++){
        
        string tmp="";
        for (int j = 0; j < 5; j++)
            tmp+= to_string(res[j][i]);
        reverse(tmp.begin(), tmp.end());
        bitset<1024> b(tmp);
        bits.push_back(b.to_ulong());
    }
    
    
    for(int i=0;i<N;i++){
        auto t=find(bits.begin(),bits.end(),i);
        if(t!=bits.end())
            continue;
        else
            cout<<i<<" ";
    }
    cout<<endl;
    fflush(stdout);
    cin>>V;
    if(V!=1)
        exit(0);
    
}

void send(){
    
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < N; j++)
            cout<<((j >> i) & 1) ? 1 : 0;
        cout<<"\n";
        fflush(stdout);
    }
    
}

int main(){
    
    cin>>T;
    
    for(int i=0;i<T;i++){
        cin>>N>>B>>F;
        send();
        read();
        bits.clear();
    }
    
    return 0;
}
