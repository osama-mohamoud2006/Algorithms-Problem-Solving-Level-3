#include <iostream>
#include <iomanip>
#include<cmath>
#include<cstdlib>
using namespace std;

int random(int from , int to){return rand()%(to -from +1)+from;}
// the repetation of the number

void fill_array_with_random(short arr[3][3] ,short row , short col){
    for(short i=0; i<row; i++){
        for(short j=0; j<col; j++){
            arr[i][j]=random(0,1);
        }
    }

}

short the_repetation_of_number(short arr[3][3] , short the_number_to_search,short row , short col){
    
     short count =0;

     for(short r=0; r<row; r++){
          for(short c=0; c<col; c++)
          {
               if(the_number_to_search==arr[r][c]) count++;
          }
     }

     return count ; 
}

bool is_sparse_matrix(short arr[3][3] , short row , short col){
   short b = row*col;
    return (the_repetation_of_number(arr,0,3,3)>ceil((float)b/2));

}
       

void print_matrix(short arr[3][3] ,short row , short col){
    for(int o=0; o<row; o++){
        for(int o2=0; o2<col; o2++)
        {
            cout<<setw(3)<<arr[o][o2]<<" ";
        }
        cout<<endl;
    }
}

int main()
{
    srand((unsigned)time(NULL));
    short arr[3][3];
  
   fill_array_with_random( arr ,3, 3);
   cout<<setw(3)<<"\nMatrix\n";
   print_matrix( arr ,3, 3);

     
      (is_sparse_matrix(arr,3,3) == true)
        ? cout<<"\nYes,it is sparse matrix!\n\n": 
    cout<<"\nNO,it isn't sparse matrix!\n\n";
  


}