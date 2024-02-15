#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    vector<int> x={20,10,7,15,3};
    int flag=1;
    for(int i=0;i<5;i++){
            flag=1;
        for(int j=i+1;j<5;j++)
        {
            if(x[i]>x[j]){
                swap(x[i],x[j]);
                flag=0;}
        }
    if(flag==1)
        break;

    }
for(int i=0;i<5;i++)
    cout << x[i] << endl;
    return 0;
}
