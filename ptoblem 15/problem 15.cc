#include <iostream>
#include <iomanip>
#include <limits>
#include<cstdlib>
using namespace std;
int random(int from , int to){return rand()%(to -from +1)+from;}
// the repetation of the number 

void fill_array_with_random(int arr[3][3] ,int row , int col){
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            arr[i][j]=random(1,12);
        }
    }

}

int enter_number(){
    int n=0;
    do{
        cout<<"\nenter the number to count in matrix: ";
        cin>>n;
        if(cin.fail()|| n<0){
            cin.clear();
            cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
            cout<<"\nenter correct number!: ";
            cin>>n;

        }
    }while(0>n || cin.fail()==true);

    return n ; 
}

int the_repetation_of_number(int arr[3][3] , int the_number_to_search,int row , int col){
    
     int count =0;
     for(int r=0; r<row; r++){
          for(int c=0; c<col; c++)
          {
               if(the_number_to_search==arr[r][c]) count++;
          }
     }

     return count ; 
}

void print_matrix(int arr[3][3] ,int row , int col){
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
    int arr[3][3];
  
   fill_array_with_random( arr ,3, 3);
   cout<<setw(3)<<"\nMatrix\n";
   print_matrix( arr ,3, 3);

     // enter number and count the repetaion
     int the_number_to_search= enter_number();
      
       cout<<"\nthe number "<<the_number_to_search<<" count in matrix is: "
     << the_repetation_of_number( arr ,  the_number_to_search,3 ,3)<<endl<<endl;


}