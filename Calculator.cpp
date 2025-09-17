// #include <iostream>
// using namespace std;
// namespace calculator {
//
//     int add(int a,int b) {
//         return a+b;
//     }
//     int sub(int a,int b) {
//         return a-b;
//     }
//     double divide(int a,int b) {
//         if (b == 0) {
//             cout<<"Math err";
//         }
//         return (double)a/b;
//     }
//     int multiply(int a,int b){
//         return a*b;
//     }
//     int modulo(int a,int b) {
//         return a%b;
//     }
// }
// int main() {
//     cout<<"MENU \n"<<endl;
//     cout <<"1.Add"<<endl;
//     cout<<"2.Sub"<<endl;
//     cout<<"3.Multiply"<<endl;
//     cout<<"4.Divide"<<endl;
//     cout <<"5.Modulus"<<endl;
//
//     int c;
//     cout<<"Enter your choice :"<<endl;
//     cin>>c;
//     if (c>0 && c<=5) {
//         cout<<"Enter two numbers:"<<endl;
//         int a,b;
//         cin>>a>>b;
//
//         switch (c) {
//             case 1:
//                 std::cout<<calculator::add(a,b);
//             break;
//             case 2:
//                 std::cout<<calculator::sub(a,b);
//             break;
//             case 3:
//                 std::cout<<calculator::multiply(a,b);
//             break;
//             case 4:
//                 std::cout<<calculator::divide(a,b);
//             break;
//             case 5:
//                 std::cout<<calculator::modulo(a,b);
//             break;
//
//         };
//         cout<<endl<<endl<<endl;
//         char cont;
//         cout<<"Do you want to continue?(y/n):";
//         cin>>cont;
//         if (cont=='n') {
//             return 0;
//         }
//         else {
//             main();
//     }
//
//     }else {
//         cout<<"Invalid Choice"<<endl;
//     }
//
//     }
//
//
