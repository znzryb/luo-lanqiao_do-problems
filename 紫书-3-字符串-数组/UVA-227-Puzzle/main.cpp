#include <iostream>
#include <string.h>
using namespace std;
char puzzle[10][10],c;string operte;int space_occurI=0,space_occurJ=0,cnt=0;bool isBreak=false;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    cin.unsetf(ios::skipws);
    cin.ignore(1024,'\n');      // cin 初始化，忽略所有\n
    while(true) {
        cnt+=1;
        for(int i=1;i<=5;i++) {
            for(int j=1;j<=5;j++) {
                cin>>c;
                if(c=='Z') {
                    return 0;
                }
                if(c!='\n')
                    puzzle[i][j]=c;
                if(c==' ') {
                    space_occurI=i;
                    space_occurJ=j;
                }
            }
        }
        cin>>operte;
        cout<<"Puzzle #"<<cnt<<endl;
        for(int i=0;i<operte.size()-1;i++) {
            if (operte[i]=='A') {
                if((space_occurI-1)<1) {
                    isBreak=true;
                    cout<<"This puzzle has no final configuration."<<endl;
                    break;
                }
                puzzle[space_occurI][space_occurJ]=puzzle[space_occurI-1][space_occurJ];
                puzzle[space_occurI-1][space_occurJ]=' ';
                space_occurI-=1;
            }else if(operte[i]=='B') {
                if((space_occurI+1)>5) {
                    isBreak=true;
                    cout<<"This puzzle has no final configuration."<<endl;
                    break;
                }
                puzzle[space_occurI][space_occurJ]=puzzle[space_occurI+1][space_occurJ];
                puzzle[space_occurI+1][space_occurJ]=' ';
                space_occurI+=1;
            }else if(operte[i]=='L') {
                if(space_occurJ-1<1) {
                    isBreak=true;
                    cout<<"This puzzle has no final configuration."<<endl;
                    break;
                }
                puzzle[space_occurI][space_occurJ]=puzzle[space_occurI][space_occurJ-1];
                puzzle[space_occurI][space_occurJ-1]=' ';
                space_occurJ-=1;
            }else if(operte[i]=='R') {
                if(space_occurJ+1>5) {
                    isBreak=true;
                    cout<<"This puzzle has no final configuration."<<endl;
                    break;
                }
                puzzle[space_occurI][space_occurJ]=puzzle[space_occurI][space_occurJ+1];
                puzzle[space_occurI][space_occurJ+1]=' ';
                space_occurJ+=1;
            }
        }
        if(isBreak==false) {
            for(int i=1;i<=5;i++) {
                for(int j=1;j<=5;j++) {
                    cout<<puzzle[i][j]<<" ";
                }
                cout<<endl;
            }
        }
        memset(puzzle,'\0',sizeof(puzzle));
    }
    return 0;
}
