#include <cstdio>
#include <vector>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<long> a(n); for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}
        long left(0); while(left + 1 < n && a[left + 1]){++left;}
        long right(n - 1); while(right > 0 && a[right - 1]){--right;}
        long cost = (right - left); cost = (cost > 0) ? cost : 0;
        printf("%ld\n", cost);
    }

}
///
/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
   int cases;
   int items;
   cin >> cases;
   for(int i = 0; i<cases; i++){
     cin >> items;
     int now,prev;
     int counter = 0;
     for(int j = 0; j<items; j++){
        if(j == 0){
           cin >> now;
           prev = now;
           continue;
       }
       cin >> now;
       if(now != prev){
            counter++;
            prev = now;
        }
        else if(now == 0 && prev == 0)
            counter++;
        else if(now == 1 && prev == 1)
           continue;
     }
    cout << counter << endl;
    }
}
