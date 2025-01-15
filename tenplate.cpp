//// templates in cpp
////templates are predefine functon blueprints that can be used when using the same functionality for differnct return type or data data type 
//#include <iostream>
//using namespace std;
//
//
//int main (){
//template <typename T> 
// T sumFunction(T x,T y){
//	return x+y;
//}
//	cout<<sumfunction<int>(2+3)<<endl;
//	cout<<sumfunction<double>(2.2+3.3)<<endl;
//	
//	
//}


#include <iostream>
 using namespace std;

 template <typename T>
T sum(const T a, const T b) {
 return a + b;
 }

 int main() {
 cout << sum<float>(1, 2.5) << endl;
 return 0;
 }
