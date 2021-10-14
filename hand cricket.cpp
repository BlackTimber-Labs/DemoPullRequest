
#include <iostream>
using namespace std;

int bating(int prun = INT_MAX)
{
    bool flas = true;
    int num, tsum = 0;
    srand((unsigned)time(0));
    do
    {
        if (tsum > prun)
        {
            break;
        }
        else
        {
            cout << "Enter a num" << endl;
            cin >> num;
            try
            {
                if (num > 6 || num < 1)
                {
                    throw "execption";
                }
                int ran = (rand() % 6) + 1;
                if (num == ran)
                {
                    cout << "Total runs : " << tsum << endl;
                    cout << "out" << endl;
                    flas = false;
                }
                else
                {
                    tsum += num;
                }
            }
            catch (...)
            {
                cout << "🖐You are doing cheating." << endl;
                cout << "Must enter number 1-6" << endl;
                return tsum = 0;
            }
        }
    } while (flas);
    return tsum;
}
int main()
{
    cout << "Welcome in game" << endl;
lable:
    cout << "Bating-0 or bowling-1" << endl;
    int chs; cin >> chs;
    int run, ball;
    if (chs == 0)
    {
        cout << "It's ur bating first" << endl;
        run = bating();
        cout << "bowling time" << endl;
        ball = bating(run);
    }
    else if (chs == 1)
    {
        cout << "It's bowling first" << endl;
        ball = bating();
        cout << "Bating time " << endl;
        run = bating(ball);
    }
    else {
        cout << "Enter correct input" << endl;
        cout << "Want to play again y/n" << endl;
        char ch; cin >> ch;
        if (ch == 'y')
        {
            goto lable;
        }
        return 0;
    }

    if (run > ball)
    {
        cout << "You won" << endl;
        cout << "You hit " << run - ball << " runs more" << endl;
    }
    else if (run < ball)
    {
        cout << "Computer win by " << ball - run << " runs." << endl;
    }
    else
    {
        cout << "Both hits " << run << endl;
        cout << "Draw" << endl;
    }
    return 0;
}