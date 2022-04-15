#include <iostream>

using namespace std;

/*int main()
{
    ///Ques: 1
    //v is for numbe of vechiles
    // and w is for number of wheels
    //first of all x hold the numbe rof 2-wheeler vechicles
    //fond 2wheeler and 4wheeler vechile

    int v, w;
  cin >> v >> w;
  float x = ((4 * v) - w) / 2;
  if ((w & 1) || w < 2 || w <= v)
    {
      cout << "INVALID INPUT";
      return 0;
    }
cout << "TW=" << x << " " << "FW=" << v - x;

    return 0;
}*/

///Problem Statement – Given a string S(input consisting) of ‘*’ and ‘#’.
///The length of the string is variable. The task is to find the minimum number of ‘*’ or ‘#’ to make it a valid string.
///The string is considered valid if the number of ‘*’ and ‘#’ are equal. The ‘*’ and ‘#’ can be at any position in the string.

/*int main()
{

    int a=0,b=0;
    string s;
    getline(cin, s);

    for(auto i : s) //i as string used bex to treat i as a string
    {
        if(i=='*')
        {
            a++;
        }
        else if(i=='#')
        {

            b++;
        }
    }
    cout << b-a;
}*/

///Given an integer array Arr of size N the task is to find the count of elements whose value is greater than all of its prior elements.

///Note : 1st element of the array should be considered in the count of the result.

/*int main()
{
    int n, c=0,a,m=INT_MIN;
    cin >> n;
    while(n--)
    {
        cin >> a;
        if(a>m)
        {
            m=a;
            c++;
        }
    }
    cout << "Count :  " << c << ends;
}*/


///A parking lot in a mall has RxC number of parking spaces. Each parking space will either be  empty(0) or full(1).
/// The status (0/1) of a parking space is represented as the element of the matrix.
/// The task is to find index of the prpeinzta row(R) in the parking lot that has the most of the parking spaces full(1).

/*int main()
{
    int r,c,a,m=INT_MIN,in,sum=0;
    cin >> r >> c;

    for(int i=0;i<r;i++)
    {

        for(int j=  0;j<c;j++)
        {

            cin >> a;
            sum+=a;

        }
        if(sum>m)
        {
            m = sum;
            in = i+1;
        }
        sum=0;
    }
    cout << in;
}*/






