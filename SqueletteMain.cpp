/**
 *
 * \file   : ClasseEditable.cpp
 *
 * \author : 
 *
 * \date   : 
 *
**/

#include <iostream>
#include <exception>

#include "CstCodErr.h"
#include "CException.h"

using namespace std;
using namespace nsUtil;

namespace
{
    void testXXX (void) ...

} // namespace

int main (int argc, char * argv [])
{
    try
    {
        testXXX ();

        return KNoExc;
    }
    catch (const CException & e)
    {
        cerr << "Erreur        : " << e.getLibelle () << '\n' 
             << "Code d'erreur = " << e.getCodErr ()  << '\n';
        return e.getCodErr();
    }    
    catch (const exception & e)
    {
        cerr << "Exception standard : " << e.what () << '\n'; 
        return KExcStd;
    }    
    catch (...)
    {
        cerr << "Exception inconnue\n";
        return KExcInconnue;
    }    

} // main()