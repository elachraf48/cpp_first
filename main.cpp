#include <iostream>
#include <string>

using namespace std;
int x,y,z;
string name;

int hello(){

cout<<"Hello ,world!";

for (x=0;x<7;x++){
        for(y=0;y<=3;y++){
            if(x==y){cout<<endl<<"x("<<x<<")=y("<<y<<")"<<endl;}
           else{cout << endl << x << y<<endl;}
        }

}
return 0;
}
int task(){


cout<<"- whats your name : ";
cin>>name;
cout<<"#----------------------------------------------------------------#"<<endl;
cout<<"  Hello "<<name<<" Game Is Start Now  Give number between 0 and 10 "<<endl;
cout<<"#----------------------------------------------------------------#"<<endl;
cout<<"- you have just 3 chance :";
cin>>z;
x=3;

while(z!=6 && x>>1){
    if(z>=0 && z<=10){

        if(x==2 && z>=0 && z<=10){
                cout<<"- To help u your last number add  "<<(6-z)<< " or "<<-(6-z)<<endl;
        }
        x--;
        cout<<"- you have "<<x<<" chance "<<endl;
        cout<<"- give number between 0 and 10 : ";
        cin>>z;



    }
    else{
            cout<<"- "<<name<<" i tel you between 0 and 10"<<endl;
            cout<<"- you have "<<x<<" chance : ";

            cin>>z;
    }



}
if(z==6){cout<<"Good "<<name<<" you are the best in the world";}
else{cout<<"Bad user i hate you "<<name;}



return 0;


}
int main(){
cout<<"- Do you want "<<endl<<"- Task(1)"<<endl<<"- Hello(2)"<<endl<<"select 1 or 2 : ";
cin>>y;
while(y!=1 && y!=2){
    cout<<"select 1 or 2 : ";
    cin>>y;
}
if(y==1){task();}
else{hello();}
return 0;

}
