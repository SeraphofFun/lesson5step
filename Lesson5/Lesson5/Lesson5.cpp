#include <iostream>
using namespace std;
int main()
{
    //unsigned int age;
    //cout << "Yasinizi daxil edin: ";
    //cin >> age;
    //if (age >= 18)
    //    cout << "siz alkoqol ice bilirsiz" << endl;
    //else if (age >= 16) cout << "siz valdeyinlerle alkaqol ice bilirsiniz" << endl;
    //else cout << "siz alkoqol ice bilmirsiniz" << endl;

    //age >= 18 ? cout << "Siz prava ala bilersiniz" : cout << "siz prava ala bilmesiniz";
//    int x;
//    cin >> x;
//    x > 5 && cout << "X 5den boyukdur" || cout << "x 5den boyuk deyil";
    //int num;
    //cin >> num;
    //num % 2 == 0 && cout << "y"<<endl || cout << "n"<<endl;

    //int num2;
    //cin >> num2;
    //((num2 == 2) || (num2 == 3)) && cout << "sade eddedir"||(num2 % 2 == 0 || num2 % 3 == 0) && cout << "eded murekebdir" << endl || cout << "eded sadedir" << endl;

    //int num3;
    //cin >> num3;
    //int num3_1 = num3 / 1000;
    //int num3_2 = num3 % 10 * 10 + num3 % 100 / 10;
    //num3_1==num3_2 && cout << "eded polindromundur"<<endl || cout << "eded polindrom deyil"<<endl;


    //int num4;
    //cin >> num4;
    //(num4 / 10 == 0 && cout << "1 reqemli ededdir") || (num4 / 100 == 0 && cout << "2 reqemli ededdir") || (num4 / 1000 == 0 && cout << "3 reqemli ededdir")
    //    || (num4 / 10000 == 0 && cout << "4 reqemli ededdir") || (num4 / 100000 == 0 && cout << "5 reqemli ededdir") || (num4 / 1000000 == 0 && cout << "6 reqemli ededdir")
    //    || (num4 / 10000000 == 0 && cout << "7 reqemli ededdir") || (num4 / 100000000 == 0 && cout << "8 reqemli ededdir") || (num4 / 1000000000 == 0 && cout << "9 reqemli ededdir");
    //    cout << endl;



    int num5_1;
    cin >> num5_1;
    int num5_2;
    cin >> num5_2;
    int num5_3;
    cin >> num5_3;

    (((num5_1 > num5_2) && (num5_1 > num5_3)) && cout << "F"<<endl)||
    (((num5_2 > num5_1) && (num5_2 > num5_3)) && cout << "S"<<endl)||
    (((num5_3 > num5_1) && (num5_3 > num5_2)) && cout << "T"<<endl)||
    (num5_1 ==num5_2 == num5_3 && cout << "E")||((num5_1==0)&& (num5_2 == 0)&& (num5_3 == 0))&&cout<<"N"<<endl;



    int num6;
    cin >> num6;
    int num6_1 = num6 / 100000;
    int num6_2 = (num6 / 10000 - num6_1 * 10);
    int num6_3 = (num6 / 1000 - num6_1 * 100-num6_2*10);
    int num6_6 = num6 % 10;
    int num6_5 = (num6 % 100 - num6_6)/10;
    int num6_4 = (num6 % 1000 - num6_5 * 10 - num6_6)/100;
    num6_1 + num6_3 + num6_5 > num6_2 + num6_4 + num6_6 && cout << num6_1 << " " << num6_3 << " " << num6_5;
    num6_1 + num6_3 + num6_5 < num6_2 + num6_4 + num6_6 && cout << num6_2 << " " << num6_4 << " " << num6_6;
    num6_1 + num6_3 + num6_5 == num6_2 + num6_4 + num6_6 && cout << "odd=even  " << num6_1 << " " << num6_3 << " " << num6_5<<" " << num6_2 << " " << num6_4 << " " << num6_6;



}
