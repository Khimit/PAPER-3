/**

INPUT:
6 2                  n=6  and  d=2
1 2 3 4 5 6          arr={1,2,3,4,5,6}

OUTPUT:
3 4 5 6 1 2          arr1={3,4,5,6,1,2}

**/



#include <bits/stdc++.h>
using namespace std;

void rotate(int arr[] , int d , int n){
   int t;
   int arr1 [n];

   // logic for rotation
   for(int i = 0 ; i < n ; i++){

       t = i - ( d % n );

       if( t < 0 ){
           t = n + t;
       }
       arr1 [t] = arr [i];
   }

   for(int i = 0 ; i < n ; i++){
           cout << arr1 [i] << " ";  // rotated array printing
   }

}

int main() {

   int n , d;
   cin >> n >> d;           // taking input size and d

   int arr [n];
   for(int i = 0 ; i < n ; i++){
       cin >> arr [i];      // taking array input
   }

   rotate( arr , d , n);    // rotate fuction

   return 0;
}
