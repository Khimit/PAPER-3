/**

INPUT:
5               
1 3 4 5 7         arr1={1,3,4,5,7}  
4
2 3 5 6           arr2={2,3,5,6}

OUTPUT:
Union : 1 2 3 4 5 6 7
Intersection : 3 5 

**/



#include <bits/stdc++.h>
using namespace std;

int main() {

   int n1;            // enter first array size
   cin >> n1;
   int arr1 [n1];
   for(int i = 0 ; i < n1 ; i++){  
       cin >> arr1 [i];    // taking input in first array
   }

   int n2;           // enter second array size
   cin >> n2;
   int arr2 [n2];
   for(int i = 0 ; i < n2 ; i++){
       cin >> arr2 [i];    // taking input in second array
   }

   set <int> s;
   vector <int> v;
   vector <int> answer;

   for(int  i = 0 ; i < n1 ; i++){
       s.insert ( arr1[i] );
       v.push_back ( arr1[i] );
   }
   for(int i = 0 ; i < n2 ; i++){
       s.insert ( arr2[i] );
       v.push_back ( arr2[i] );
   }

   cout << "Union : ";      // printing union of two arrays
   for(auto i : s){
       cout << i << " ";
   }
   cout << endl;

   sort( v.begin() , v.end() );

   cout << "Intersection : ";   // for intersection of two arrays
   for(int i = 0 ; i < v.size()-1 ; i++){
       if( v[i] == v[i+1] ){
           answer.push_back ( v[i] );
       }
   }

   for( auto i : answer){
       cout << i << " ";        // printing intersection of two arrays
   }
   cout << endl;

   return 0;
}
