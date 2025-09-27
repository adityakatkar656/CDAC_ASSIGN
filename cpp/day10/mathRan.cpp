#include<iostream>
using namespace std;
#include<math.h>

int main(){
        int num = -166;
       
       int ans;
       ans = sqrt(num);
       cout << "sqrt " << ans << endl;
    
       int absres = abs(num);
       cout << "abs " << absres << endl;

       int powans = pow(3,2);
       cout << "power " << powans << endl;

       int ceilans = ceil(8.8);
       cout << " ceil " << ceilans << endl;

       int floorans = floor(8.8);
       cout << " floor " << floorans << endl;

       int roundans = round(8.8);
       cout << " round " << roundans << endl;

       int roundans1 = round(8.4);
       cout << " round " << roundans1 << endl;

    return 0;
}