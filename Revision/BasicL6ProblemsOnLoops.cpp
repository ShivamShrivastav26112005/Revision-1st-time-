// WAP if a no. is prime or not

// #include<iostream>
// using namespace std;
//  int main()
//  {
//     int n;
//     cout<<"enter n ";
//     cin>>n;

//     bool flag= true;
//     for(int i=2; i<n; i++)
//     {
//         if(n%i==0)
//         {
//         flag=false;
//         break;
//         }
//     }
//         if(n==1)
//         cout<<"1 is neither prime nor composite no. ";
//         else if(flag==true)
//         cout<<"Yes it a prime no. ";
//         else cout<<"Not a prime no. It is a composite no. ";
//  }
 
 //             **** (break) and **** (continue) ****

// break;
 
// #include<iostream>
// using namespace std;
//  int main()
//  {
//     for(int i=1; i<5;i++)
//     {
//     cout<<"hi";
//     break;
//     cout<<"heloo";
//     }
//  }
//  // only hi is print 




// continue;  ( skip kar do )
//  continue is always written in semi colon

// #include<iostream>
// using namespace std;
//  int main()
//  {
//     int i=1;
//     while(i<5)
//     {
//     cout<<1;
// {
//     continue;
// }
//     cout<<5;
//     }
//  }


//  continue ke bad jo kucha bhi h use jane do mat print karo
//  this loop is run infinite times .
   


 


// #include <iostream>
// using namespace std;
// int main()
//  {

//     for (int i = 1; i <= 5; i++)
//    {
//         // condition to continue

//         if (i == 3)
//         {
//             continue; // jane do ese print mat karo (skip kar do)
//         }
//         cout << i << " ";
//     }

//     return 0;
// }
// // 1 2 4 5 





//Ques->  print 1 to 10 skip 6,3,7
// here use contiune statements

// #include<iostream>
// using namespace std;
//  int main()
//  {
//     int i;
//     for(i=1; i<=10; i++)
//     {
//         if(i==6 || i==3 || i==7)
//         {
//         continue;
//         }
    
//     cout<<i<<" ";
//     }
//  }
 
//  1 2 4 5 8 9 10 



