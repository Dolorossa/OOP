#include <iostream>
#include <fstream>

using namespace std;

// void print(int **mass,int n){
//    for (int i = 0; i < n; i++) {
//         for ( int j = 0; j < n; j++) 
//         { 
//             cout<<mass[i][j]<<", "; 
//         }
//         cout<<endl;
//    }
// }

void Clear(int **matrix, int n){
    for(int i=0; i<n; i++){
        delete []matrix[i];
    }
    delete[]matrix;
}

bool palindrom(int numb){
    int rev=0, num=numb, curr;
    do { 
        curr = num % 10; 
        rev = (rev * 10) + curr; 
        num = num / 10; } 
        while (num != 0);

    if (rev==numb){
        return true;
    }    
    return false;
}

int main()
{

    using namespace std;
    freopen ("input.txt" , "r" , stdin );
    freopen ("output.txt" , "w" , stdout );

    int n;
    cin >> n; 

    int **matrix = new int*[n]; 
    for (int i = 0; i < n; i++)  //выделение памяти
        matrix[i] = new int[n];


    int arf_mean=0;
    for (int i = 0; i < n; i++){ // ввод 
        for ( int j = 0; j < n; j++) 
        { 
            cin >> matrix[i][j]; 
            arf_mean+=matrix[i][j];
        }
    };
    
    arf_mean/=n*n; 
    cout<<"arifmetic mean = "<<arf_mean<<endl;  
     
    int min=9999999; 
    for (int i = 0; i < n; i++){ // ввод 
        for ( int j = 0; j < n; j++) 
        { 
            if (matrix[i][j]%2==0 && matrix[i][j]<min){
                min=matrix[i][j];
            }
        }
    };

    cout<<"minimal even = "<<min<<endl;

    int count =0;
    for (int i = 0; i < n/2; i++){ // ввод 
        for ( int j = n/2; j < n; j++) 
        { 
            if (palindrom(matrix[i][j])){
                count++;
            }
            if (palindrom(matrix[j][i])){
                count++;
            }
        }
    };

    cout<<"number of palindroms = "<<count<<endl;

    int **matrix_2 = new int*[n]; 
    for (int i = 0; i < n; i++)  //выделение памяти
        matrix_2[i] = new int[n];


    for (int i = 0; i < n; i++){ // ввод 
        for ( int j = 0; j < n; j++) 
        { 
            cin >> matrix_2[i][j]; 
        }
    };

    // for (int i = 0; i < n; i++){    //B/2 
    //     for ( int j = 0; j < n; j++) 
    //     { 
    //         matrix[i][j]/=2; 
    //     }
    // };
    
    cout<<"A = "<<endl;
    int s; 
    for(int k=0; k<n; k++){   //C^2
    for(int i=0; i<n; i++){
          s=0;
          for(int j=0; j<n; j++){
              s+=matrix_2[k][j]*matrix_2[j][i];
          }
          cout<<s+matrix[k][i]/2<<' ';

    }
    cout<<endl;
 }
    
    Clear(matrix,n);
    Clear(matrix_2,n);

    return 0;
}