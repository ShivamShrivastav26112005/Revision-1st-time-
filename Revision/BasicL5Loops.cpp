                            //    *** for loops ***

// Q.1-> print table of 19


// #include <iostream>
// using namespace std;
// int main()
// {
//     // for(int i=1; i<=190; i++)
//     // {
//     //    if(i%19==0)
//     //     cout<<i<<endl;
//     // }
 
//  //         O R


//     for (int i = 19; i <= 190; i += 19)
//     {
//         cout << i << endl;
//     }
// }




// Q.2-> display A.P. 1,3,5,7,9...nth terms.
// starts from 1 so, use these formula, otherwise use separate variable 

// an=a+(n-1)d
//1st term a=1;
// common diff d=2
// an=2n-1

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter n : ";
//     cin>>n;
//     for(int i=1; i<=2*n-1; i+=2)
//     {
//         cout<<i<<endl;
//     }
// }
 
// Enter n : 3
// 1
// 3
// 5

// Q.3-> 4, 7, 10, 13, 16..... nth terms
//common diff= 3
// use separte variable
// loop chalega n tk jitana no. tk print karna ho

// #include<iostream>
// using namespace std;
//  int main()
//  {
//     int n;
//     cout<<"Enter n ";
//     cin>>n;

//     // for loop

//     int a=4;
//     for(int i=1; i<=n ; i++)
//     {
//         cout<<a<<" ";
//         a=a+3;
//     }


//  }

//  Enter n 5
// 4 7 10 13 16


// Q.4-> display 45,55,65,75,85,95......

// a = 45
// d=10


// Concept of separate variable

// #include<iostream>
// using namespace std;
//  int main()
//  {
//     int n;
//     cout<<"Enter n  : "<<endl;
//     cin>>n;

//     int a=45; // separate variable 

//     for(int i=1; i<=n;i++)
//     {
//        cout<<a <<" ";
//        a=a+10;
//     }
//  }

// //  Enter n  : 
// // 4
// // 45 55 65 75




// Q.5->
// display the G.P. 1,2,4,8,16....
// a=1
// common ratio = 2
// an=a*rpow(n-1)

// ***separate variable use

// #include<iostream>
// using namespace std;
//  int main()
//  {
//     int n;
//     cout<<"Enter n  : "<<endl;
//     cin>>n;

//     int a=1; // separate variable 
//     for(int i=1; i<=n;i++)
//     {
//        cout<<a <<" ";
//        a=a*2;
//     }
//  }
// //  Enter n  : 
// // 5
// // 1 2 4 8 16


// Q.6-> 2,6,18,54 ....

// #include<iostream>
// using namespace std;
// int main()
// {
//      int n;
//      cout<<"Enter n " ;
//      cin>>n;

//      int a =2; // separate variable 
//      for(int i=1; i<=n; i++)
//      {
//         cout<<a<<" ";
//         a*=3;
//      }
// }
// // Enter n 3
// // 2 6 18

// Q.7-> 100, 97, 94....all terms which are positive

// #include<iostream>
// using namespace std;
//  int main()
//  {
//     for(int i=100; i>=1; i-=3)
//     {
//         cout<<i<<" ";
//     }
//  }
// 100 97 94 91 88 85 82 79 76 73 70 67 64 61 58 55
//  52 49 46 43 40 37 34 31 28 25 22 19 16 13 10 7 4 1 




// Q.7-> 100, 97, 94....all terms which are positive
// a=100
// d=-3
// an=a+(n-1)d

// #include<iostream>
// using namespace std; 
// int main()
// {
//     int n;
//     cout<<"Enter n ";
//     cin>>n;

//     for(int i=100 ;i>0 ;i-=3)
//     {
//         cout<<i<<" ";
//     }
// }
// // Enter n 34
// // 100 97 94 91 88 85 82 79 76 73 70 67 64 61 58 
// // 55 52 49 46 43 40 37 34 31 28 25 22 19 16 13 10 7 4 1 



//                                     **** while loops****

// Q.1-> print 1 to 10 using while loops

