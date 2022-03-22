#include <iostream>

using namespace std;

int min(int x, int y, int z)
{
    return min(min(x, y), z);
}



int editDistance(string st1, string str2, int m, int n){
    int editD[m+1][n+1];

    for(int i=0; i<=m; i++){
        for(int j=0; j<=n; j++){

            if(i == 0)
                editD[i][j] = j;

            else if (j == 0)
                editD[i][j] = i;

            else if(st1[i-1] == str2[j-1]){
                editD[i][j] = editD[i-1][j-1];
            }else{
                editD[i][j] = 1 + min(editD[i][j-1], editD[i-1][j], editD[i-1][j-1]);
                if(editD[i][j] == 1 + editD[i-1][j-1]){
                   cout<<"REPLACE" << endl;
                    if(editD[i][j] == 1+ editD[i][j-1]){
                        cout<<"Insert"<<endl;
                    }
                    else{
                        cout<<"REMOVE"<<endl;
                    }
                    }
                 }
           }


        }


    for(int i=0; i<=m; i++){
        for(int j=0; j<=n; j++){
            cout<<editD[i][j]<< " " ;
        }
        cout<<endl;
    }
    cout<<endl;

     return editD[m][n];

}


int main()
{
    // your code goes here
    string str1 = "sunday";
    string str2 = "saturday";

    cout << editDistance(str1, str2, str1.length(), str2.length()) << endl;

    return 0;
}
