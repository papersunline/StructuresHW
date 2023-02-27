#include <iostream>
#include <windows.h>
using namespace std;

enum choice
{
    MEGAFON = 1, MTS = 2, TELE2 = 3
};

struct oper
{
    float price_per_minute_versal;
    float ppm_to_MegaFon;
    float ppm_to_MTS;
    float ppm_to_Tele2;
};

int main()
{
    int user_choice = 0;
    float length_of_talk = 0;

    cout << "Welcome! Chose the operator and length of talk\n[1] MegaFon\n[2] MTS\n[3] Tele2\nThen enter length" << endl;
    cin >> user_choice;
    cin >> length_of_talk;

    oper megafon{ 2.5 };
    oper mts{ 0,0.5,3.5,2.7 };
    oper Tele2{ 0,2,2.3,1.2 };


    float total;

    switch (user_choice)
    {
    case MEGAFON:
        cout << "One price for every call for you!" << endl;
        cout << (float)length_of_talk * megafon.price_per_minute_versal << " woodicks for " << length_of_talk << " minutes on any operator" << endl;
        break;


    case MTS:
        cout << "Here what we can calculate for you\nTalk among MTS will cost " << (float)(mts.ppm_to_MTS * length_of_talk) << " woodicks per " << length_of_talk << " minutes" <<
            "\nTalk with MegaFon costs around " << (float)mts.ppm_to_MegaFon * length_of_talk << " woodicks per " << length_of_talk << " minutes" <<
            "\nTalk with Tele2 costs around " << (float)mts.ppm_to_Tele2 * length_of_talk << " woodicks per " << length_of_talk << " minutes" << endl;

        if ((float)mts.ppm_to_MegaFon * length_of_talk < (float)mts.ppm_to_MTS * length_of_talk && (float)mts.ppm_to_MegaFon < (float)mts.ppm_to_Tele2 * length_of_talk)
            cout << "\nIt would be much profitable to talk to MegaFon abon" << endl; break;
        if ((float)mts.ppm_to_MTS * length_of_talk < (float)mts.ppm_to_MegaFon * length_of_talk && (float)mts.ppm_to_MTS < (float)mts.ppm_to_Tele2 * length_of_talk)
            cout << "\nIt would be much profitable to talk to MTS abon" << endl; break;
        if ((float)mts.ppm_to_Tele2 * length_of_talk < (float)mts.ppm_to_MTS * length_of_talk && (float)mts.ppm_to_Tele2 < (float)mts.ppm_to_MegaFon * length_of_talk)
            cout << "\nIt would be much profitable to talk to Tele2 abon" << endl;
        break;


    case TELE2:
        cout << "Here what we can calculate for you\nTalk among MTS will cost " << (float)mts.ppm_to_MTS * length_of_talk << " woodicks per " << length_of_talk << " minutes" <<
            "\nTalk with MegaFon costs around " << (float)mts.ppm_to_MegaFon * length_of_talk << " woodicks per " << length_of_talk << " minutes" <<
            "\nTalk with Tele2 costs around " << (float)mts.ppm_to_Tele2 * length_of_talk << " woodicks per " << length_of_talk << " minutes" << endl;

        if ((float)mts.ppm_to_MegaFon * length_of_talk < (float)mts.ppm_to_MTS * length_of_talk && (float)mts.ppm_to_MegaFon < (float)mts.ppm_to_Tele2 * length_of_talk)
            cout << "\nIt would be much profitable to talk to MegaFon abon" << endl; break;
        if ((float)mts.ppm_to_MTS * length_of_talk < (float)mts.ppm_to_MegaFon * length_of_talk && (float)mts.ppm_to_MTS < (float)mts.ppm_to_Tele2 * length_of_talk)
            cout << "\nIt would be much profitable to talk to MTS abon" << endl; break;
        if ((float)mts.ppm_to_Tele2 * length_of_talk < (float)mts.ppm_to_MTS * length_of_talk && (float)mts.ppm_to_Tele2 < (float)mts.ppm_to_MegaFon * length_of_talk)
            cout << "\nIt would be much profitable to talk to MegaFon abon" << endl;
        break;
    default:
        system("pause");
    }
    if (user_choice == 2 || user_choice == 3)
    {
        Sleep(2000);
        cout << "\nWe are not pressing - choose is up to you :) " << endl;
    }
    else
    {
        Sleep(2000);
        cout << "\nWould be glad to help you again!" << endl;
    }
    return 0;
}
