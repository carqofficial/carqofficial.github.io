#include <stdio.h>

int main()
{
    double money;
    printf("\nEnter the total amount : ");
    scanf("%lf", &money);
    int m2000, m500, m200, m100, m50, m20, m10, m5, mR;
    m2000 = 0;
    m500 = 0;
    m200 = 0;
    m100 = 0;
    m50 = 0;
    m20 = 0;
    m10 = 0;
    m5 = 0;
    mR = 0;
    if (money < 2000)
    {
        if (money >= 500)
        {
            m500 = (int)(((int)money) / 500);
            money -= (m500 * 500);

            if (money >= 200)
            {
                m200 = (int)(((int)money) / 200);
                money -= (m200 * 200);
                if (money >= 100)
                {
                    m100 = (int)(((int)money) / 100);
                    money -= (m100 * 100);
                }
                if (money < 100)
                {
                    if (money >= 50)
                    {
                        m50 = (int)(((int)money) / 50);
                        money -= (m50 * 50);
                        if (money >= 20)
                        {
                            m20 = (int)(((int)money) / 20);
                            money -= (m20 * 20);
                        }
                        if (money < 20)
                        {
                            if (money >= 10)
                            {
                                m10 = (int)(((int)money) / 10);
                                money -= (m10 * 10);
                                if (money >= 5)
                                {
                                    m5 = (int)(((int)money) / 5);
                                    money -= (m5 * 5);
                                    if ((money >= 0) && (money < 5))
                                    {
                                        mR = (int)(money);
                                    }
                                }
                                if ((money >= 0) && (money < 5))
                                {
                                    mR = (int)(money);
                                }
                            }
                            if (money < 10)
                            {
                                if (money >= 5)
                                {
                                    m5 = (int)(((int)money) / 5);
                                    money -= (m5 * 5);
                                    if ((money >= 0) && (money < 5))
                                    {
                                        mR = (int)(money);
                                    }
                                }
                                if ((money >= 0) && (money < 5))
                                {
                                    mR = (int)(money);
                                }
                            }
                        }
                    }

                    if (money < 50)
                    {
                        if (money >= 20)
                        {
                            m20 = (int)(((int)money) / 20);
                            money -= (m20 * 20);
                        }
                        if (money < 20)
                        {
                            if (money >= 10)
                            {

                                m10 = (int)(((int)money) / 10);
                                money -= (m10 * 10);
                                if (money >= 5)
                                {
                                    m5 = (int)(((int)money) / 5);
                                    money -= (m5 * 5);
                                    if ((money >= 0) && (money < 5))
                                    {
                                        mR = (int)(money);
                                    }
                                }
                                if ((money >= 0) && (money < 5))
                                {
                                    mR = (int)(money);
                                }
                            }
                            if (money < 10)
                            {
                                if (money >= 5)
                                {
                                    m5 = (int)(((int)money) / 5);
                                    money -= (m5 * 5);
                                    if ((money >= 0) && (money < 5))
                                    {
                                        mR = (int)(money);
                                    }
                                }
                                if ((money >= 0) && (money < 5))
                                {
                                    mR = (int)(money);
                                }
                            }
                        }
                    }
                }
            }
            if (money < 200)
            {
                if (money >= 100)
                {
                    m100 = (int)(((int)money) / 100);
                    money -= (m100 * 100);
                }
                if (money < 100)
                {
                    if (money >= 50)
                    {
                        m50 = (int)(((int)money) / 50);
                        money -= (m50 * 50);
                        if (money >= 20)
                        {
                            m20 = (int)(((int)money) / 20);
                            money -= (m20 * 20);
                        }
                        if (money < 20)
                        {
                            if (money >= 10)
                            {

                                m10 = (int)(((int)money) / 10);
                                money -= (m10 * 10);
                                if (money >= 5)
                                {
                                    m5 = (int)(((int)money) / 5);
                                    money -= (m5 * 5);
                                    if ((money >= 0) && (money < 5))
                                    {
                                        mR = (int)(money);
                                    }
                                }
                                if ((money >= 0) && (money < 5))
                                {
                                    mR = (int)(money);
                                }
                            }
                            if (money < 10)
                            {
                                if (money >= 5)
                                {
                                    m5 = (int)(((int)money) / 5);
                                    money -= (m5 * 5);
                                    if ((money >= 0) && (money < 5))
                                    {
                                        mR = (int)(money);
                                    }
                                }
                                if ((money >= 0) && (money < 5))
                                {
                                    mR = (int)(money);
                                }
                            }
                        }
                    }
                    if (money < 50)
                    {
                        if (money >= 20)
                        {
                            m20 = (int)(((int)money) / 20);
                            money -= (m20 * 20);
                        }
                        if (money < 20)
                        {
                            if (money >= 10)
                            {

                                m10 = (int)(((int)money) / 10);
                                money -= (m10 * 10);
                                if (money >= 5)
                                {
                                    m5 = (int)(((int)money) / 5);
                                    money -= (m5 * 5);
                                    if ((money >= 0) && (money < 5))
                                    {
                                        mR = (int)(money);
                                    }
                                }
                                if ((money >= 0) && (money < 5))
                                {
                                    mR = (int)(money);
                                }
                            }
                            if (money < 10)
                            {
                                if (money >= 5)
                                {
                                    m5 = (int)(((int)money) / 5);
                                    money -= (m5 * 5);
                                    if ((money >= 0) && (money < 5))
                                    {
                                        mR = (int)(money);
                                    }
                                }
                                if ((money >= 0) && (money < 5))
                                {
                                    mR = (int)(money);
                                }
                            }
                        }
                    }
                }
            }
        }

        if (money < 500)
        {
            if (money >= 200)
            {
                m200 = (int)(((int)money) / 200);
                money -= (m200 * 200);
                if (money >= 100)
                {
                    m100 = (int)(((int)money) / 100);
                    money -= (m100 * 100);
                }
                if (money < 100)
                {
                    if (money >= 50)
                    {
                        m50 = (int)(((int)money) / 50);
                        money -= (m50 * 50);
                        if (money >= 20)
                        {
                            m20 = (int)(((int)money) / 20);
                            money -= (m20 * 20);
                        }
                        if (money < 20)
                        {
                            if (money >= 10)
                            {

                                m10 = (int)(((int)money) / 10);
                                money -= (m10 * 10);
                                if (money >= 5)
                                {
                                    m5 = (int)(((int)money) / 5);
                                    money -= (m5 * 5);
                                    if ((money >= 0) && (money < 5))
                                    {
                                        mR = (int)(money);
                                    }
                                }
                                if ((money >= 0) && (money < 5))
                                {
                                    mR = (int)(money);
                                }
                            }
                            if (money < 10)
                            {
                                if (money >= 5)
                                {
                                    m5 = (int)(((int)money) / 5);
                                    money -= (m5 * 5);
                                    if ((money >= 0) && (money < 5))
                                    {
                                        mR = (int)(money);
                                    }
                                }
                                if ((money >= 0) && (money < 5))
                                {
                                    mR = (int)(money);
                                }
                            }
                        }
                    }
                    if (money < 50)
                    {
                        if (money >= 20)
                        {
                            m20 = (int)(((int)money) / 20);
                            money -= (m20 * 20);
                        }
                        if (money < 20)
                        {
                            if (money >= 10)
                            {

                                m10 = (int)(((int)money) / 10);
                                money -= (m10 * 10);
                                if (money >= 5)
                                {
                                    m5 = (int)(((int)money) / 5);
                                    money -= (m5 * 5);
                                    if ((money >= 0) && (money < 5))
                                    {
                                        mR = (int)(money);
                                    }
                                }
                                if ((money >= 0) && (money < 5))
                                {
                                    mR = (int)(money);
                                }
                            }
                            if (money < 10)
                            {
                                if (money >= 5)
                                {
                                    m5 = (int)(((int)money) / 5);
                                    money -= (m5 * 5);
                                    if ((money >= 0) && (money < 5))
                                    {
                                        mR = (int)(money);
                                    }
                                }
                                if ((money >= 0) && (money < 5))
                                {
                                    mR = (int)(money);
                                }
                            }
                        }
                    }
                }
            }
            if (money < 200)
            {
                if (money >= 100)
                {
                    m100 = (int)(((int)money) / 100);
                    money -= (m100 * 100);
                }
                if (money < 100)
                {
                    if (money >= 50)
                    {
                        m50 = (int)(((int)money) / 50);
                        money -= (m50 * 50);
                        if (money >= 20)
                        {
                            m20 = (int)(((int)money) / 20);
                            money -= (m20 * 20);
                        }
                        if (money < 20)
                        {
                            if (money >= 10)
                            {

                                m10 = (int)(((int)money) / 10);
                                money -= (m10 * 10);
                                if (money >= 5)
                                {
                                    m5 = (int)(((int)money) / 5);
                                    money -= (m5 * 5);
                                    if ((money >= 0) && (money < 5))
                                    {
                                        mR = (int)(money);
                                    }
                                }
                                if ((money >= 0) && (money < 5))
                                {
                                    mR = (int)(money);
                                }
                            }
                            if (money < 10)
                            {
                                if (money >= 5)
                                {
                                    m5 = (int)(((int)money) / 5);
                                    money -= (m5 * 5);
                                    if ((money >= 0) && (money < 5))
                                    {
                                        mR = (int)(money);
                                    }
                                }
                                if ((money >= 0) && (money < 5))
                                {
                                    mR = (int)(money);
                                }
                            }
                        }
                    }
                    if (money < 50)
                    {
                        if (money >= 20)
                        {
                            m20 = (int)(((int)money) / 20);
                            money -= (m20 * 20);
                        }
                        if (money < 20)
                        {
                            if (money >= 10)
                            {

                                m10 = (int)(((int)money) / 10);
                                money -= (m10 * 10);
                                if (money >= 5)
                                {
                                    m5 = (int)(((int)money) / 5);
                                    money -= (m5 * 5);
                                    if ((money >= 0) && (money < 5))
                                    {
                                        mR = (int)(money);
                                    }
                                }
                                if ((money >= 0) && (money < 5))
                                {
                                    mR = (int)(money);
                                }
                            }
                            if (money < 10)
                            {
                                if (money >= 5)
                                {
                                    m5 = (int)(((int)money) / 5);
                                    money -= (m5 * 5);
                                    if ((money >= 0) && (money < 5))
                                    {
                                        mR = (int)(money);
                                    }
                                }
                                if ((money >= 0) && (money < 5))
                                {
                                    mR = (int)(money);
                                }
                            }
                        }
                    }
                }
            }
        }
    }

    if (money >= 2000)
    {
        m2000 = (int)(((int)money) / 2000);
        money -= (m2000 * 2000);
        if (money >= 500)
        {
            m500 = (int)(((int)money) / 500);
            money -= (m500 * 500);

            if (money >= 200)
            {
                m200 = (int)(((int)money) / 200);
                money -= (m200 * 200);
                if (money >= 100)
                {
                    m100 = (int)(((int)money) / 100);
                    money -= (m100 * 100);
                }
                if (money < 100)
                {
                    if (money >= 50)
                    {
                        m50 = (int)(((int)money) / 50);
                        money -= (m50 * 50);
                        if (money >= 20)
                        {
                            m20 = (int)(((int)money) / 20);
                            money -= (m20 * 20);
                        }
                        if (money < 20)
                        {
                            if (money >= 10)
                            {

                                m10 = (int)(((int)money) / 10);
                                money -= (m10 * 10);
                                if (money >= 5)
                                {
                                    m5 = (int)(((int)money) / 5);
                                    money -= (m5 * 5);
                                    if ((money >= 0) && (money < 5))
                                    {
                                        mR = (int)(money);
                                    }
                                }
                                if ((money >= 0) && (money < 5))
                                {
                                    mR = (int)(money);
                                }
                            }
                            if (money < 10)
                            {
                                if (money >= 5)
                                {
                                    m5 = (int)(((int)money) / 5);
                                    money -= (m5 * 5);
                                    if ((money >= 0) && (money < 5))
                                    {
                                        mR = (int)(money);
                                    }
                                }
                                if ((money >= 0) && (money < 5))
                                {
                                    mR = (int)(money);
                                }
                            }
                        }
                    }
                    if (money < 50)
                    {
                        if (money >= 20)
                        {
                            m20 = (int)(((int)money) / 20);
                            money -= (m20 * 20);
                        }
                        if (money < 20)
                        {
                            if (money >= 10)
                            {

                                m10 = (int)(((int)money) / 10);
                                money -= (m10 * 10);
                                if (money >= 5)
                                {
                                    m5 = (int)(((int)money) / 5);
                                    money -= (m5 * 5);
                                    if ((money >= 0) && (money < 5))
                                    {
                                        mR = (int)(money);
                                    }
                                }
                                if ((money >= 0) && (money < 5))
                                {
                                    mR = (int)(money);
                                }
                            }
                            if (money < 10)
                            {
                                if (money >= 5)
                                {
                                    m5 = (int)(((int)money) / 5);
                                    money -= (m5 * 5);
                                    if ((money >= 0) && (money < 5))
                                    {
                                        mR = (int)(money);
                                    }
                                }
                                if ((money >= 0) && (money < 5))
                                {
                                    mR = (int)(money);
                                }
                            }
                        }
                    }
                }
            }
            if (money < 200)
            {
                if (money >= 100)
                {
                    m100 = (int)(((int)money) / 100);
                    money -= (m100 * 100);
                }
                if (money < 100)
                {
                    if (money >= 50)
                    {
                        m50 = (int)(((int)money) / 50);
                        money -= (m50 * 50);
                        if (money >= 20)
                        {
                            m20 = (int)(((int)money) / 20);
                            money -= (m20 * 20);
                        }
                        if (money < 20)
                        {
                            if (money >= 10)
                            {

                                m10 = (int)(((int)money) / 10);
                                money -= (m10 * 10);
                                if (money >= 5)
                                {
                                    m5 = (int)(((int)money) / 5);
                                    money -= (m5 * 5);
                                    if ((money >= 0) && (money < 5))
                                    {
                                        mR = (int)(money);
                                    }
                                }
                                if ((money >= 0) && (money < 5))
                                {
                                    mR = (int)(money);
                                }
                            }
                            if (money < 10)
                            {
                                if (money >= 5)
                                {
                                    m5 = (int)(((int)money) / 5);
                                    money -= (m5 * 5);
                                    if ((money >= 0) && (money < 5))
                                    {
                                        mR = (int)(money);
                                    }
                                }
                                if ((money >= 0) && (money < 5))
                                {
                                    mR = (int)(money);
                                }
                            }
                        }
                    }
                    if (money < 50)
                    {
                        if (money >= 20)
                        {
                            m20 = (int)(((int)money) / 20);
                            money -= (m20 * 20);
                        }
                        if (money < 20)
                        {
                            if (money >= 10)
                            {

                                m10 = (int)(((int)money) / 10);
                                money -= (m10 * 10);
                                if (money >= 5)
                                {
                                    m5 = (int)(((int)money) / 5);
                                    money -= (m5 * 5);
                                    if ((money >= 0) && (money < 5))
                                    {
                                        mR = (int)(money);
                                    }
                                }
                                if ((money >= 0) && (money < 5))
                                {
                                    mR = (int)(money);
                                }
                            }
                            if (money < 10)
                            {
                                if (money >= 5)
                                {
                                    m5 = (int)(((int)money) / 5);
                                    money -= (m5 * 5);
                                    if ((money >= 0) && (money < 5))
                                    {
                                        mR = (int)(money);
                                    }
                                }
                                if ((money >= 0) && (money < 5))
                                {
                                    mR = (int)(money);
                                }
                            }
                        }
                    }
                }
            }
        }

        if (money < 500)
        {
            if (money >= 200)
            {
                m200 = (int)(((int)money) / 200);
                money -= (m200 * 200);
                if (money >= 100)
                {
                    m100 = (int)(((int)money) / 100);
                    money -= (m100 * 100);
                }
                if (money < 100)
                {
                    if (money >= 50)
                    {
                        m50 = (int)(((int)money) / 50);
                        money -= (m50 * 50);
                        if (money >= 20)
                        {
                            m20 = (int)(((int)money) / 20);
                            money -= (m20 * 20);
                        }
                        if (money < 20)
                        {
                            if (money >= 10)
                            {

                                m10 = (int)(((int)money) / 10);
                                money -= (m10 * 10);
                                if (money >= 5)
                                {
                                    m5 = (int)(((int)money) / 5);
                                    money -= (m5 * 5);
                                    if ((money >= 0) && (money < 5))
                                    {
                                        mR = (int)(money);
                                    }
                                }
                                if ((money >= 0) && (money < 5))
                                {
                                    mR = (int)(money);
                                }
                            }
                            if (money < 10)
                            {
                                if (money >= 5)
                                {
                                    m5 = (int)(((int)money) / 5);
                                    money -= (m5 * 5);
                                    if ((money >= 0) && (money < 5))
                                    {
                                        mR = (int)(money);
                                    }
                                }
                                if ((money >= 0) && (money < 5))
                                {
                                    mR = (int)(money);
                                }
                            }
                        }
                    }
                    if (money < 50)
                    {
                        if (money >= 20)
                        {
                            m20 = (int)(((int)money) / 20);
                            money -= (m20 * 20);
                        }
                        if (money < 20)
                        {
                            if (money >= 10)
                            {

                                m10 = (int)(((int)money) / 10);
                                money -= (m10 * 10);
                                if (money >= 5)
                                {
                                    m5 = (int)(((int)money) / 5);
                                    money -= (m5 * 5);
                                    if ((money >= 0) && (money < 5))
                                    {
                                        mR = (int)(money);
                                    }
                                }
                                if ((money >= 0) && (money < 5))
                                {
                                    mR = (int)(money);
                                }
                            }
                            if (money < 10)
                            {
                                if (money >= 5)
                                {
                                    m5 = (int)(((int)money) / 5);
                                    money -= (m5 * 5);
                                    if ((money >= 0) && (money < 5))
                                    {
                                        mR = (int)(money);
                                    }
                                }
                                if ((money >= 0) && (money < 5))
                                {
                                    mR = (int)(money);
                                }
                            }
                        }
                    }
                }
            }
            if (money < 200)
            {
                if (money >= 100)
                {
                    m100 = (int)(((int)money) / 100);
                    money -= (m100 * 100);
                }
                if (money < 100)
                {
                    if (money >= 50)
                    {
                        m50 = (int)(((int)money) / 50);
                        money -= (m50 * 50);
                        if (money >= 20)
                        {
                            m20 = (int)(((int)money) / 20);
                            money -= (m20 * 20);
                        }
                        if (money < 20)
                        {
                            if (money >= 10)
                            {

                                m10 = (int)(((int)money) / 10);
                                money -= (m10 * 10);
                                if (money >= 5)
                                {
                                    m5 = (int)(((int)money) / 5);
                                    money -= (m5 * 5);
                                    if ((money >= 0) && (money < 5))
                                    {
                                        mR = (int)(money);
                                    }
                                }
                                if ((money >= 0) && (money < 5))
                                {
                                    mR = (int)(money);
                                }
                            }
                            if (money < 10)
                            {
                                if (money >= 5)
                                {
                                    m5 = (int)(((int)money) / 5);
                                    money -= (m5 * 5);
                                    if ((money >= 0) && (money < 5))
                                    {
                                        mR = (int)(money);
                                    }
                                }
                                if ((money >= 0) && (money < 5))
                                {
                                    mR = (int)(money);
                                }
                            }
                        }
                    }
                    if (money < 50)
                    {
                        if (money >= 20)
                        {
                            m20 = (int)(((int)money) / 20);
                            money -= (m20 * 20);
                        }
                        if (money < 20)
                        {
                            if (money >= 10)
                            {

                                m10 = (int)(((int)money) / 10);
                                money -= (m10 * 10);
                                if (money >= 5)
                                {
                                    m5 = (int)(((int)money) / 5);
                                    money -= (m5 * 5);
                                    if ((money >= 0) && (money < 5))
                                    {
                                        mR = (int)(money);
                                    }
                                }
                                if ((money >= 0) && (money < 5))
                                {
                                    mR = (int)(money);
                                }
                            }
                            if (money < 10)
                            {
                                if (money >= 5)
                                {
                                    m5 = (int)(((int)money) / 5);
                                    money -= (m5 * 5);
                                    if ((money >= 0) && (money < 5))
                                    {
                                        mR = (int)(money);
                                    }
                                }
                                if ((money >= 0) && (money < 5))
                                {
                                    mR = (int)(money);
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    printf("\n------------------------------");
    printf("\nMinimum currency denomination :");
    printf("\n------------------------------\n");
    if (m2000 != 0)
    {
        printf("\n2000 --> %d", m2000);
    }
    if (m500 != 0)
    {
        printf("\n 500 --> %d", m500);
    }
    if (m200 != 0)
    {
        printf("\n 200 --> %d", m200);
    }
    if (m100 != 0)
    {
        printf("\n 100 --> %d", m100);
    }
    if (m50 != 0)
    {
        printf("\n  50 --> %d", m50);
    }
    if (m20 != 0)
    {
        printf("\n  20 --> %d", m20);
    }
    if (m10 != 0)
    {
        printf("\n  10 --> %d", m10);
    }
    if (m5 != 0)
    {
        printf("\n   5 --> %d", m5);
    }
    if (mR != 0)
    {
        printf("\n   1 --> %d", mR);
    }
    printf("\n\n");
    return 0;
}