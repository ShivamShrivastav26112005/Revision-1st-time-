// if-else or control statements
// even or odd
// #include<iostream>
// using namespace std;
//  int main()
//  {
//     int n;
//     cout<<"enter the no. n"<<endl;
//     cin>>n;
//      if(n%2==0)
//      {
//         cout<<"Even";
//      }
//      else
//      cout<<"odd";

// }




// divisible by 5 or not

// #include<iostream>
// using namespace std;
//  int main()
//  {
//     int n;
//     cout<<"enter the no. n"<<endl;
//     cin>>n;
//      if(n%5==0)
//      {
//         cout<<"yes";
//      }
//      else
//      cout<<"no";

// }




// print absolute value(positive value)(mode) of the integer ?


// #include<iostream>
// using namespace std;
//  int main()
//  {
//    int n;
//     cout<<"enter the no. n"<<endl;
//     cin>>n;
     
// //     if(n<0) n=-n;
// //     cout<<n;


// if(n>0)
// cout<<n;
// else
// cout<<-n;
// }






// #include<iostream>
// using namespace std; 
// int main()
// {
//     int cp;
//     cout<<"Enter cost price"<<endl;
//     cin>>cp;

//     int sp;
//     cout<<"Enter selling price "<<endl;
//     cin>>sp;

//     if(cp<sp)
//     {
//         cout<<"Profit"<<endl;
//          sp=sp-cp;
//      cout<<sp<<endl;
//     }
//     else
//     cout<<"loss"<<endl;
//      cp=sp-cp;
//      cout<<cp;



// }



// no. is 3 digit or not?
// condition for three digit 100-999


// #include<iostream>
// using namespace std;
//  int main()
//  {
//    int n;
//     cout<<"enter the no."<<endl;
//     cin>>n;
// if(n>100 && n<999)
// {
//     cout<<"yes three digits";
// }
// else
// {
//     cout<<"no not a three dogit ";
// }

//  }
  



//   check if a no. is 5 digit or not
// #include<iostream>
// using namespace std;
// int main()
// {
// int n;
// cout<<"Enter n ";
// cin>>n;

// if(n>10000 && n<99999)
// {
//     cout<<"yes";
// }
// else
// cout<<"no";
// }


// no. is divisible by 5 and 3 or not

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter n ";
//     cin>>n;

//     if(n%5==0 && n%3==0)
//     {
//         cout<<" yes";
//     }
//     else
//     cout<<" no";
// }




// no. is divisible by 5 or 3 or not
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter n ";
//     cin>>n;

//     if(n%5==0 || n%3==0)
//     {
//         cout<<" yes";
//     }
//     else
//     cout<<" no";
// }



// take 3 +integer and print greatest of them 


// #include<iostream>
// using namespace std;
// int main()
// {
//     int a,b,c;
//     cout<<"Enter a , b, c ";
//     cin>>a>>b>>c;

//     if(a>b && a>c)
//     {
//         cout<<a<<" is greater ";
//     }
//     if(b>a && b>c)
//      {
//         cout<<b<<" is greater ";
//      }
 
//   if(c>a && c>b)
//      {
//         cout<<c<<" is greater ";
//      }
// }





// method 2 
// nested if-else

// #include<iostream>
// using namespace std;
// int main()
// {
//     int a,b,c;
//     cout<<"Enter a , b, c ";
//     cin>>a>>b>>c;

//     if(a>b && a>c)
//     {
//         cout<<a<<" is greater ";
//     }
//    else if(b>a && b>c)
//    {
//      cout<<b<<" is greater ";
//    }
//    else
//    cout<<c<<" is greater ";
// }



// check character is alphabet or not.
// character - lower case alphabet(a-z), upper case alphabet(A-Z)

// check using ascii value
// ascii value a=97 , A=65;



// #include<iostream>
// using namespace std;
// int main()
// {
//     char c;
//     cout<<"Enter character"<<endl;;
//     cin>>c;

// int ch = (int)c;


//     if(ch>=97 && ch<=122)
//     {
//         cout<<"Lower case alpla.";
//     }
//     if(ch>=65 && ch<=90)
//     {
//         cout<<"Upper case alpla.";
//     } 
   

// }




