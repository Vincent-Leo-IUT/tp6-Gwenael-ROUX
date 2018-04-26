/**
 *
 * \file     CstCodErr.h
 *
 * \authors  M. Laporte, D. Mathieu
 *
 * \date     10/02/2011
 *
 * \version  V1.0
 *
 * \brief    Codes d'erreurs
 *
 **/
#ifndef __CSTCODERR_H__
#define __CSTCODERR_H__

namespace nsUtil
{
    enum {KNoExc       = 0,
          KNoError     = 0,

          KExcStd      = 254,
          KExcInconnue = 255 
         };

} // namespace nsUtil

#endif /*  __CSTCODERR_H__  */