// #include<iostream>
// using namespace std; 
// int main()
// {
//     int i=1;
//     while(i<=10)
//     {
//         cout<<i<<" ";
//         i++;
//     }
// }

// // 1 2 3 4 5 6 7 8 9 10 


// Q.2-> true or false

// #include<iostream>
// using namespace std; 
// int main()
// {
//     int i=1;
//     // while(i==1) // 1
//     while(i==0)
//     {
//         cout<<i<<" ";
//         i++;
    
//     }
// }


//                                *** do-while loop ***

// print 1 to 10 using (do - while) loop 

// #include<iostream>
// using namespace std; 
// int main()
// {
  
//     int i=1;
//     do
//   {
//     cout<<i<<" ";
//     i++;
//   }
//   while(i<=10);

// }
// 1 2 3 4 5 6 7 8 9 10 


// either condition is true or false one time loop run

// #include<iostream>
// using namespace std; 
// int main()
// {
  
//     int i=1;
//     do
//   {
//     cout<<i<<" ";  // 1
//     i++; // 2
//   }
//   while(i==0);  // (2==0) -> no (false)
//   // cond. is false but loop run one time and print only 1

// } // 1


/*

//  Important
//  This is a Mixture Question of for loop and if-else statements


// print prime no using for loop 
//  2,3,5,7,11,13,17....

// prime no starts from 2 
// 1 is neither prime nor composite


#include<iostream>
using namespace std; 
int main()
{
    int n;
    cout<<"Enter n ";
    cin>>n;
     bool flag = false;

   for(int i=1; i<=n; i++)
  {
    if(n==2)
    {
        cout<<"2 Is a prime ";
        break;
    }

    if(n==1)
    {
        cout<<" Is a neither prime nor composite ";
        break;
    }
       if(n%2==0)
    {
       flag=true;
       cout<<"No it is not a prime no. ";
       cout<<"It is a composite no ";
       break;
    }
         
       else 
    
       cout<<"YES it is a prime no. "  <<endl;
       break;
       }
     if(flag=false)
   {
    cout<<" Yes ";
  }

}

*/


// print all alphabets ( upper case ) with their ascii value using do-while loop..


// // Method.1-> usign for loop

// #include<iostream>
// using namespace std; 
// int main()
// {
//     for(int i=65; i<=90; i++)
//     {
//         cout<<(char)i<<" "<<i<<" ";
//     }
// }

//               // cout<<(char)i<<" ";
// // A B C D E F G H I J K L M N O P Q R S T U V W X Y Z

//             // cout<<(char)i<<" "<<i<<" ";
// // A 65 B 66 C 67 D 68 E 69 F 70 G 71 H 72 I 73 J 74 K 75 L 76 M 77 
// // N 78 O 79 P 80 Q 81 R 82 S 83 T 84 U 85 V 86 W 87 X 88 Y 89 Z 90 




// Method.2-> using while loop

// #include<iostream>
// using namespace std; 
// int main()
// {
//     int i=65;
//     while(i<=90)
//     {
//         cout<<(char)i<<" ";
//         i++;
//     }
// }
// A B C D E F G H I J K L M N O P Q R S T U V W X Y Z




// #include<iostream>
// using namespace std; 
// int main()
// {
//     int i=65;
//     while(i<=90)
//     {
//         cout<<(char)i<<" "<<i<<" ";
//         i++;
//     }
// }

// A 65 B 66 C 67 D 68 E 69 F 70 G 71 H 72 I 73 J 74 K 75 L 76 M 77 N 78
// O 79 P 80 Q 81 R 82 S 83 T 84 U 85 V 86 W 87 X 88 Y 89 Z 90



// Method.3-> using do-while loop

#include<iostream>
using namespace std; 
int main()
{
    int i=65;
    do 
    {
        cout<<i<<(char)i<<" ";
        i++;
    }
    while(i<=90);
    
}

// 65A 66B 67C 68D 69E 70F 71G 72H 73I 74J 75K 76L
// 77M 78N 79O 80P 81Q 82R 83S 84T 85U 86V 87W 88X 89Y 90Z