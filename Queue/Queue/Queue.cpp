﻿#include "pch.h"
#include <iostream>
#include "seqQueue.h"
#include "seqQueue.cpp"
#include "seqQueue_len.h"
#include "seqQueue_len.cpp"
using namespace std;

int main()
{
    seqQueue_len<int> sq;
    cout << sq.isEmpty() << endl;
    for (int i = 1; i <= 25; ++i)
        sq.enQueue(i);
    cout << sq.isEmpty() << endl;
    while (!sq.isEmpty())
    {
        cout << sq.getHead() << ' ';
        sq.deQueue();
    }
    cout << endl << sq.isEmpty();
    return 0;
}

