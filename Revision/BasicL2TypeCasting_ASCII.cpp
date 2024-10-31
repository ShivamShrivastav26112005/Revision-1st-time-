// taking input in c++


// #include<iostream>
// using namespace std; 
// int main()
// {
//     int n;
//     cout<<"enter n ";
//     cin>>n;
//     // int a;
//     //  a=n*n;

//  int a=n*n;
//      cout<<a;
// }
// // enter n 5
// // 25



// sum of two numbers take input
// #include<iostream>
// using namespace std; 
// int main()
// {
//     int a;
//     cout<<"Enetr a "<<endl;
//     cin>>a;
//     int b;
//     cout<<"Enter b"<<endl;
//     cin>>b;
//     int c=a+b;
//     cout<<c<<" is the sum";

// }
// // Enetr a 
// // 50
// // Enter b
// // 50
// // 100 is the sum
  


 

//  // char data type
// #include<iostream>
// using namespace std; 
// int main()
// {
//     // char ch='@';
//     // cout<<ch<<endl; //@

//     // char ch = 'rr';
//     // cout<<ch; //error

//     char ch = 'r';
//     cout<<ch; //r

// }



// TYPE CASTING 
// find an ascii value of the character 

//  each character has an asci value
// ascii value is a integer type

// #include<iostream>
// using namespace std; 
// int main()
// {
//     char ch ='a'; 
//     cout<<ch<<endl;//a
 
//     cout<<(int)ch<<endl;//97

//      char ca ='A'; 
//       cout<<(int)ca<<endl; // 65

//        char c ='0'; 
//       cout<<(int)c; // 48
// }


// TYPE CASTING 

// #include<iostream>
// using namespace std;
//  int main()
//  {
// //    float a=5.5;
// //     cout<<a<<endl; //5.5
// //    cout<<(int)a<<endl; //5
// //    cout<<(bool)a <<endl; //1
// //    cout<<(char)a; //1♣




// char ch='A';
// cout<<ch<<endl; // A
// cout<<(int)ch<<endl; //65 ascii value of A
// cout<<(int)ch+100; //165

//  } 



// #include<iostream>
// using namespace std;
//  int main()
//  {
//     int n;
//     cout<<"Enter n"<<endl;
//     cin>>n;
// //    float a= (float)n/2;
// //    cout<<a;
  
//     float y = (float)n;
//     cout<<y/2;


//  }



// fractional part of the real number 
// fractional part is always less than 1


// when i/p is Positive value

// #include<iostream>
// using namespace std;
//  int main()
//  {
//     float n; 
//     cout<<"Enter n"<<endl;
//     cin>>n; //5.5

//     // 5.5 // f.p = 5
//      int y=(int)n;
//      cout<<y<<endl; //5
//      n-=y;
//      cout<<n; //0.5


//  }




// when i/p is negative value


#include<iostream>
using namespace std;
 int main()
 {
 float x; //9.9
 cout<<"Enter x"<<endl;
 cin>>x;

 int y= (int)x;
//  cout<<y<<endl; //9
//  x=x-y;
//  cout<<x<<endl; //0.9

 if(y<0)  y=y-1;
 float z= (float)y;
 x=x-z;
 cout<<x;

 }