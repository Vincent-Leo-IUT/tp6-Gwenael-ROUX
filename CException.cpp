/**
 *
 * \file     CException.cpp
 *
 * \authors  M. Laporte, D. Mathieu
 *
 * \date     10/02/2011
 *
 * \version  V1.0
 *
 * \brief    classe CException
 *
 **/
#include <iostream>
#include <string>

#include "CstCodErr.h"
#include "CException.h"

using namespace std;

#define CEXC nsUtil::CException

//==========================
// Classe nsUtil::CException
//==========================

CEXC::CException (const string & libelle /* = string () */,
                  const unsigned codErr  /* = KNoExc  */) noexcept 
    : myLibelle (libelle), myCodErr (codErr) {}

const string & CEXC::getLibelle (void) const noexcept 
{
    return myLibelle;

} // GetLibelle()

unsigned CEXC::getCodErr (void) const noexcept { return myCodErr;  }

CEXC::~CException (void) noexcept {}

const char* CEXC::what (void) const noexcept  { return myLibelle.c_str(); }

void CEXC::display (void) const
{ 
    cout << "Exception : " << myLibelle << '\n'
         << "Code      : " << myCodErr  << endl;

} // Afficher()

#undef CEXC