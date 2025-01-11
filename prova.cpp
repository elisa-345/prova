#include <iostream>
using namespace std; 
int main()
{
    int m[3][3];
    int i,j,max=0;
    
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            cout<<"inserisci elemento "<<i<<" e "<<j<<endl;
             cin >> m[i][j];
}}
        cout<<"la matrice è";
        cout<<endl;
        for(i=0;i<3;i++){
        for(j=0;j<3;j++){
             cout<< m[i][j]<<" ";
        
    }
     cout<<endl;}
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            if(m[i][j]>max){max=m[i][j];}
            if(j==i){
                cout<<"il numero "<<m[i][j]<<" fa parte della diagonale\n";
                
                }
                cout<<"il numero maggiore fra i tre è "<<max;
            }
            
        }}
