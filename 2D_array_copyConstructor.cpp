#include <iostream>
using namespace std;

class Matrix{
    int ** data;
    int rows;
    int cols;

    public:
    Matrix(int r,int c) : rows(r),cols(c) {
        data = new int*[rows];
        for (int i ; i<rows ; i++ )
        data[i] = new int [cols];
    }
        void assign_data(){
            for(int i=0;i<rows;i++){
                for(int j=0;j<cols; j++){
                    cin>>data[i][j];
                }
            }
        }

        void print_data(){
            for(int i=0;i<rows;i++){
                for(int j=0;j<cols; j++){
                    cout<<data[i][j]<<" ";
                }
                cout<<endl;
            }
        }

    Matrix(Matrix& source){
        rows=source.rows;
        cols=source.cols;
        // data = source.data;
        data = new int*[rows];
        for (int i=0 ; i<rows ; i++){
            data[i]= new int [cols];}
        
        for(int i=0; i<rows ; i++){
            for (int j=0; j<cols ;j++){
                data[i][j]=source.data[i][j];
            }
        }
    }

    ~Matrix(){
        for(int i=0 ; i<rows ;i++){
            delete data [i];
        }
        delete [] data;
    }
};

int main()
{
    Matrix M1(2,2);
    M1.assign_data();
    M1.print_data();
    Matrix M2(M1);
    cout<<endl;
    M2.print_data();
    cout<< "hwllo ";

  
return 0;
}