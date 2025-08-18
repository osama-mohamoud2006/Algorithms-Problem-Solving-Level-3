#include <iostream>
#include <iomanip>
#include <limits>
#include<cstdlib>
using namespace std;
int random(int from , int to){return rand()%(to -from +1)+from;}
// the repetation of the number 

void fill_array_with_random(short arr[3][3] ,short row , short col){
    for(short i=0; i<row; i++){
        for(short j=0; j<col; j++){
            arr[i][j]=random(1,12);
        }
    }

}

short enter_number(){
    short n=0;
    do{
        cout<<"\nenter the number to count in matrix: ";
        cin>>n;
        while(cin.fail()|| n<0){
            cin.clear();
            cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
            cout<<"\nenter correct number!: ";
            cin>>n;

        }
    }while(0>n || cin.fail()==true);

    return n ; 
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

     // enter number and count the repetaion
     short the_number_to_search= enter_number();
      
       cout<<"\nthe number "<<the_number_to_search<<" count in matrix is: "
     << the_repetation_of_number( arr ,  the_number_to_search,3 ,3)<<endl<<endl;


}