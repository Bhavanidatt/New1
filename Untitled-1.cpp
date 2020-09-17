#include<iostream>
#include<algorithm>
using namespace std;


int umbrellacount(int people, int umb[], int s){

    cout << "Size is " << s << endl;
    int i=0,k=0;
    int count=0;
    int remaining=people;
    int need[people];

    for(k=0;k<people;k++){
        need[k]=0;
    }
    k=0;
    while(i<s){

        if(remaining >= umb[i]){
            remaining=remaining-umb[i];
            count++;
            need[k]=umb[i];
            k++;
        }
        else{
            i++;
            if(i==s && remaining-umb[i-1]!=0 && remaining!=0){
                return -1;
            }
        }
    }
     for(k=0;k<people;k++){
        if(need[k]!=0){
            cout<< need[k] <<" ";
        }
    }
    return count;
}
int main(){

    int people;
    cout << "Enter Number of people: " ;
    cin >> people;

    int type;
    cout << "Enter type of Umbrellas: ";
    cin >> type;

    int umb[type];
    for(int i=0;i<type;i++){
        cin >> umb[i];
    }

    int count;
    count=umbrellacount(people,umb, type);
    cout << endl << "count of umbrellas is " << count;
    return 0;

}
