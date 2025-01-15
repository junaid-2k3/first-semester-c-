#include <iostream>
using namespace std;
 
 struct book
 {
 	string name="english text book";
 	string author="unknown";
 	int prize=100;
 };
 
 int main()
 
 {
 	book books[3];
 	books[0].name="urdu book";
 	books[0].author="not unkown";
 	books[0].prize=200;
 	books[1].name="urdu book";
 	books[1].author="not unkown";
 	books[1].prize=200;
 	books[2].name="urdu book";
 	books[2].author="not unkown";
 	books[2].prize=200;
 	
 	 for (int i = 0; i < 3; i++) {
        cout << "Book " << i + 1 << " details:" << endl;
        cout << "Title: " << books[i].name << endl;
        cout << "Author: " << books[i].author << endl;
        cout << "Pages: " << books[i].prize << endl;
        cout << endl;
    }
 	
    return 0;
 }

 // #include <iostream>
// using namespace std;

// int ftn(char array[],int size){
//     int max_consecutive=1;
//     int count=1;
//     int A=0;
//     int C=0;
//     int G=0;
//     int T=0;

//     for(int i=0 ; i<size ; i++)
//     {
//         if (array[i] == array[i - 1]) {  // Check if current character is the same as previous

//         if(array[i]=='A'){
//             A++;
//         }
//         else if(array[i]=='G'){
//             G++;
//         }
//          else if(array[i]=='T'){
//             T++;
//         }
//          else if(array[i]=='C'){
//             C++;
//         }
//         }
//     }
//     int Max= max(T,max(G,max(A,C)));
//     return Max;
// }

// int main()
// {
//     int size=10;
//  char array[size]={'A','G','T','C','G','T','T','T','T'};
//  cout<<ftn(array ,size);
// }

////////////////////////////////
