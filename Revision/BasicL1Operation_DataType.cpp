// #include <iostream>
// using namespace std;
// int main()
// {
//     cout << "Hello World";
//     cout << endl;
//     cout << endl;
//     cout << "Hey";
// }

// Hello World

// Hey




// #include <iostream>
// using namespace std;
// int main()
// {
//     cout<<4<<endl; // it is a no.
//     cout<<4+7<<endl;; // addition of two no. it is also a no.
//     cout<<"4+7\n"; // it is a text
//     cout<<"1000+36463"; // it is a text
// }
// 4
// 11
// 4+7
// 1000+36463




// #include <iostream>
// using namespace std;
// int main()
// {
//     // variable with declaration
//     // int x;
//     // x=10;
//     // cout<<x<<endl;
//     // x=20;
//     // cout<<x<<endl;

//     // updation of variable
//     int a; // declaration of a variable
//      a=4; // assign value to vari./ initialization
//     cout<<a<<endl;// print 
//     int b;
//     b=5;
//     b=8; // updation 
//     cout<<b<<endl;
// }


// // 4
// // 8


// #include <iostream>
// using namespace std;
// int main()
// {
//     int x;
//     x=9;
//     cout<<x<<endl;
//     cout<<5+x<<endl;
//     x=x-9;
//     cout<<x;

// }

// 9
// 14
// 0


// #include <iostream>
// using namespace std;
// int main()
// {
//     int x;
//     x=9;
//     x=20;
//     x=x-9;
//     cout<<x;

// }
// //11 



// #include <iostream>
// using namespace std;
// int main()
// {
//     int x=5;
//     cout<<x<<endl;
//     // some operation 
//     x=10; //update
// cout<<x<<endl; //10
// x=x+5;
// cout<<x<<endl; //15
// x=x-6;
// cout<<x<<endl; //9
// cout<<x*5<<endl; //45
// cout<<x<<endl; //9
// cout<<x/5; //9/5=1(int)

// }

// 10
// 15
// 9
// 45
// 9
// 1




// arithmetic operation (+,-,*,/,%) on int data type
 


// #include <iostream>
// using namespace std;
// int main()
// {
//     int x=10;
//     int y=5;
//     cout<<x+y+y<<endl;
//     cout<<y-x<<endl;
//     cout<<x*y<<endl;
//     cout<<y/x<<endl;
//     cout<<x%y<<endl;

//     cout<<endl;
//     // check modulus how it works
//     cout<<10%3<<endl; //1

//     cout<<15%6; //3


// }
// 20
// -5
// 50
// 0
// 0

// 1
// 3



// #include <iostream>
// using namespace std;
// int main()
// {
//     // a++ post incre, ++a pre incre
//     // int a=5;
//     // cout<<a<<endl; //5
//     // a++;
//     // cout<<a<<endl;//6
//     // a++;
//     // ++a;
//     // cout<<a<<endl; //8
//     // ++a;
//     // cout<<a<<endl; //9

// // a-- post decre, --a pre decre

// // int x=5;
// // cout<<x--<<endl; //5
// // cout<<x<<endl; //4


// // int x=10;
// // cout<<--x<<endl;//9
// // cout<<--x<<endl; //8
// // cout<<x--<<endl;
// // cout<<x<<endl; //7

// // cout<<--x<<endl; //6
// // cout<<x--<<endl; //6
// // cout<<x; //5




// }




// float data type


// #include <iostream>
// using namespace std;
// int main()
// {
// //    float a = 3.14;
// //    cout<<a<<endl; //3.14

// //    float b= 8; 
// //    cout<<b<<endl; //8



// // float z= 3.14;
// // z=z+5;
// // cout<<z<<endl; //8.14

// // z=z-3;
// // cout<<z<<endl; //5.14

// // z=z*5-14; 
// // cout<<z;//11.7

// // cout<<5/2<<endl; //2
// // cout<<5/25<<endl; //0
// // cout<<5.0/2<<endl; //2.5

// // cout<<5.0/3.0<<endl; //1.66667

// // cout<<5.0<<endl; //5
// // cout<<5<<endl; //5

// // cout<<5+3.14; //8.14




// }






// find remainder(%)

// #include<iostream>
// using namespace std;
//  int main()
//  {
//     int a, b;
//     cin>>a>>b;
//     cout<<a%b<<endl;

//     int r=a%b;
//     cout<<r;
//  }


// 10
// 3
// 1
// 1



// #include<iostream>
// using namespace std;
//  int main()
//  {
//     int d=10;
//     int b=3;
//      int r;
//      int q;
//      q=d/b;
//      r=d-(b*q);
//      cout<<r<<endl; //1 

//      cout<<d%b;
//  }

// 1
// 1






// #include<iostream>
// using namespace std;
//  int main()
//  {
//     // int a=10;
//     // int b=3;
    
//     // cout<<a%b<<endl; //1

//     // int r=a%b;
//     // cout<<r;//1

//     // int x=5;
//     // int y=10;
//     // cout<<x%y<<endl; //5

//      int x=3;
//     int y=5;
//     cout<<x%y<<endl; //3


//     int t=18;
//     int p=4;
//     cout<<t%p; //2

//     // properties a<b modulus -> a
//                // a>b modulus -> a%b
//  }




// percentage of 5 student 

// #include<iostream>
// using namespace std;
//  int main()
//  {
//     float hindi =85;
//     float eng =  91;
//       float maths =69;
//     float phy =  80;
//       float chem =56;

//       float percentage=(hindi+eng+maths+phy+chem)/5;
//       cout<<percentage<<"%";
  
//  }// 76.2%




// calculate area of the circle

// #include<iostream>
// using namespace std;
//  int main()
//  {
//     float r;
//     cout<<"Enter radius ";
//     cin>>r;

//    float area;
//    area=3.14*r*r;
//    cout<<area; // r= 5 // 78.5


// // r= 5
// // cout<<3.14*r*r;
// // 78.5
//  }



// calculate simple interest 
// s.i=p*r*t/100


// #include<iostream>
// using namespace std;
//  int main()
//  {
//     float pi, r, t, si;
//     pi=5000;
//     r=10;
//     t=10;
//     si=(pi*r*t)/100;
//     cout<<si; //5000
//  }


 // boolean data type

#include<iostream>
using namespace std;
 int main()
 {
    cout<<(4>5)<<endl; //0

    cout<<(6<40)<<endl; //1

    cout<<(6<4); //0
 }



