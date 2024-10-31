// // ternary operator


// syntax - Expression 1 ? Expression 2 : Expression 3
//          Expression 1 ? true : false
//          when Expression 1 is true print true else print false

// Ques.1- number is even or odd using ternary operator

// #include<iostream>
// using namespace std;
//  int main()
//  {
//     int n;
//     cout<<"Enter n ";
//     cin>>n;

//     if(n%2==0 ? cout<<true : cout<<false);

//  }
// Enter n 25
// 0






// Ques.2- if marks>33 print - pass else print fails  ***( without using if-else statement )

// #include<iostream>
// using namespace std;
//  int main()
//  {
//     int marks;
//     cout<<"Enter marks ";
//     cin>>marks;

//  if( marks>33 ? cout<<"pass " : cout<<"fails " );

//  }
//  Enter marks 33
// fails




// also print character @ for pass and # for fails


// #include<iostream>
// using namespace std;
//  int main()
//  {
//     char m;
//     int n = 2;
//     cout<<"Enter m ";
//     cin>>m;

//     m = (n>2) ?  '@':'#' ;

//     cout<<m;
  

//  }
// Enter m 5
// #




// some q. on character 
// time > 10 print $ else print ! 
// using ternary operator

// #include<iostream>
// using namespace std;
//  int main()
//  {
//      char ch;
//      int time;
//      cout<<"Enter time ";
//      cin>>time;
//      int a=10;

//      ch=(time>10) ? '$' : '*';
//      cout<<ch;
//  }

// Enter time 3
// *


// mathematicel question solve using ternary operator

// #include<iostream>
// using namespace std;
//  int main()
//  {
//     int a;
//     a=(3*5+5-10*100)>10000 ? 1 : 0;
//     cout<<a;

//  }
//  //0





// #include<iostream>
// using namespace std;
//  int main()
//  {
//     int a;
//    a=(8*3)>23 ? 6*5 : 0;
//     cout<<a;

//  }
//  // 30




// #include<iostream>
// using namespace std;
//  int main()
//  {
//     int a;
// //  a=5>7 ? 10 : 0 ? 1 : 10*7;  //70
// //  a=5<7 ? 10 : 0 ? 1 : 10*7;  //10
// //  a=5<7 ? 10 : 0 ? 1 : 10*7==70 ? 50 >5 : 100!=10 ? 10 : 900 ; // 10 
//  a=0 ? 1: 50>5; // 1

//     cout<<a;

//  }
 


//     *** SWITCH STATEMENTS ***

// Ques.1- print - ok , hi, hey, hello , invalid constant 
// when we press - 1 ,  2 ,  3 , 4 , other number except these.
// using switch case 



// #include<iostream>
// using namespace std;
//  int main()
//  {
//     int n;
//     cout<<" Enter n " ;
//     cin>>n;

//     switch(n)
//     {
//         case 1:
//         cout<<"ok";
//         break;
//         case 2:
//         cout<<"hi";
//         break;
//         case 3:
//         cout<<"hey";
//         break;
//         case 4:
//         cout<<"hello";
//         break;
//         default:
//         cout<<" invalid number ";
//         break;
//     }

//  }
// //   Enter n 4
// // hello




// print week no. 1 to 7 and also day of week name.
// using swaitch case 

// #include<iostream>
// using namespace std;
//  int main()
//  {
//     int week;
//     cout<<"Enter week no ";
//     cin>>week;

//     switch(week)
//     {
//         case 1: // 1 is a week no.-> week me 1st day kon sa hai
//         cout<<"day is monday";
//         break;
//           case 2:  // week no. 2-> week me 2nd day kiska hai
//         cout<<"day is tuesday";
//         break;
//           case 3:
//         cout<<"day is wednesday";
//         break;
//           case 4:
//         cout<<"day is thurday";
//         break;
//           case 5:
//         cout<<"day is friday";
//         break;
//           case 6:
//         cout<<"day is saturday";
//         break;
//           case 7:
//         cout<<"day is sunday";
//         break;
//            default:
//         cout<<"invaid number";
//         break;
//     }
//  }


//  // i/p month number and print total no. of days in month using switch case.

//  #include<iostream>
//  using namespace std;
//   int main()
//   {
//     int monthno;
//     cout<<"Enter month number ";
//     cin>>monthno;

//     switch((monthno<=7 && monthno%2!=0) || (monthno>=8 && monthno%2==0))
//     {
//       case 1: // it is a month no.1 
//       cout<<31;
//       break;
//     }

//     switch(monthno==4 ||monthno==6|| monthno==9|| monthno==11 )
//     {
//       case 1:
//       cout<<30;
//       break;
//     } 
//     switch(monthno)
//     {
//       case 2:
//       cout<<28;
//       break;
//     }
//   }


// Ques.3-> make a calculator using switch case and fun ( +,-,*,/ )
//  take i/p two nos. and an operations from users.



// #include<iostream>
// using namespace std; 
// int main()
// {
//   int a;
//   cout<<"Enter first no."<<endl;
//   cin>>a;
  
//     int b;
//   cout<<"Enter second no."<<endl;
//   cin>>b;


// here we takes (int) integer operations not characters like (+) so we take in i/p as integer not arithmetic symbols.
// // in next code we write (char) data type which takes character opertor.

// int operation; 
// cout<<"Enter operation number"<<endl;
// cin>>operation;

//   switch(operation)
//   {
//     case 1:
//     cout<<a+b;
//     break; 

//        case 2:
//     cout<<a-b;
//     break;

//        case 3:
//     cout<<a*b;
//     break;

//        case 4:
//     cout<<a/b;
//     break;

//        case 5:
//     cout<<a%b;
//     break;

//     default:
//     cout<<"invalid opertion take ";
//     break;
//   }
//   }




// here we take (char) data tpye to take arithmetic opertor.
// char operation; 

// #include<iostream>
// using namespace std; 
// int main()
// {
//   int a;
//   cout<<"Enter first no."<<endl;
//   cin>>a;
  
//     int b;
//   cout<<"Enter second no."<<endl;
//   cin>>b;

// char operation; // here we take (char) data type for taken characters as i/p 
// cout<<"Enter operator "<<endl;
// cin>>operation;

//   switch(operation)
//   {
//     case '+':
//     cout<<a+b;
//     break; 

//     case '-':
//     cout<<a-b;
//     break;

//        case '*':
//     cout<<a*b;
//     break;

//        case '/':
//     cout<<a/b;
//     break;

//        case '%':
//     cout<<a%b;
//     break;

//     default:
//     cout<<"invalid opertion take ";
//     break;
//   }
//   }




