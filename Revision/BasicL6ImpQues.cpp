// Ques.-> count digits of a number using loops 
// at that type of ques. use while loop becoz it takes only conditions
// // 12345 -> 5 digits

// #include<iostream>
// using namespace std;
//  int main()
//  {
//     int n;
//     cout<<"Enter n ";
//     cin>>n;

//     int count = 0;
//     while(n>0)
//     {
//         n/=10;  // 12345/10=  1234/10=  123/10=  12/10=  1
//         count++;
//     }
//         cout<<count;
//     }


// Ques.-> sum of digits of a given no.
// // 12345 = 15

//  #include<iostream>
// using namespace std;
//  int main()
//  {
//     int n;
//     cout<<"Enter n ";
//     cin>>n;

//     int sum=0;
//     while(n>0)
//     {
//         int lastdigit = n%10;
//         sum+=lastdigit;
//         n/=10;
   
//     }
//         cout<<sum;
//     }

// Enter n 12345
// 15




// Ques.-> reverse of a given number
// number - 1234
// reverse - 4321

//   #include<iostream>
//   using namespace std;
//   int main()
//   {
//     int n;
//     cout<<"Enter n ";
//     cin>>n;

//     int rev=0;
//     int lastdigit=0;
//     while(n>0)
//     {
//         int lastdigit = n%10;
//         rev+=lastdigit;
//         rev*=10;
//         n/=10;
   
//     }
//         cout<<rev;
//     }

// Enter n 123
// 3210



// some changes takes here
// Ques.-> find the reverse of the number 
// 12345 reverse 54321

// #include<iostream>
// using namespace std;
//  int main()
//  {
//     int n;
//     cout<<"Enter n";
//     cin>>n;

//     int reverse =0;
//     int lastdigit=0;
//    while(n>0                                                                                                                                                                                                                                                                                                                                                                                                               )
//    {
//         int lastdigits=n%10;
//         reverse*=10;
//         reverse+=lastdigits;
//         n/=10;

//     }

// cout<<reverse;
//  }

// //  Enter n12345
// // 54321



// Ques.-> print the sum of this series 
// 1-2+3-4+5-6+7-8... upto 'n'.



// Ques. -> sum the no.from 1 to n using for loop 

// #include<iostream>
// using namespace std;
//  int main()
//  {
//     int n;
//     cout<<"Enter n ";
//     cin>>n;
   
//    int sum=0;
//  for(int i=1; i<=n; i++)
//  {
//     sum+=i;
//  }
//   cout<<sum<<" ";
//  }
// //  Enter n 10
// //  55






// Ques.-> print the sum of this series 
// 1-2+3-4+5-6+7-8... upto 'n'.

// #include<iostream>
// using namespace std;
//  int main()
//  {
//     int n;
//     cout<<"Enter n ";
//     cin>>n;

//    int sum=0;
//    for(int i=1; i<=n; i++)
//   {
//     if(i%2!=0)
//     sum+=i;
//     else
//     sum-=i;
//   }
//     cout<<sum<<" ";
//   }

//  Enter n 5
//  3



        //  ****  best methods  ****
// Ques.-> print the sum of this series 
// 1-2+3-4+5-6+7-8... upto 'n'.


// algorithm-:
// even sum=-n/2
// odd sum=-n/2+n

// #include<iostream>
// using namespace std;
//  int main()
//  {
//     int n;
//     cout<<"Enter n ";
//     cin>>n;

//    int sum=0;
//   if(n%2==0) sum=-n/2;
//   else
//   sum=-n/2+n;
//     cout<<sum<<" ";
//   }

// //   Enter n 5
// //  3
// // Enter n 2
// // -1



// find the factorial of a given number 



// #include<iostream>
// using namespace std;
//  int main()
//  {
//     int n;
//     cout<<"Enter n ";
//     cin>>n;

//     int fact=1;

//     for(int i=1; i<=n; i++)
//     {
//          fact=fact*i;
//     }
//     cout<<fact;
//  }

//  Enter n 5
//  120






// Ques.-> find the fibonacci no.

// algorithm 
// sum=a+b
// a=b
// b=sum 
// cout<<b

// 0 1 1 2 3 5 8 13...
// 1 1 2 3 5 8 13... starts from 1

// #include<iostream>
// using namespace std;
//  int main()
//  {
//     int n;
//     cout<<"Enter n ";
//     cin>>n;

//     int a=1;
//     int b=1;
//     int sum=0;
//     for(int i=1; i<=n-2;i++)
//     {
//         sum=a+b;
//         a=b;
//         b=sum;
//     }
//     cout<<b;

//  }
//  Enter n 6
//   8

// Enter n 4
// 3


// take two i/p no. WAP find the value of one no. raised to power of another.



#include<iostream>
using namespace std;
 int main()
 {
    int n;
    cout<<"Enter n ";
    cin>>n;

     int m;
    cout<<"Enter m ";
    cin>>m;

int power =1;
for(int i=1; i<=m; i++)
{
    power = power*n;
}
cout<<power;

 }

//  Enter n 2
// Enter m 3
// 8


// here in most of he ques..
// we use for loop and starts from **(i=1)** to i<=n..  