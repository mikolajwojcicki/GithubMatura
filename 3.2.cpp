#include "config.h"
#ifdef E32
#include <iostream>
#include <fstream>
#include <list>

using namespace std;

void zadania::e32()
{
    fstream dane;
    dane.open("dane3.txt");
    list <int>lista;
    int p1 = 0;
    int p2 = 0;
    int t_d = 0;
    int m_d = 0;
    int m_war = 0;
    int t_war = 0;
    while (dane >> p1) {
        dane >> p2;
        lista.push_back(p2-p1+1);
    };
    lista.sort();
    while (!lista.empty()) {
        if (lista.front() == t_war) {
            t_d++;
            lista.pop_front();
        }
        else {
            if (t_d > m_d) {
                m_d = t_d;
                m_war = t_war;
            }
            t_war = lista.front();
            lista.pop_front();
            t_d = 1;
        }
    }
    cout << m_war << " " << m_d;
}
#endif