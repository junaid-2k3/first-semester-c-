#include <iostream>
#include <string>
#include <fstream>
using namespace std;
// // you can open the file either through constructor or by using the open() function explicitly 
int main()
{
  string name;
  ofstream fout("demofile.txt");  // to write into the file  .. file opened through contructor 
  if(!fout){
    cerr<< "error opening file for writting ";
    return 1;
  }
  
  // fout.open("demofile.txt"); //alternative way to open a file 
  
  fout<<"helllo "<<endl<<"next line "<<endl<<"3rd line"<<endl;
  // fout.seekp(0);
  fout.close();
 

 //-----------------------

   ifstream inFile("demofile.txt"); // Open file for reading
    if (!inFile) {
        cerr << "Error opening file for reading.\n";
        return 1;
    }

    string line;
    inFile.seekg(0);
    while (getline(inFile, line)) { // Read line by line
    // getline(inFile,line);
        cout << line << endl;
    }

    inFile.close(); // Close the file
    
    return 0;
}

//----------------------------------------------------
// int main(){

// string pizza;
// fstream file("demofile.txt" ,ios::in | ios::out);
// file<<"creamy melty"<<endl;
// file.seekg(0);
// getline(file,pizza);
// cout<<pizza;
// }
