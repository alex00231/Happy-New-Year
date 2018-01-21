#include <iostream>
#include <windows.h>
#include <iostream>

using namespace std;

int main()
{

    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD C;
    short int i=1, j=1;

        SetConsoleTextAttribute(h, 0x0007);
        cout << "\n"
                "                         **                                 \n"
                "                        ****                                \n"
                "                         **                                 \n";
        SetConsoleTextAttribute(h, 0x0004);
        cout << "                        /||\\                               \n"
                "                       //||\\\\                             \n"
                "                      ///||\\\\\\                           \n"
                "                     ////||\\\\\\\\                         \n"
                "                    /////||\\\\\\\\\\                       \n"
                "                   //////||\\\\\\\\\\\\                     \n"
                "                  ///////||\\\\\\\\\\\\\\                   \n"
                "                 ////////||\\\\\\\\\\\\\\\\                 \n"
                "                /////////||\\\\\\\\\\\\\\\\\\               \n";
        SetConsoleTextAttribute(h, 0x000F);
        cout << "               /####################\\                      \n"
                "              /####";
        SetConsoleTextAttribute(h, 0x0003);
        cout << "00";
        SetConsoleTextAttribute(h, 0x000F);
        cout << "##########";
        SetConsoleTextAttribute(h, 0x0003);
        cout << "00";
        SetConsoleTextAttribute(h, 0x000F);
        cout << "####\\                     \n"
                "              |###";
        SetConsoleTextAttribute(h, 0x0003);
        cout << "0000";
        SetConsoleTextAttribute(h, 0x000F);
        cout << "########";
        SetConsoleTextAttribute(h, 0x0003);
        cout << "0000";
        SetConsoleTextAttribute(h, 0x000F);
        cout << "###|                      \n";
        cout << "              |####";
        SetConsoleTextAttribute(h, 0x0003);
        cout << "00";
        SetConsoleTextAttribute(h, 0x000F);
        cout << "##########";
        SetConsoleTextAttribute(h, 0x0003);
        cout << "00";
        SetConsoleTextAttribute(h, 0x000F);
        cout << "####|                      \n"
                "              \\######################/                     \n"
                "               \\##";
        SetConsoleTextAttribute(h, 0x0007);
        cout << "\\______________/";
        SetConsoleTextAttribute(h, 0x000F);
        cout << "##/                     \n"
                "                \\##################/                       \n"
                "                 \\################/                        \n"
                "                 /################\\                        \n"
                "              /######################\\                     \n"
                "           /#############";
        SetConsoleTextAttribute(h, 0x000D);
        cout << "OO";
        SetConsoleTextAttribute(h, 0x000F);
        cout << "#############\\                  \n"
                "         /###############";
        SetConsoleTextAttribute(h, 0x000D);
        cout << "OO";
        SetConsoleTextAttribute(h, 0x000F);
        cout << "###############\\                \n"
                "        /##################################\\               \n"
                "       |#################";
        SetConsoleTextAttribute(h, 0x000D);
        cout << "OO";
        SetConsoleTextAttribute(h, 0x000F);
        cout << "#################|               \n"
                "       |#################";
        SetConsoleTextAttribute(h, 0x000D);
        cout << "OO";
        SetConsoleTextAttribute(h, 0x000F);
        cout << "#################|               \n"
                "       |####################################|               \n"
                "       |#################";
        SetConsoleTextAttribute(h, 0x000D);
        cout << "OO";
        SetConsoleTextAttribute(h, 0x000F);
        cout << "#################|               \n"
                "        \\################";
        SetConsoleTextAttribute(h, 0x000D);
        cout << "OO";
        SetConsoleTextAttribute(h, 0x000F);
        cout << "################/               \n"
                "         \\################################/                \n"
                "           \\############################/                  \n"
                "              \\######################/                     \n"
                "                 \\################/                        \n"
                "                                                            \n";
        SetConsoleTextAttribute(h, 0x000B);

      do{
         if(i == 5) cout << " I'm a snowman." << endl;
         if(i == 10) cout << " I congratulate everyone on a happy New-Year!!!";
         Sleep(1000);
         ++i;
      }while(i <= 10);
      do{
          C.X=0;
          C.Y=36;
          SetConsoleCursorPosition(h, C);
          SetConsoleTextAttribute(h, (j%2) ? 0x000B : 0x0004);
          cout << " I'm a snowman." << endl;
          cout << " I congratulate everyone on a happy New-Year!!!";
          Sleep(500);
          ++j;
          if(j > 10) j = 1;
      }while(j);


    return 0;
}