// nested if-else

// divisible by 5 or 3 but not by 15

// if -else
// #include<iostream>
// using namespace std;
//  int main()
//  {
//      int n;
//      cout<<"Enter n"<<endl;
//      cin>>n;

//      if((n%5==0 || n%3==0) && n%5!=0)
//      {
//         cout<<"yes";
//      }
//      else
//      cout<<"no";
//  }


// nested if-else

// #include<iostream>
// using namespace std;
//  int main()
//  {
//      int n;
//      cout<<"Enter n"<<endl;
//      cin>>n;

//      if(n%5==0 || n%3==0)
//      {
//         if(n%15!=0)
//         {
//             cout<<"YES";
//         }
//         else cout<<"no";
//      }
//         else
//         {
//         cout<<"NO";
//         }
//  }


// no. is divisible by 5 and 3 
// using nested if-else

// #include<iostream>
// using namespace std;
//  int main()
//  {
//      int n;
//      cout<<"Enter n"<<endl;
//      cin>>n;

//      if(n%5==0)
//      {
//         if(n%3==0)
//         {
//             cout<<"yes";
//         }
//         else
//         cout<<"NO";
//      }
//      else
//      cout<<"no";
//  }



// take 3 no. input and find greatest of them 
// using nested if-else


// #include<iostream>
// using namespace std;
//  int main()
//  {
//      int a,b,c;
//      cout<<"Enter a , b ,c "<<endl;
//      cin>>a>>b>>c;

//      if(a>b)
//      {
//         if(a>c)
//         {
//             cout<<a<<"is greater";
//         }
//         else 
//         {
//             cout<<c<<"is greater";
//         }
//      }
//      else // b>a
//      {
//         if(b>c)
//         {
//             cout<<b<<"is greater";
//         }
//         else
//         cout<<c<<"is greater";
//      }
//  }



// take i/p percentage of student and print grade

// using if 


// #include<iostream>
// using namespace std;
//  int main()
//  {
//      int n;
//      cout<<"Enter n "<<endl;
//      cin>>n;

// if(n>=91 && n<=100)
// {
//     cout<<"excellent";
// }
// if(n>=81 && n<=90)
// {
//     cout<<"very good";
// }


//  }



// using nested if-else


// #include<iostream>
// using namespace std;
//  int main()
//  {
//      int n;
//      cout<<"Enter n "<<endl;
//      cin>>n;

//     if(n>=91)
//     {
//     cout<<"excellent";
//     }
//      else
//       {
//        if(n>=81)
//         {
//          cout<<"very good";
//         }
//           else
//           { 
//              if(n>=71)
//                {
//                 cout<<"good";
//                   }
//                      else
//                   {
//                    if(n>=61)
//                    {
//                      cout<<"fair";
//                    }
//                 }
//            }
//       }

//  }



// given character is vowel or consonent.
// using if else 

// important

// #include<iostream>
// using namespace std;
//  int main()
//  {
//     char ch;
//      cout<<"Enter character "<<endl;
//      cin>>ch;

//      if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
//      cout<<"vowel";
//      else
//      cout<<"consonent";
//  }



// very very important
// using nested if - else 

// #include<iostream>
// using namespace std;
//  int main()
//  {
//     char ch;
//      cout<<"Enter character "<<endl;
//      cin>>ch;

//          if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
//           {
//             cout<<"Upper case vowel ";
//           }
//           else
//           {
//             if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
//              {
//              cout<<"Lower case vowel ";
//              }
//              else        
//              {   
//                cout<<"Consonent "<<endl;
//              }     
//           }
// }




// take 3 no. and say if it is the sides of the triangle

// #include<iostream>
// using namespace std;
//  int main()
//  {
//     int a,b,c;
//     cout<<"Enter a , b, c ";
//     cin>>a>>b>>c;

//     if(a+b>c && b+c>a && c+a>b)
//     {
//         cout<<"Yes";
//     }
//     else
//     cout<<"No";
//  }

// check no. is positive or negative

#include<iostream>
using namespace std;
 int main()
 {
    int a;
    cout<<"Enter a  ";
    cin>>a;

    if(a>0)
    {
        cout<<"yes";
    }
    else
    cout<<"no";
 }

