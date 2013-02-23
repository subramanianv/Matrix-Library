//
//  mat.cpp
//  
//
//  Created by Subramanian Venkatesan on 22/02/13.
//  Copyright (c) 2013 SRv. All rights reserved.
//

#include <iostream>
#include "matrix.h"
int main()
{
    
    
    
    Matrix A(3,3);
    A[0][0] = 25;
    A[0][1] = 5;
    A[0][2] = 1;  
    A[1][0] = 64;
    A[1][1] = 8;
    A[1][2] = 1;
    A[2][0] = 144;
    A[2][1] = 12;
    A[2][2] = 1;
    Matrix L(3,3);
    Matrix U(3,3);
    A.decompose(L,U);
    cout<<L;
    cout<<U;
    cout<<A.determinant();
    return 0;
}