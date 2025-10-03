#include <iostream>
#include <iomanip>
#define SIZE 10

using namespace std;
/*
int main(int argc,char *argv[]){
  int *pa, *pb, i, temp;
int a[SIZE] ={1,2,3,4,5,6,7,8,9,10}; 
pa = &a[0]; //pa =a;
cout<<"Original: ";
for (i=0; i<SIZE-1; i++ ,pa++){
   cout<<setw(3)<<*pa ;//<<endl;
  //cout<<pa<<endl;
}
cout<<setw(3)<<*pa<<endl;

pa = &a[0];  
pb = &a[SIZE-1];
for (i=0; i<SIZE/2; i++)
{
   temp = *pa;  
   *pa = *pb;  
   *pb = temp;
   pa++;  pb--;
}
pa=&a[0];
pb-=SIZE/2;
cout<<"Reversed: ";
for (i=0; i<SIZE-1; i++ ,pa++){
   cout<<setw(3)<<*pa ;//<<endl;
  //cout<<pa<<endl;
}
cout<<setw(3)<<*pa<<endl;

return 0;
*/
/*

int main(int argc, char *argv[]) {
    int *p, *pa, *pb, i, temp;
    int n = argc - 1;  // Number of numbers passed

    if (n <= 0) {
        cout << "Please provide numbers as command line arguments." << endl;
        return 1;
    }

    p = new int[n];

    // Convert command line arguments to integers
    for (i = 0; i < n; i++) {
        p[i] = atoi(argv[i + 1]);  // argv[0] is program name, so start from argv[1]
    }
*/
int main(int argc, char *argv[]) {
    int *p, *pa, *pb, i, temp;

    int n = argc-1;
    p = new int[n];
    for (i = 0; i < n; i++){
        p[i] = atoi(argv[i+1]);
    }

    /*cout << "How many numbers? " << endl;
    cin >> n;
    p = new int[n]; 
    cout << "What are the numbers? " << endl;
    for (i = 0; i < n; i++) {
        cin >> p[i];  
    }
    */

    // Print original 
    pa = p;
    cout << "Original: ";
    for (i = 0; i < n; i++, pa++) {
        cout << setw(3) << *pa;
    }
    cout << endl;
    
    // Print Reverse
    pa = p;               
    pb = p + n - 1;   
    for (i = 0; i < n / 2; i++) {
        temp = *pa;
        *pa = *pb;
        *pb = temp;
        pa++; pb--;
    }
    
    pa = p;
    cout << "Reversed: ";
    for (i = 0; i < n; i++, pa++) {
        cout << setw(3) << *pa;
    }
    cout << endl;
    
    delete[] p;
    return 0;
}
