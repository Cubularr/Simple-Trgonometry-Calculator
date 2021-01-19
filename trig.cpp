
#include <iostream>
#include <cmath>
using namespace std;

// TOA
    void TOA1()
    {
        float O;
        float A;
        float C;
        float ans;
        cout << "Please input your opposite value" << endl;
        cin >> O;
        cout << "Please input your adjacent value" << endl;
        cin >> A;
        C = O/A;
        ans = atan(C);
        ans = ans * (180/M_PI);
        cout << "Angle is: ";
        cout << ans;
    }

    void TOA2()
    {
        float T;
        float A;
        float Ans;
        cout << "Please input your angle value" << endl;
        cin >> T;
        cout << "Please input your adjacent value" << endl;
        cin >> A;
        Ans = tan(T*M_PI/180) * A;
        cout << "Opposite is: ";
        cout << Ans;
    }


    void TOA3()
    {
        float T;
        float O;
        float Ans;
        cout << "Please input your angle value" << endl;
        cin >> T;
        cout << "Please input your opposite value" << endl;
        cin >> O;
        Ans = O / tan(T*M_PI/180);
        cout << "Adjacent is: ";
        cout << Ans;
    }

void TOA()
{
    int s1;
     cout << "---------------------------------------------------- \n";
    cout << "Please select an integer from 1-3 to show what type of triangle it is;" << endl;
    cout << "1) Angle(tan) isn't marked" << endl;
    cout << "2) Opposite isn't marked" << endl;
    cout << "3) Adjacent isn't marked" << endl;
    cout << "---------------------------------------------------- \n";

    cin >> s1;
    if(s1 == 1)
    {
        TOA1();
    }
    else if(s1 == 2)
    {
        TOA2();
    }
    else if(s1 == 3)
    {
        TOA3();
    }
}

// SOH
    void SOH1()
    {
        float O;
        float H;
        float C;
        float ans;
        cout << "Please input your opposite value" << endl;
        cin >> O;
        cout << "Please input your adjacent value" << endl;
        cin >> H;
        C = O/H;
        ans = asin(C);
        ans = ans * (180/M_PI);
        cout << "Angle is: ";
        cout << ans;
    }

    void SOH2()
    {
        float S;
        float H;
        float Ans;
        cout << "Please input your angle value" << endl;
        cin >> S;
        cout << "Please input your hypotenuse value" << endl;
        cin >> H;
        Ans = sin(S*M_PI/180) * H;
        cout << "Opposite is: ";
        cout << Ans;
    }


    void SOH3()
    {
        float S;
        float O;
        float Ans;
        cout << "Please input your angle value" << endl;
        cin >> S;
        cout << "Please input your opposite value" << endl;
        cin >> O;
        Ans = O / sin(S*M_PI/180);
        cout << "Adjacent is: ";
        cout << Ans;
    }

void SOH()
{
    int s1;
    cout << "---------------------------------------------------- \n";
    cout << "Please select an integer from 1-3 to show what type of triangle it is;" << endl;
    cout << "1) Angle(sin) isn't marked" << endl;
    cout << "2) Opposite isn't marked" << endl;
    cout << "3) Adjacent isn't marked" << endl;
    cout << "---------------------------------------------------- \n";
    cin >> s1;
    if(s1 == 1)
    {
        SOH1();
    }
    else if(s1 == 2)
    {
        SOH2();
    }
    else if(s1 == 3)
    {
        SOH3();
    }
}

//CAH

    void CAH1()
    {
        float A;
        float H;
        float C;
        float ans;
        cout << "Please input your adjacent value" << endl;
        cin >> A;
        cout << "Please input your hypotenuse value" << endl;
        cin >> H;
        C = A/H;
        ans = acos(C);
        ans = ans * (180/M_PI);
        cout << "Angle is: ";
        cout << ans;
    }

    void CAH2()
    {
        float C;
        float H;
        float Ans;
        cout << "Please input your angle value" << endl;
        cin >> C;
        cout << "Please input your hypotenuse value" << endl;
        cin >> H;
        Ans = cos(C*M_PI/180) * H;
        cout << "Adjacent is: ";
        cout << Ans;
    }


    void CAH3()
    {
        float C;
        float A;
        float Ans;
        cout << "Please input your angle value" << endl;
        cin >> C;
        cout << "Please input your opposite value" << endl;
        cin >> A;
        Ans = A / cos(C*M_PI/180);
        cout << "Hypotenuse is: ";
        cout << Ans;
    }

void CAH()
{
    int s1;
    cout << "---------------------------------------------------- \n";
    cout << "Please select an integer from 1-3 to show what type of triangle it is;" << endl;
    cout << "1) Angle(cos) isn't marked" << endl;
    cout << "2) Adjacent isn't marked" << endl;
    cout << "3) Hypotenuse isn't marked" << endl;
    cout << "---------------------------------------------------- \n";

    cin >> s1;
    if(s1 == 1)
    {
        CAH1();
    }
    else if(s1 == 2)
    {
        CAH2();
    }
    else if(s1 == 3)
    {
        CAH3();
    }
}



// main -----------------------------------


int main()
{
    int x;
    cout << "---------------------------------------------------- \n";
    cout << "Hello, welcome to my 2D trigonometry calculator!" << endl;
    cout << "first, input an integer from 1-3 to choose your triangle based on SOHCAHTOA" << endl;
    cout << "Triangle 1) Hypotenuse side is unmarked (tan) \n";
    cout << "Triangle 2) Adjacent side is unmarked (sin)\n";
    cout << "Triangle 3) Opposite side is unmarked (cos) \n";
    cout << "Please choose your triangle: ";
    cin >> x;
    cout << "---------------------------------------------------- \n";

    if(x == 1)
    {
        TOA();
    }
    else if(x == 2)
    {
        SOH();
    }
    else if(x == 3)
    {
        CAH();
    }
}







